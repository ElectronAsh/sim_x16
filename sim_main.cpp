#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#include <atomic>
//#include <fstream>

#include <verilated.h>
#include "Vx16_main.h"
#include "Vx16_main___024root.h"


#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>

#include "imgui_memory_editor.h"

uint32_t t_size;
uint32_t t_addr;

uint32_t exe_load_start;
uint32_t exe_load_end;

uint32_t ram_load_start;
uint32_t ram_load_end;

uint32_t seg_addr;
uint32_t s_size;
uint32_t pc0;
uint32_t gp0;

bool exe_loaded = 0;

// DirectX data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGIFactory*            g_pFactory = NULL;
static ID3D11Buffer*            g_pVB = NULL;
static ID3D11Buffer*            g_pIB = NULL;
static ID3D10Blob*              g_pVertexShaderBlob = NULL;
static ID3D11VertexShader*      g_pVertexShader = NULL;
static ID3D11InputLayout*       g_pInputLayout = NULL;
static ID3D11Buffer*            g_pVertexConstantBuffer = NULL;
static ID3D10Blob*              g_pPixelShaderBlob = NULL;
static ID3D11PixelShader*       g_pPixelShader = NULL;
static ID3D11SamplerState*      g_pFontSampler = NULL;
static ID3D11ShaderResourceView*g_pFontTextureView = NULL;
static ID3D11RasterizerState*   g_pRasterizerState = NULL;
static ID3D11BlendState*        g_pBlendState = NULL;
static ID3D11DepthStencilState* g_pDepthStencilState = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;


// Instantiation of module.
Vx16_main* top = new Vx16_main;

char my_string[1024];

char serial_string[1024];
int serial_index = 0;

int str_i = 0;

unsigned int row;
unsigned int col;
unsigned int bank;
unsigned int dram_address;

int pix_count = 0;

unsigned char rgb[3];
bool prev_vsync = 0;
int frame_count = 0;

bool vga_file_select = 0;

bool prev_hsync = 0;
int line_count = 0;

FILE *vgap;

bool run_enable = 0;
bool single_step = 0;
bool multi_step = 0;
int multi_step_amount = 1024;

bool trig_irq = 0;
bool trig_nmi = 0;

char keycode = 0x30;
bool trig_kb = 0;
bool trig_paste = 0;
bool trig_prg = 0;

FILE *pastefile;
int paste_size = 0;

FILE *prgfile;
int prg_size = 0;

// Data
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;

void CreateRenderTarget()
{
	ID3D11Texture2D* pBackBuffer;
	g_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
	g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
	pBackBuffer->Release();
}

void CleanupRenderTarget()
{
	if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}

HRESULT CreateDeviceD3D(HWND hWnd)
{
	// Setup swap chain
	DXGI_SWAP_CHAIN_DESC sd;
	ZeroMemory(&sd, sizeof(sd));
	sd.BufferCount = 2;
	sd.BufferDesc.Width = 0;
	sd.BufferDesc.Height = 0;
	sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.BufferDesc.RefreshRate.Numerator = 60;
	sd.BufferDesc.RefreshRate.Denominator = 1;
	sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.OutputWindow = hWnd;
	sd.SampleDesc.Count = 1;
	sd.SampleDesc.Quality = 0;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	UINT createDeviceFlags = 0;
	//createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
	D3D_FEATURE_LEVEL featureLevel;
	const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
	if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
		return E_FAIL;

	CreateRenderTarget();

	return S_OK;
}

void CleanupDeviceD3D()
{
	CleanupRenderTarget();
	if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
	if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
	if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
		return true;

	switch (msg)
	{
		case WM_SIZE:
			if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
			{
				CleanupRenderTarget();
				g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
				CreateRenderTarget();
			}
			return 0;
		case WM_SYSCOMMAND:
			if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
				return 0;
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
		case WM_CHAR:
			keycode = wParam;
			trig_kb = 1;
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}

static float values[90] = { 0 };
static int values_offset = 0;


vluint64_t main_time = 0;	// Current simulation time.

unsigned int file_size;

unsigned char buffer[16];

unsigned int low_ram_size = 1024 * 64;	// 64KB. (8-bit wide).
uint8_t *low_ram_ptr = (uint8_t *) malloc(low_ram_size);

unsigned int hi_ram_size = 1024 * 2048;	// 2MB. (8-bit wide).
uint8_t *hi_ram_ptr = (uint8_t *) malloc(hi_ram_size);

unsigned int rom_size = 1024 * 2048;	// 2MB. (8-bit wide).
uint8_t *rom_ptr = (uint8_t *) malloc(rom_size);

unsigned int avr_size = 1024 * 8;	// 8KB. (8-bit wide).
uint8_t *avr_ptr = (uint8_t *) malloc(avr_size);

unsigned int vram_size = 1024 * 1024 * 4;	// 4MB. (32-bit wide).
uint32_t *vram_ptr = (uint32_t *) malloc(vram_size);

unsigned int disp_size = 1024 * 1024 * 8;	// 4MB. (32-bit wide).
uint32_t *disp_ptr = (uint32_t *)malloc(disp_size);

uint32_t vga_size  = 1024 * 1024 * 4;		// 4MB. (32-bit wide).
uint32_t *vga_ptr  = (uint32_t *) malloc(vga_size);

uint32_t exe_size = 1024 * 1024 * 2;		// 2MB. (32-bit wide).
uint32_t *exe_ptr = (uint32_t *) malloc(exe_size);

uint32_t first_cmd_word = 0;

unsigned int pal_size = 1024 * 16;			// 16KB. (16-bit wide).
uint16_t* pal_ptr = (uint16_t*)malloc(pal_size);


uint8_t clk_cnt = 0;


double sc_time_stamp () {	// Called by $time in Verilog.
	return main_time;
}


ImVector<char*>       Items;
static char* Strdup(const char *str) { size_t len = strlen(str) + 1; void* buf = malloc(len); IM_ASSERT(buf); return (char*)memcpy(buf, (const void*)str, len); }

void    MyAddLog(const char* fmt, ...) IM_FMTARGS(2)
{
	// FIXME-OPT
	char buf[1024];
	va_list args;
	va_start(args, fmt);
	vsnprintf(buf, IM_ARRAYSIZE(buf), fmt, args);
	buf[IM_ARRAYSIZE(buf) - 1] = 0;
	va_end(args);
	Items.push_back(Strdup(buf));
}

// Demonstrate creating a simple console window, with scrolling, filtering, completion and history.
// For the console example, here we are using a more C++ like approach of declaring a class to hold the data and the functions.
struct MyExampleAppConsole
{
	char                  InputBuf[256];
	ImVector<const char*> Commands;
	ImVector<char*>       History;
	int                   HistoryPos;    // -1: new line, 0..History.Size-1 browsing history.
	ImGuiTextFilter       Filter;
	bool                  AutoScroll;
	bool                  ScrollToBottom;

	MyExampleAppConsole()
	{
		ClearLog();
		memset(InputBuf, 0, sizeof(InputBuf));
		HistoryPos = -1;
		Commands.push_back("HELP");
		Commands.push_back("HISTORY");
		Commands.push_back("CLEAR");
		Commands.push_back("CLASSIFY");  // "classify" is only here to provide an example of "C"+[tab] completing to "CL" and displaying matches.
		AutoScroll = true;
		ScrollToBottom = false;
		MyAddLog("Commander X16 - Sim start");
		MyAddLog("");
	}
	~MyExampleAppConsole()
	{
		ClearLog();
		for (int i = 0; i < History.Size; i++)
			free(History[i]);
	}

	// Portable helpers
	static int   Stricmp(const char* str1, const char* str2) { int d; while ((d = toupper(*str2) - toupper(*str1)) == 0 && *str1) { str1++; str2++; } return d; }
	static int   Strnicmp(const char* str1, const char* str2, int n) { int d = 0; while (n > 0 && (d = toupper(*str2) - toupper(*str1)) == 0 && *str1) { str1++; str2++; n--; } return d; }
	//	static char* Strdup(const char *str) { size_t len = strlen(str) + 1; void* buf = malloc(len); IM_ASSERT(buf); return (char*)memcpy(buf, (const void*)str, len); }
	static void  Strtrim(char* str) { char* str_end = str + strlen(str); while (str_end > str && str_end[-1] == ' ') str_end--; *str_end = 0; }

	void    ClearLog()
	{
		for (int i = 0; i < Items.Size; i++)
			free(Items[i]);
		Items.clear();
	}

	/*
	void    MyAddLog(const char* fmt, ...) IM_FMTARGS(2)
	{
	// FIXME-OPT
	char buf[1024];
	va_list args;
	va_start(args, fmt);
	vsnprintf(buf, IM_ARRAYSIZE(buf), fmt, args);
	buf[IM_ARRAYSIZE(buf) - 1] = 0;
	va_end(args);
	Items.push_back(Strdup(buf));
	}
	*/

	void    Draw(const char* title, bool* p_open)
	{
		ImGui::SetNextWindowSize(ImVec2(520, 600), ImGuiCond_FirstUseEver);
		if (!ImGui::Begin(title, p_open))
		{
			ImGui::End();
			return;
		}

		// As a specific feature guaranteed by the library, after calling Begin() the last Item represent the title bar. So e.g. IsItemHovered() will return true when hovering the title bar.
		// Here we create a context menu only available from the title bar.
		if (ImGui::BeginPopupContextItem())
		{
			if (ImGui::MenuItem("Close Console"))
				*p_open = false;
			ImGui::EndPopup();
		}

		//ImGui::TextWrapped("This example implements a console with basic coloring, completion and history. A more elaborate implementation may want to store entries along with extra data such as timestamp, emitter, etc.");
		//ImGui::TextWrapped("Enter 'HELP' for help, press TAB to use text completion.");

		// TODO: display items starting from the bottom

		//if (ImGui::SmallButton("Add Dummy Text")) { MyAddLog("%d some text", Items.Size); MyAddLog("some more text"); MyAddLog("display very important message here!"); } ImGui::SameLine();
		//if (ImGui::SmallButton("Add Dummy Error")) { MyAddLog("[error] something went wrong"); } ImGui::SameLine();
		if (ImGui::SmallButton("Clear")) { ClearLog(); } ImGui::SameLine();
		bool copy_to_clipboard = ImGui::SmallButton("Copy");
		//static float t = 0.0f; if (ImGui::GetTime() - t > 0.02f) { t = ImGui::GetTime(); MyAddLog("Spam %f", t); }

		ImGui::Separator();

		// Options menu
		if (ImGui::BeginPopup("Options"))
		{
			ImGui::Checkbox("Auto-scroll", &AutoScroll);
			ImGui::EndPopup();
		}

		// Options, Filter
		if (ImGui::Button("Options"))
			ImGui::OpenPopup("Options");
		ImGui::SameLine();
		Filter.Draw("Filter (\"incl,-excl\") (\"error\")", 180);
		ImGui::Separator();

		const float footer_height_to_reserve = ImGui::GetStyle().ItemSpacing.y + ImGui::GetFrameHeightWithSpacing(); // 1 separator, 1 input text
		ImGui::BeginChild("ScrollingRegion", ImVec2(0, -footer_height_to_reserve), false, ImGuiWindowFlags_HorizontalScrollbar); // Leave room for 1 separator + 1 InputText
		if (ImGui::BeginPopupContextWindow())
		{
			if (ImGui::Selectable("Clear")) ClearLog();
			ImGui::EndPopup();
		}

		// Display every line as a separate entry so we can change their color or add custom widgets. If you only want raw text you can use ImGui::TextUnformatted(log.begin(), log.end());
		// NB- if you have thousands of entries this approach may be too inefficient and may require user-side clipping to only process visible items.
		// You can seek and display only the lines that are visible using the ImGuiListClipper helper, if your elements are evenly spaced and you have cheap random access to the elements.
		// To use the clipper we could replace the 'for (int i = 0; i < Items.Size; i++)' loop with:
		//     ImGuiListClipper clipper(Items.Size);
		//     while (clipper.Step())
		//         for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++)
		// However, note that you can not use this code as is if a filter is active because it breaks the 'cheap random-access' property. We would need random-access on the post-filtered list.
		// A typical application wanting coarse clipping and filtering may want to pre-compute an array of indices that passed the filtering test, recomputing this array when user changes the filter,
		// and appending newly elements as they are inserted. This is left as a task to the user until we can manage to improve this example code!
		// If your items are of variable size you may want to implement code similar to what ImGuiListClipper does. Or split your data into fixed height items to allow random-seeking into your list.
		ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 1)); // Tighten spacing
		if (copy_to_clipboard)
			ImGui::LogToClipboard();
		for (int i = 0; i < Items.Size; i++)
		{
			const char* item = Items[i];
			if (!Filter.PassFilter(item))
				continue;

			// Normally you would store more information in your item (e.g. make Items[] an array of structure, store color/type etc.)
			bool pop_color = false;
			if (strstr(item, "[error]")) { ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 0.4f, 0.4f, 1.0f)); pop_color = true; }
			else if (strncmp(item, "# ", 2) == 0) { ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 0.8f, 0.6f, 1.0f)); pop_color = true; }
			ImGui::TextUnformatted(item);
			if (pop_color)
				ImGui::PopStyleColor();
		}
		if (copy_to_clipboard)
			ImGui::LogFinish();

		if (ScrollToBottom || (AutoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY()))
			ImGui::SetScrollHereY(1.0f);
		ScrollToBottom = false;

		ImGui::PopStyleVar();
		ImGui::EndChild();
		ImGui::Separator();

		// Command-line
		bool reclaim_focus = false;
		if (ImGui::InputText("Input", InputBuf, IM_ARRAYSIZE(InputBuf), ImGuiInputTextFlags_EnterReturnsTrue | ImGuiInputTextFlags_CallbackCompletion | ImGuiInputTextFlags_CallbackHistory, &TextEditCallbackStub, (void*)this))
		{
			char* s = InputBuf;
			Strtrim(s);
			if (s[0])
				ExecCommand(s);
			strcpy(s, "");
			reclaim_focus = true;
		}

		// Auto-focus on window apparition
		ImGui::SetItemDefaultFocus();
		if (reclaim_focus)
			ImGui::SetKeyboardFocusHere(-1); // Auto focus previous widget

		ImGui::End();
	}

	void    ExecCommand(const char* command_line)
	{
		MyAddLog("# %s\n", command_line);

		// Insert into history. First find match and delete it so it can be pushed to the back. This isn't trying to be smart or optimal.
		HistoryPos = -1;
		for (int i = History.Size - 1; i >= 0; i--)
			if (Stricmp(History[i], command_line) == 0)
			{
				free(History[i]);
				History.erase(History.begin() + i);
				break;
			}
		History.push_back(Strdup(command_line));

		// Process command
		if (Stricmp(command_line, "CLEAR") == 0)
		{
			ClearLog();
		}
		else if (Stricmp(command_line, "HELP") == 0)
		{
			MyAddLog("Commands:");
			for (int i = 0; i < Commands.Size; i++)
				MyAddLog("- %s", Commands[i]);
		}
		else if (Stricmp(command_line, "HISTORY") == 0)
		{
			int first = History.Size - 10;
			for (int i = first > 0 ? first : 0; i < History.Size; i++)
				MyAddLog("%3d: %s\n", i, History[i]);
		}
		else
		{
			MyAddLog("Unknown command: '%s'\n", command_line);
		}

		// On commad input, we scroll to bottom even if AutoScroll==false
		ScrollToBottom = true;
	}

	static int TextEditCallbackStub(ImGuiInputTextCallbackData* data) // In C++11 you are better off using lambdas for this sort of forwarding callbacks
	{
		MyExampleAppConsole* console = (MyExampleAppConsole*)data->UserData;
		return console->TextEditCallback(data);
	}

	int     TextEditCallback(ImGuiInputTextCallbackData* data)
	{
		//MyAddLog("cursor: %d, selection: %d-%d", data->CursorPos, data->SelectionStart, data->SelectionEnd);
		switch (data->EventFlag)
		{
		case ImGuiInputTextFlags_CallbackCompletion:
		{
			// Example of TEXT COMPLETION

			// Locate beginning of current word
			const char* word_end = data->Buf + data->CursorPos;
			const char* word_start = word_end;
			while (word_start > data->Buf)
			{
				const char c = word_start[-1];
				if (c == ' ' || c == '\t' || c == ',' || c == ';')
					break;
				word_start--;
			}

			// Build a list of candidates
			ImVector<const char*> candidates;
			for (int i = 0; i < Commands.Size; i++)
				if (Strnicmp(Commands[i], word_start, (int)(word_end - word_start)) == 0)
					candidates.push_back(Commands[i]);

			if (candidates.Size == 0)
			{
				// No match
				MyAddLog("No match for \"%.*s\"!\n", (int)(word_end - word_start), word_start);
			}
			else if (candidates.Size == 1)
			{
				// Single match. Delete the beginning of the word and replace it entirely so we've got nice casing
				data->DeleteChars((int)(word_start - data->Buf), (int)(word_end - word_start));
				data->InsertChars(data->CursorPos, candidates[0]);
				data->InsertChars(data->CursorPos, " ");
			}
			else
			{
				// Multiple matches. Complete as much as we can, so inputing "C" will complete to "CL" and display "CLEAR" and "CLASSIFY"
				int match_len = (int)(word_end - word_start);
				for (;;)
				{
					int c = 0;
					bool all_candidates_matches = true;
					for (int i = 0; i < candidates.Size && all_candidates_matches; i++)
						if (i == 0)
							c = toupper(candidates[i][match_len]);
						else if (c == 0 || c != toupper(candidates[i][match_len]))
							all_candidates_matches = false;
					if (!all_candidates_matches)
						break;
					match_len++;
				}

				if (match_len > 0)
				{
					data->DeleteChars((int)(word_start - data->Buf), (int)(word_end - word_start));
					data->InsertChars(data->CursorPos, candidates[0], candidates[0] + match_len);
				}

				// List matches
				MyAddLog("Possible matches:\n");
				for (int i = 0; i < candidates.Size; i++)
					MyAddLog("- %s\n", candidates[i]);
			}

			break;
		}
		case ImGuiInputTextFlags_CallbackHistory:
		{
			// Example of HISTORY
			const int prev_history_pos = HistoryPos;
			if (data->EventKey == ImGuiKey_UpArrow)
			{
				if (HistoryPos == -1)
					HistoryPos = History.Size - 1;
				else if (HistoryPos > 0)
					HistoryPos--;
			}
			else if (data->EventKey == ImGuiKey_DownArrow)
			{
				if (HistoryPos != -1)
					if (++HistoryPos >= History.Size)
						HistoryPos = -1;
			}

			// A better implementation would preserve the data on the current input line along with cursor position.
			if (prev_history_pos != HistoryPos)
			{
				const char* history_str = (HistoryPos >= 0) ? History[HistoryPos] : "";
				data->DeleteChars(0, data->BufTextLen);
				data->InsertChars(0, history_str);
			}
		}
		}
		return 0;
	}
};

static void ShowMyExampleAppConsole(bool* p_open)
{
	static MyExampleAppConsole console;
	console.Draw("Debug Log", p_open);
}

uint8_t ram_bank = 0;
uint8_t rom_bank = 0;

int verilate() {
	if (!Verilated::gotFinish()) {
		if (main_time < 8) top->reset_n = 0;   // Assert reset (active LOW)
		else if (main_time == 8) top->reset_n = 1;	// Do == here, so we can still reset it in the main loop.

		pix_count++;

		/*
		if (top->rootp->x16_main__DOT__cpu_inst__DOT__phi_1 && top->rootp->x16_main__DOT__cpu_inst__DOT__sync) {
			printf("PC: 0x%04X   DIN: 0x%02X\n", top->rootp->x16_main__DOT__cpu_inst__DOT__PC, top->rootp->x16_main__DOT__cpu_din);
		}
		*/

		if (top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__h_active && top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__v_active) {
			uint16_t x_counter = top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter;
			uint16_t y_counter = top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter;
			uint32_t disp_addr = (y_counter*640) + x_counter;
			rgb[0] = (top->rootp->vga_r<<4) | top->rootp->vga_r;
			rgb[1] = (top->rootp->vga_g<<4) | top->rootp->vga_g;
			rgb[2] = (top->rootp->vga_b<<4) | top->rootp->vga_b;
			disp_ptr[disp_addr] = 0xff<<24 | rgb[2] << 16 | rgb[1] << 8 | rgb[0];	// Our debugger framebuffer is in the 32-bit ABGR format.
		}

		ram_bank = top->rootp->x16_main__DOT__ram_bank;
		rom_bank = top->rootp->x16_main__DOT__rom_bank;

		if (top->rootp->x16_main__DOT__bank_cs) {	// RAM/ROM Bank reg READS.
			if ( (top->rootp->cpu_addr&1)==0 ) top->rootp->cpu_din = ram_bank;
			else top->rootp->cpu_din = rom_bank;
		}
		else if (top->rootp->x16_main__DOT__low_ram_cs) {
			if (top->rootp->cpu_we) low_ram_ptr[ top->rootp->cpu_addr&0x9fff ] = top->rootp->cpu_dout;	// Low RAM Writes.
			top->rootp->cpu_din = low_ram_ptr[ top->rootp->cpu_addr&0x9fff ];							// Low RAM Reads.
		}
		else if (top->rootp->x16_main__DOT__via_1_cs) {	// VIA 1
			//top->rootp->cpu_din = top->rootp->x16_main__DOT__via_dout;
			top->rootp->cpu_din = 0xff;
		}
		else if (top->rootp->x16_main__DOT__via_2_cs) {	// VIA 2
			top->rootp->cpu_din = 0xff;
		}
		else if (top->rootp->x16_main__DOT__vera_cs) {
			if (top->rootp->cpu_addr==0x9F3E) top->rootp->cpu_din = 0xff;		// $9F3E	SPI_DATA
			else if (top->rootp->cpu_addr==0x9F3F) top->rootp->cpu_din = 0x00;	// $9F3F	SPI_CTRL. [7]=Busy. [2]=Autotx. [1]=Slow. [0]=Select=1=Assert CS_N Low.
			else top->rootp->cpu_din = top->rootp->x16_main__DOT__vera_data;	// VERA Reads.
		}
		else if (top->rootp->x16_main__DOT__hi_ram_cs) {
			if (top->rootp->cpu_we) hi_ram_ptr[ (ram_bank<<13)+(top->rootp->cpu_addr&0x1fff) ] = top->rootp->cpu_dout;	// High RAM Writes.
			if (ram_bank<64) top->rootp->cpu_din = hi_ram_ptr[ (ram_bank<<13)+(top->rootp->cpu_addr&0x1fff) ];			// High RAM Reads.
			else top->rootp->cpu_din = (top->rootp->cpu_addr >> 8) & 0xff;	// Open bus.
		}
		else if (top->rootp->x16_main__DOT__banked_rom_cs) {
			if (rom_bank<32) top->rootp->cpu_din = rom_ptr[ (rom_bank<<14)+(top->rootp->cpu_addr&0x3fff) ];		// ROM banked as full 16KB chunks.
			else top->rootp->cpu_din = (top->rootp->cpu_addr >> 8) & 0xff;	// No Cart / Open bus.
		}
		else top->rootp->cpu_din = 0xff;	// Default value on Data bus.

		uint16_t avr_data;
		avr_data  = avr_ptr[ (top->rootp->x16_main__DOT__avr_pgm_addr<<1)+1 ];
		avr_data |= avr_ptr[ (top->rootp->x16_main__DOT__avr_pgm_addr<<1)+0 ] << 8;
		top->rootp->x16_main__DOT__avr_pgm_data = avr_data;

		if (trig_kb) {
			trig_kb = 0;
			if (keycode==0x0A) keycode = 0x0D;
			hi_ram_ptr[ 0x800 ] = keycode;
			hi_ram_ptr[ 0x80A ] = 0x01;	// Character count.
		}

		if (trig_paste) {
			trig_paste = 0;
			//pastefile = fopen("labyrinth.bas", "r");
			pastefile = fopen("mystify.bas", "r");
			//pastefile = fopen("CONFETTI2.BAS", "r");
			if (pastefile != NULL) {
				sprintf(my_string, "\nPaste file loaded OK.\n");  MyAddLog(my_string);
				fseek(pastefile, 0L, SEEK_END);
				paste_size = ftell(pastefile);
				fseek(pastefile, 0L, SEEK_SET);
			}
			else { sprintf(my_string, "\nPaste file not found!\n\n"); MyAddLog(my_string); }
		}
		else if (paste_size>0) {
			if (hi_ram_ptr[ 0x80A ] == 0x00) {	// Make sure previous char has been grabbed by the Kernal.
				keycode = fgetc(pastefile);
				if (keycode==0x0A) keycode = 0x0D;
				hi_ram_ptr[ 0x800 ] = keycode;
				hi_ram_ptr[ 0x80A ] = 0x01;	// Character count.
				paste_size--;
			}
		}

		if (trig_prg) {
			trig_prg = 0;
			//prgfile = fopen("OFFTFLR.PRG", "rb");
			//prgfile = fopen("WHEEL-HIRES.PRG", "rb");
			//prgfile = fopen("BUTTERFLY.PRG", "rb");
			//prgfile = fopen("rnbwtext.prg", "rb");
			//prgfile = fopen("BUBBLE.PRG", "rb");
			//prgfile = fopen("CHARS-R39.PRG", "rb");
			//prgfile = fopen("bobs.prg", "rb");
			//prgfile = fopen("HOLIDAY2022.PRG", "rb");
			prgfile = fopen("SNOW.PRG", "rb");
			//prgfile = fopen("CELESTEMAP.PRG", "rb");
			//prgfile = fopen("colorbars.prg", "rb");
			//prgfile = fopen("FANCYMAN.PRG", "rb");
			//prgfile = fopen("CHICKEN.PRG", "rb");
			//prgfile = fopen("VOXEL.PRG", "rb");
			//prgfile = fopen("sortdemocolor2.PRG", "rb");
			//prgfile = fopen("build.PRG", "rb");
			//prgfile = fopen("PARA.PRG", "rb");
			//prgfile = fopen("COLORDEMO.PRG", "rb");
			//prgfile = fopen("amiga.prg", "rb");
			//prgfile = fopen("MANCOL.prg", "rb");
			//prgfile = fopen("JULIA.PRG", "rb");
			//prgfile = fopen("tilemap.prg", "rb");
			//prgfile = fopen("POOL.PRG", "rb");
			//prgfile = fopen("cobramk3-gfx.prg", "rb");
			//prgfile = fopen("8bppcow_fx.prg", "rb");
			fseek(prgfile, 0L, SEEK_END);
			prg_size = ftell(prgfile);
			fseek(prgfile, 0L, SEEK_SET);

			uint16_t load_addr = fgetc(prgfile);
			load_addr |= fgetc(prgfile) << 8;

			for (int i=0; i<prg_size; i++) {
				low_ram_ptr[ load_addr ] = fgetc(prgfile);
				load_addr++;
			}
		}

		/*
		if (top->rootp->x16_main__DOT__via_1_cs) {
			if (top->rootp->x16_main__DOT__cpu_we) printf("VIA1 Write. Addr: 0x%02X  Data: 0x%02X\n", top->rootp->x16_main__DOT__cpu_addr&0x1F, top->rootp->x16_main__DOT__cpu_dout);
			else printf("VIA1 Read.  Addr: 0x%02X  Data: 0x%02X\n", top->rootp->x16_main__DOT__cpu_addr&0x1F, top->rootp->x16_main__DOT__via_dout);
			//run_enable = 0;
		}
		*/

		/*
		if (top->rootp->x16_main__DOT__io_cs) {
			if (!top->rootp->cpu_we) printf("IO Read: 0x%04X\n", top->rootp->cpu_addr);
			else printf("IO Write: 0x%04X  Data: 0x%02X\n", top->rootp->cpu_addr, top->rootp->cpu_dout);
			//run_enable = 0;
		}
		*/

		/*
		if (top->rootp->x16_main__DOT__top_inst__DOT__spi_txstart && !top->rootp->x16_main__DOT__top_inst__DOT__spi_busy) {
			printf("SPI TX: 0x%02X\n", top->rootp->x16_main__DOT__top_inst__DOT__spi_txdata);
		}
		*/

		//if (top->rootp->cpu_addr==0x01f6 && top->rootp->cpu_we) run_enable = 0;
		//if (top->rootp->cpu_addr==0x01f6 && top->rootp->cpu_we) run_enable = 0;

		//if (rom_bank==7) run_enable = 0;

		//if (top->rootp->x16_main__DOT__bank_cs && top->rootp->cpu_we) run_enable = 0;
		//if (top->rootp->x16_main__DOT__vera_cs && top->rootp->cpu_we) run_enable = 0;
			
		/*
		if (top->rootp->cpu_irq) top->rootp->cpu_irq = 0;
		if (trig_irq) {
			top->rootp->cpu_irq = 1;
			trig_irq = 0;
		}
		*/

		if (top->rootp->cpu_nmi) top->rootp->cpu_nmi = 0;
		if (trig_nmi) {
			top->rootp->cpu_nmi = 1;
			trig_nmi = 0;
		}

		if (top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__next_line) {
			//printf("Line Count: %d\n", line_count);
			//printf("Pix count: %d\n", pix_count);
			line_count++;
			pix_count = 0;
		}
		//prev_hsync = top->rootp->vga_hsync;
			
		if (top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__next_frame) {
			frame_count++;
			line_count = 0;

			/*
			printf("Frame: %06d  VSync! \n", frame_count);
				
			if (frame_count > 46) {
				printf("Dumping framebuffer to vga_out.raw!\n");
				char vga_filename[40];
				sprintf(vga_filename, "vga_frame_%d.raw", frame_count);
				vgap = fopen(vga_filename, "wb");
				if (vgap != NULL) {
					printf("\nOpened %s for writing OK.\n", vga_filename);
				}
				else {
					printf("\nCould not open %s for writing!\n\n", vga_filename);
					return 0;
				};
				fseek(vgap, 0L, SEEK_SET);
			}
				
			for (int i = 0; i < (1600 * 521); i++) {	// Pixels per line * total lines.
				rgb[0] = (fb0_ptr[i] & 0x001F) << 3;	// [4:0] Red.
				rgb[1] = (fb0_ptr[i] & 0x03E0) >> 2;	// [9:5] Green.
				rgb[2] = (fb0_ptr[i] & 0x7C00) >> 7;	// [14:10] Blue.

				//rgb[0] = (vga_ptr[i] & 0xFF0000) >> 24;
				//rgb[1] = (vga_ptr[i] & 0x00FF00) >> 16;
				//rgb[2] = (vga_ptr[i] & 0x0000FF) >> 8;

				//if (frame_count > =75) fwrite(rgb, 1, 3, vgap);	// Write pixels to the file.
				if (frame_count >= 75) fwrite(rgb, 3, 1, vgap);	// Write pixels to the file.
			}
			if (frame_count > 46) fclose(vgap);
			*/

			//printf("pc: %08X  addr: %08X  inst: %08X\n", top->pc << 2, top->interp_addr, top->inst);
		}
		//prev_vsync = top->rootp->vga_vsync;

		//top->eval();            // Evaluate model!
		//main_time++;            // Time passes...

		top->clock = 1;
		top->eval();            // Evaluate model!
		top->clock = 0;
		top->eval();            // Evaluate model!
		main_time++;            // Time passes...

		return 1;
	}
	// Stop Verilating...
	top->final();
	delete top;
	exit(0);
	return 0;
}


int my_count = 0;

static MemoryEditor mem_edit_1;
static MemoryEditor mem_edit_2;
static MemoryEditor mem_edit_3;
static MemoryEditor mem_edit_4;

int main(int argc, char** argv, char** env) {

	// Create application window
	WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T("ImGui Example"), NULL };
	RegisterClassEx(&wc);
	HWND hwnd = CreateWindow(wc.lpszClassName, _T("Dear ImGui DirectX11 Example"), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);

	// Initialize Direct3D
	if (CreateDeviceD3D(hwnd) < 0)
	{
		CleanupDeviceD3D();
		UnregisterClass(wc.lpszClassName, wc.hInstance);
		return 1;
	}

	// Show the window
	ShowWindow(hwnd, SW_SHOWMAXIMIZED);
	UpdateWindow(hwnd);

	// Setup Dear ImGui context
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	//io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls

	// Setup Dear ImGui style
	ImGui::StyleColorsDark();
	//ImGui::StyleColorsClassic();

	// Setup Platform/Renderer bindings
	ImGui_ImplWin32_Init(hwnd);
	ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

	// Load Fonts
	// - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
	// - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
	// - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
	// - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
	// - Read 'misc/fonts/README.txt' for more instructions and details.
	// - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
	//io.Fonts->AddFontDefault();
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/Roboto-Medium.ttf", 16.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/Cousine-Regular.ttf", 15.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/DroidSans.ttf", 16.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/ProggyTiny.ttf", 10.0f);
	//ImFont* font = io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\ArialUni.ttf", 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
	//IM_ASSERT(font != NULL);


	Verilated::commandArgs(argc, argv);

	uint32_t value = 0xff222222;
	for (uint32_t i = 0; i < disp_size/2; i+=4 ) {
		memcpy(((char*)disp_ptr) + i, &value, 4);
	}

	memset(vga_ptr,  0xAA, vga_size);
	memset(low_ram_ptr, 0x00, low_ram_size);
	memset(hi_ram_ptr, 0x00, hi_ram_size);
	
	/*
	// Can't get this to work without it segfaulting atm? OzOnE.
	FILE *fontp;
	fontp = fopen("fontRomData.bin","rb");
	if (fontp!=NULL) {
		printf("\nLoaded Font ROM file OK.\n\n");
	} else {
		printf("\nFont ROM file not found!\n\n");
		return 0;
	};	
	for (uint32_t i=0;i<2048;i++) {
		fread(buffer, 1, 1, fontp);
		uint32_t font_data = buffer[0];
		osd->set_mem(i, font_data);
	};
	*/

	FILE *romfile;
	romfile = fopen("rom.bin", "rb");
	if (romfile != NULL) { sprintf(my_string, "\nKernel ROM file loaded OK.\n");  MyAddLog(my_string); }
	else { sprintf(my_string, "\nKernel ROM file not found!\n\n"); MyAddLog(my_string); return 0; }
	//unsigned int file_size;
	fseek(romfile, 0L, SEEK_END);
	file_size = ftell(romfile);
	fseek(romfile, 0L, SEEK_SET);
	fread(rom_ptr, 1, rom_size, romfile);	// Read the whole ROM file into RAM.

	FILE *avrfile;
	avrfile = fopen("x16-smc.bin", "rb");
	if (avrfile != NULL) { sprintf(my_string, "\nSMC bin file loaded OK.\n");  MyAddLog(my_string); }
	else { sprintf(my_string, "\nSMC bin file not found!\n\n"); MyAddLog(my_string); return 0; }
	fseek(avrfile, 0L, SEEK_END);
	file_size = ftell(avrfile);
	fseek(avrfile, 0L, SEEK_SET);
	fread(avr_ptr, 1, avr_size, avrfile);	// Read the whole ROM file into RAM.
	

	/*
	vgap = fopen("vga_out.raw","wb");
	if (vgap!=NULL) {
		printf("\nOpened vga_out.raw for writing OK.\n");
	}
	else {	
		printf("\nCould not open vga_out.raw for writing!\n\n");
		return 0;
	};
	*/

	// Our state
	bool show_demo_window = true;
	bool show_another_window = false;
	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);


	// Build texture atlas
	int width  = 640;
	int height = 480;

	// Upload texture to graphics system
	D3D11_TEXTURE2D_DESC desc;
	ZeroMemory(&desc, sizeof(desc));
	desc.Width = width;
	desc.Height = height;
	desc.MipLevels = 1;
	desc.ArraySize = 1;
	desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	//desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
	//desc.Format = DXGI_FORMAT_B5G5R5A1_UNORM;
	desc.SampleDesc.Count = 1;
	desc.Usage = D3D11_USAGE_DEFAULT;
	desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
	desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

	ID3D11Texture2D *pTexture = NULL;
	D3D11_SUBRESOURCE_DATA subResource;
	subResource.pSysMem = disp_ptr;
	//subResource.pSysMem = vga_ptr;
	subResource.SysMemPitch = desc.Width * 4;
	subResource.SysMemSlicePitch = 0;
	g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);

	// Create texture view
	D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
	ZeroMemory(&srvDesc, sizeof(srvDesc));
	srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
	srvDesc.Texture2D.MipLevels = desc.MipLevels;
	srvDesc.Texture2D.MostDetailedMip = 0;
	g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, &g_pFontTextureView);
	pTexture->Release();

	// Store our identifier
	ImTextureID my_tex_id = (ImTextureID)g_pFontTextureView;

	
	// Create texture sampler
	{
		D3D11_SAMPLER_DESC desc;
		ZeroMemory(&desc, sizeof(desc));
		//desc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
		desc.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
		desc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
		desc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
		desc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
		desc.MipLODBias = 0.f;
		desc.ComparisonFunc = D3D11_COMPARISON_ALWAYS;
		desc.MinLOD = 0.f;
		desc.MaxLOD = 0.f;
		g_pd3dDevice->CreateSamplerState(&desc, &g_pFontSampler);
	}


	bool follow_writes = 0;
	int write_address = 0;

	static bool show_app_console = true;
	
	// imgui Main loop stuff...
	MSG msg;
	ZeroMemory(&msg, sizeof(msg));
	while (msg.message != WM_QUIT)
	{
		// Poll and handle messages (inputs, window resize, etc.)
		// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
		// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
		// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
		// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
		if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			continue;
		}

		// Start the Dear ImGui frame
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		// 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
		//if (show_demo_window)
		//	ImGui::ShowDemoWindow(&show_demo_window);

		// 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
		static float f = 0.1f;
		static int counter = 0;

		ImGui::Begin("Virtual Dev Board v1.0");		// Create a window called "Virtual Dev Board v1.0" and append into it.

		ShowMyExampleAppConsole(&show_app_console);

		//ImGui::Text("Verilator sim running... ROM_ADDR: 0x%05x", top->ROM_ADDR);               // Display some text (you can use a format strings too)
																							   //ImGui::Checkbox("Demo Window", &show_demo_window);      // Edit bools storing our window open/close state
																							   //ImGui::Checkbox("Another Window", &show_another_window);

		//ImGui::SliderFloat("float", &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
		//ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color

																//if (ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
																//counter++;

																//ImGui::SameLine();
																//ImGui::Text("counter = %d", counter);
		//ImGui::Text("samp_index = %d", samp_index);
		//ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
		//ImGui::PlotLines("Lines", values, IM_ARRAYSIZE(values), values_offset, "sample", -1.0f, 1.0f, ImVec2(0, 80));
		if (ImGui::Button("RESET")) {
			main_time = 0;
			rom_bank = 0;
			ram_bank = 0;
			trig_irq = 0;
			trig_nmi = 0;
			memset(low_ram_ptr, 0x00, low_ram_size);	// Clear Low RAM.
			memset(hi_ram_ptr, 0x00, hi_ram_size);		// Clear High RAM.
			// Clear the DISPLAY buffer...
			uint32_t value = 0xff222222;
			for (uint32_t i = 0; i < disp_size / 2; i += 4) {
				memcpy(((char*)disp_ptr) + i, &value, 4);
			}
		}
		ImGui::Text("main_time %d", main_time);
		ImGui::Text("frame_count: %d  line_count: %d", frame_count, line_count);

		/*
		ImGui::Text("Addr:   0x%08X", top->mem_addr << 2);
		
		ImGui::Text("PC:     0x%08X", top->pc << 2);
		if (top->system_top__DOT__core__DOT__PC__DOT__enable) {
			ImGui::SameLine(150); ImGui::Text("<- WRITE 0x%08X", top->system_top__DOT__core__DOT__IF_PCIn);
		}

		if (top->system_top__DOT__core__DOT__PC__DOT__exe_pc_write) {
			ImGui::SameLine(150); ImGui::Text("<- EXE_PC WRITE 0x%08X", top->system_top__DOT__core__DOT__exe_pc);
		}
	
		ImGui::Text("Inst:   0x%08X", top->system_top__DOT__core__DOT__InstMem_In);
		*/

		//if (ImGui::Button("Reset!")) top->KEY = 0;
		//else top->KEY = 1;

		ImGui::Checkbox("RUN", &run_enable);
		//ImGui::SameLine(); ImGui::Checkbox("Trig IRQ", &trig_irq);
		ImGui::SameLine(); ImGui::Checkbox("Trig NMI", &trig_nmi);
		ImGui::SameLine(); ImGui::Checkbox("Trig PASTE", &trig_paste);
		ImGui::SameLine(); ImGui::Checkbox("Trig PRG", &trig_prg);

		if (single_step == 1) single_step = 0;
		if (ImGui::Button("Single Step")) {
			run_enable = 0;
			single_step = 1;
		}

		if (multi_step == 1) multi_step = 0;
		if (ImGui::Button("Multi Step")) {
			run_enable = 0;
			multi_step = 1;
		}
		ImGui::SameLine(); ImGui::SliderInt("Step amount", &multi_step_amount, 4, 1024);

		ImGui::Image(my_tex_id, ImVec2(width, height), ImVec2(0, 0), ImVec2(1, 1), ImColor(255, 255, 255, 255), ImColor(255, 255, 255, 128));
		ImGui::End();


		ImGui::Begin("Low RAM Editor");
		/*
		ImGui::Checkbox("Follow Writes", &follow_writes);
		if (follow_writes) write_address = top->sd_addr << 2;
		*/
		mem_edit_1.DrawContents(low_ram_ptr, low_ram_size, 0);
		ImGui::End();

		ImGui::Begin("High RAM Editor");
		/*
		ImGui::Checkbox("Follow Writes", &follow_writes);
		if (follow_writes) write_address = top->sd_addr << 2;
		*/
		mem_edit_2.DrawContents(hi_ram_ptr, hi_ram_size, 0);
		ImGui::End();

		ImGui::Begin("ROM Editor");
		/*
		ImGui::Checkbox("Follow Writes", &follow_writes);
		if (follow_writes) write_address = top->sd_addr << 2;
		*/
		mem_edit_3.DrawContents(rom_ptr, rom_size, 0);
		ImGui::End();

		ImGui::Begin("ATtiny ROM Editor");
		/*
		ImGui::Checkbox("Follow Writes", &follow_writes);
		if (follow_writes) write_address = top->sd_addr << 2;
		*/
		mem_edit_4.DrawContents(avr_ptr, avr_size, 0);
		ImGui::End();

		/*
		ImGui::Begin("VRAM Editor");
[		mem_edit_3.DrawContents(top->rootp->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram, 131072, 0);
		ImGui::End();
		*/

		ImGui::Begin("CPU Registers");
		ImGui::Separator();
		//ImGui::Text("rst_active: %d", top->rootp->x16_main__DOT__cpu_inst__DOT__rst_active);
		//ImGui::Text("irq_active: %d", top->rootp->x16_main__DOT__cpu_inst__DOT__irq_active);
		//ImGui::Text("nmi_active: %d", top->rootp->x16_main__DOT__cpu_inst__DOT__nmi_active);
		//ImGui::Text("int_active: %d", top->rootp->x16_main__DOT__cpu_inst__DOT__int_active);
		ImGui::Text("       A: 0x%04X", top->rootp->x16_main__DOT__cpu_inst__DOT__A);
		ImGui::Text("       X: 0x%04X", top->rootp->x16_main__DOT__cpu_inst__DOT__X);
		ImGui::Text("       Y: 0x%04X", top->rootp->x16_main__DOT__cpu_inst__DOT__Y);
		ImGui::Text("      SP: 0x%04X", top->rootp->x16_main__DOT__cpu_inst__DOT__S);
		ImGui::Text("      PC: 0x%04X", top->rootp->x16_main__DOT__cpu_inst__DOT__PC);
		ImGui::Text("cpu_addr: 0x%04X", top->rootp->x16_main__DOT__cpu_addr);
		ImGui::Text("cpu_din:  0x%02X",	top->rootp->x16_main__DOT__cpu_din);
		ImGui::Text("cpu_dout: 0x%02X",	top->rootp->x16_main__DOT__cpu_dout);
		ImGui::Text("cpu_we: %d",		top->rootp->x16_main__DOT__cpu_we);
		//ImGui::Text("vram_addr_0_r: 0x%02X",	top->rootp->x16_main__DOT__top_inst__DOT__vram_addr_0_r);
		//ImGui::Text("vram_addr_1_r: 0x%02X",	top->rootp->x16_main__DOT__top_inst__DOT__vram_addr_1_r);
		ImGui::Text("vera_irq_n: %d",	top->rootp->x16_main__DOT__top_inst__DOT__extbus_irq_n);
		ImGui::Separator();
		ImGui::Text("bank_cs:  %d",		top->rootp->x16_main__DOT__bank_cs);
		ImGui::Text("ram_bank: %d",		top->rootp->x16_main__DOT__ram_bank);
		ImGui::Text("rom_bank: %d",		top->rootp->x16_main__DOT__rom_bank);
		ImGui::Separator();
		//ImGui::Text("abi_cs: %d",		top->rootp->x16_main__DOT__abi_cs);
		ImGui::Text("low_ram_cs: %d",	top->rootp->x16_main__DOT__low_ram_cs);
		ImGui::Text("hi_ram_cs: %d",	top->rootp->x16_main__DOT__hi_ram_cs);
		ImGui::Text("banked_rom_cs: %d",		top->rootp->x16_main__DOT__banked_rom_cs);
		//ImGui::Text("kernel_rom_cs: %d",		top->rootp->x16_main__DOT__kernel_rom_cs);
		ImGui::Separator();
		ImGui::Text("io_cs: %d",		top->rootp->x16_main__DOT__io_cs);
		ImGui::Separator();
		ImGui::Text("via_1_cs: %d",		top->rootp->x16_main__DOT__via_1_cs);
		ImGui::Text("via_2_cs: %d",		top->rootp->x16_main__DOT__via_2_cs);
		ImGui::Text("vera_cs: %d",		top->rootp->x16_main__DOT__vera_cs);
		ImGui::Text("ym_cs: %d",		top->rootp->x16_main__DOT__ym_cs);
		ImGui::Text("unavail_cs: %d",	top->rootp->x16_main__DOT__unavail_cs);
		ImGui::Text("io3_cs: %d",		top->rootp->x16_main__DOT__io3_cs);
		ImGui::Text("io4_cs: %d",		top->rootp->x16_main__DOT__io4_cs);
		ImGui::Text("io5_cs: %d",		top->rootp->x16_main__DOT__io5_cs);
		ImGui::Text("io6_cs: %d",		top->rootp->x16_main__DOT__io6_cs);
		ImGui::Text("io7_cs: %d",		top->rootp->x16_main__DOT__io7_cs);
		ImGui::End();

		ImGui::Begin("VERA Registers");
		ImGui::Text("video_output_mode_r:   %d",		top->rootp->x16_main__DOT__top_inst__DOT__video_output_mode_r);
		ImGui::Text("composer_display_data: 0x%02X",	top->rootp->x16_main__DOT__top_inst__DOT__composer_display_data);
		ImGui::Text("palette_rgb_data:      0x%04X",	top->rootp->x16_main__DOT__top_inst__DOT__palette_rgb_data);
		ImGui::Separator();
		/*
		ImGui::Text("x_counter: %d",	top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter);
		ImGui::Text("y_counter: %d",	top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter);
		ImGui::Text("vga_hsync: %d",	top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_hsync);
		ImGui::Text("vga_vsync: %d",	top->rootp->x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_vsync);
		*/
		ImGui::Separator();
		ImGui::Text("spi_txdata:  0x%02X",	top->rootp->x16_main__DOT__top_inst__DOT__spi_txdata);
		ImGui::Text("spi_txstart: %d",		top->rootp->x16_main__DOT__top_inst__DOT__spi_txstart);
		ImGui::Text("spi_rxdata:  0x%02X",	top->rootp->x16_main__DOT__top_inst__DOT__spi_rxdata);
		ImGui::Text("spi_busy:    %d",		top->rootp->x16_main__DOT__top_inst__DOT__spi_busy);
		ImGui::Separator();
		ImGui::Text("22[0]-20: ADDR 0x%05X",		top->rootp->x16_main__DOT__top_inst__DOT__vram_addr_0_r);
		//ImGui::Text("$9F22[0], $9f21, $9f20: vram_addr_1: 0x%05X",		top->rootp->x16_main__DOT__top_inst__DOT__vram_addr_1_r);
		// 
		ImGui::Text("$9F23:   DATA0 0x%02X",	top->rootp->x16_main__DOT__top_inst__DOT__vram_data0_r);
		ImGui::Text("$9F24:   DATA1 0x%02X",	top->rootp->x16_main__DOT__top_inst__DOT__vram_data1_r);
		ImGui::Separator();
		ImGui::Text("(DCSEL=0)...");
		ImGui::Text("$9F2A: DC_HSCALE %d",	top->rootp->x16_main__DOT__top_inst__DOT__dc_hscale_r);
		ImGui::Text("$9F2B: DC_VSCALE %d",	top->rootp->x16_main__DOT__top_inst__DOT__dc_vscale_r);
		ImGui::Text("$9F2C: DC_BORDER %d",	top->rootp->x16_main__DOT__top_inst__DOT__dc_border_color_r);
		ImGui::Separator();
		ImGui::Text("(DCSEL=1)...");
		ImGui::Text("$9F29: DC_HSTART %d",	top->rootp->x16_main__DOT__top_inst__DOT__dc_active_hstart_r );
		ImGui::Text("$9F2A: DC_HSTOP  %d",	top->rootp->x16_main__DOT__top_inst__DOT__dc_active_hstop_r );
		ImGui::Text("$9F2B: DC_VSTART %d",	top->rootp->x16_main__DOT__top_inst__DOT__dc_active_vstart_r );
		ImGui::Text("$9F2C: DC_VSTOP  %d",	top->rootp->x16_main__DOT__top_inst__DOT__dc_active_vstop_r );

		/*
		ImGui::Separator();
		ImGui::Text("api_sclk: %d",	top->rootp->x16_main__DOT__top_inst__DOT__spi_sck);
		ImGui::Text("spi_mosi: %d",	top->rootp->x16_main__DOT__top_inst__DOT__spi_mosi);
		ImGui::Text("spi_miso: %d",	top->rootp->x16_main__DOT__top_inst__DOT__spi_miso);
		ImGui::Text("spi_cs_n: %d",	top->rootp->x16_main__DOT__top_inst__DOT__spi_ssel_n_sd);
		*/
		ImGui::Separator();
		ImGui::End();

		ImGui::Begin("VIA Registers");
		ImGui::Separator();
		ImGui::Text("ier:     0x%02X",	top->rootp->x16_main__DOT__via_1_inst__DOT__ier);
		ImGui::Text("irq_o:   %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__irq_o);
		ImGui::Text("cs_i:    %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__cs_i);
		/*
		ImGui::Text("cyc_i:   %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__cyc_i);
		ImGui::Text("stb_i:   %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__stb_i);
		ImGui::Text("ack_o:   %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__ack_o);
		*/
		ImGui::Text("adr_i:   0x%02X",	top->rootp->x16_main__DOT__via_1_inst__DOT__adr_i);
		/*
		ImGui::Text("dat_i:   0x%02X",	top->rootp->x16_main__DOT__via_1_inst__DOT__dat_i);
		ImGui::Text("we_i:    %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__we_i);
		ImGui::Text("dat_o:   0x%02X",	top->rootp->x16_main__DOT__via_1_inst__DOT__dat_o);
		*/
		ImGui::Separator();
		ImGui::Text("via_ca1:  %d",	top->rootp->x16_main__DOT__via_ca1);
		ImGui::Separator();
		ImGui::Text("via_ca2_i:  %d",	top->rootp->x16_main__DOT__via_ca2_i);
		ImGui::Text("via_ca2_o:  %d",	top->rootp->x16_main__DOT__via_ca2_o);
		ImGui::Text("via_ca2_t:  %d",	top->rootp->x16_main__DOT__via_ca2_t);
		ImGui::Separator();
		ImGui::Text("via_cb1_i:  %d",	top->rootp->x16_main__DOT__via_cb1_i);
		ImGui::Text("via_cb1_o:  %d",	top->rootp->x16_main__DOT__via_cb1_o);
		ImGui::Text("via_cb1_t:  %d",	top->rootp->x16_main__DOT__via_cb1_t);
		ImGui::Separator();
		ImGui::Text("via_cb2_i:  %d",	top->rootp->x16_main__DOT__via_cb2_i);
		ImGui::Text("via_cb2_o:  %d",	top->rootp->x16_main__DOT__via_cb2_o);
		ImGui::Text("via_cb2_t:  %d",	top->rootp->x16_main__DOT__via_cb2_t);
		ImGui::Separator();
		ImGui::Text("via_pa_i:   0x%02X",	top->rootp->x16_main__DOT__via_pa_i);
		ImGui::Text("via_pa_o:   0x%02X",	top->rootp->x16_main__DOT__via_pa_o);
		ImGui::Text("via_pa_t:   0x%02X",	top->rootp->x16_main__DOT__via_pa_t);
		ImGui::Separator();
		ImGui::Text("PA7  NES0:   %d",	(top->rootp->x16_main__DOT__via_pa_o&80)==1 );
		ImGui::Text("PA6  NES1:   %d",	(top->rootp->x16_main__DOT__via_pa_o&40)==1 );
		ImGui::Text("PA5  NES2:   %d",	(top->rootp->x16_main__DOT__via_pa_o&20)==1 );
		ImGui::Text("PA4  NES3:   %d",	(top->rootp->x16_main__DOT__via_pa_o&10)==1 );
		ImGui::Text("PA3  NESCLK: %d",	(top->rootp->x16_main__DOT__via_pa_o&8) ==1 );
		ImGui::Text("PA2  NESLAT: %d",	(top->rootp->x16_main__DOT__via_pa_o&4) ==1 );
		ImGui::Text("PA1  SCL:    %d",	(top->rootp->x16_main__DOT__via_pa_t&2) ==0 );
		ImGui::Text("PA0  SDA:    %d",	(top->rootp->x16_main__DOT__via_pa_t&1) ==0 );
		ImGui::Separator();
		ImGui::Text("via_pb_i:   0x%02X",	top->rootp->x16_main__DOT__via_pb_i);
		ImGui::Text("via_pb_o:   0x%02X",	top->rootp->x16_main__DOT__via_pb_o);
		ImGui::Text("via_pb_t:   0x%02X",	top->rootp->x16_main__DOT__via_pb_t);
		ImGui::Text("     pbi:   0x%02X",	top->rootp->x16_main__DOT__via_1_inst__DOT__pbi);
		ImGui::Separator();
		ImGui::Text("PB7  IEC_DATAI: %d",	(top->rootp->x16_main__DOT__via_pa_o&80)==1 );
		ImGui::Text("PB6  IEC_CLKI:  %d",	(top->rootp->x16_main__DOT__via_pa_o&40)==1 );
		ImGui::Text("PB5  IEC_DATAO: %d",	(top->rootp->x16_main__DOT__via_pa_o&20)==1 );
		ImGui::Text("PB4  IEC_CLKO:  %d",	(top->rootp->x16_main__DOT__via_pa_o&10)==1 );
		ImGui::Text("PB3  IEC_ATNO:  %d",	(top->rootp->x16_main__DOT__via_pa_o&8) ==1 );
		ImGui::Text("PB2  PB2:       %d",	(top->rootp->x16_main__DOT__via_pa_o&4) ==1 );
		ImGui::Text("PB1  PB1:       %d",	(top->rootp->x16_main__DOT__via_pa_o&2) ==1 );
		ImGui::Text("PB0  PB0:       %d",	(top->rootp->x16_main__DOT__via_pa_o&1) ==1 );
		ImGui::Separator();
		//ImGui::Text("via_t1_if:  %d",	top->rootp->x16_main__DOT__via_t1_if);
		//ImGui::Text("via_t2_if:  %d",	top->rootp->x16_main__DOT__via_t2_if);
		//ImGui::Text("via_t2_if:  %d",	top->rootp->x16_main__DOT__via_t3_if);
		//ImGui::Separator();
		ImGui::Text("timer_1:    %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__t1);
		ImGui::Text("timer_2:    %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__t2);
		ImGui::Text("timer_3:    %d",	top->rootp->x16_main__DOT__via_1_inst__DOT__t3);
		ImGui::End();

		ImGui::Begin("ATtiny Registers");
		ImGui::Text("data_addr:  0x%03X",	top->rootp->x16_main__DOT__avr_data_addr);
		ImGui::Text("data_in:    0x%02X",	top->rootp->x16_main__DOT__avr_data_in);
		ImGui::Text("data_we:    %d",		top->rootp->x16_main__DOT__avr_data_we);
		ImGui::Text("data_out:   0x%02X",	top->rootp->x16_main__DOT__avr_data_out);
		ImGui::Text("data_re:    %d",		top->rootp->x16_main__DOT__avr_data_re);
		ImGui::Text("pgm_addr:   0x%03X",	top->rootp->x16_main__DOT__avr_pgm_addr);
		ImGui::Text("pgm_in:     0x%04X",	top->rootp->x16_main__DOT__avr_pgm_data);
		ImGui::Text("ALU_FLAGS:  0x%04X",	top->rootp->x16_main__DOT__attiny_inst__DOT__ALU_FLAGS);
		ImGui::Text("inst:       0x%04X",	top->rootp->x16_main__DOT__attiny_inst__DOT__alu__DOT__inst);
		ImGui::End();

		//void ui_m6502_draw(ui_m6502_t* win);

		// 3. Show another simple window.
		/*
		if (show_another_window)
		{
		ImGui::Begin("Another Window", &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
		ImGui::Text("Hello from another window!");
		if (ImGui::Button("Close Me"))
		show_another_window = false;
		ImGui::End();
		}
		*/

		// Update the texture for disp_ptr!
		// D3D11_USAGE_DEFAULT MUST be set in the texture description (somewhere above) for this to work.
		// (D3D11_USAGE_DYNAMIC is for use with map / unmap.) ElectronAsh.
		g_pd3dDeviceContext->UpdateSubresource(pTexture, 0, NULL, disp_ptr, width * 4, 0);

		// Rendering
		ImGui::Render();
		g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
		g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

		//g_pSwapChain->Present(1, 0); // Present with vsync
		g_pSwapChain->Present(0, 0); // Present without vsync

		//my_dram = calloc(1, );

		if (run_enable) for (int step = 0; step < 1024; step++) {
			if (!run_enable) break;
			verilate();	// Simulates MUCH faster if it's done in batches.
		}
		else {																// But, that will affect the values we can grab for the GUI.
			if (single_step) verilate();
			if (multi_step) for (int step = 0; step < multi_step_amount; step++) verilate();
		}
	}
	// Close imgui stuff properly...
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	CleanupDeviceD3D();
	DestroyWindow(hwnd);
	UnregisterClass(wc.lpszClassName, wc.hInstance);

	return 0;
}
