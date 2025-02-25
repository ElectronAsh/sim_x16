`timescale 1 ns / 1 ns
//`default_nettype none

module video_modulator_sinlut(
    input  wire       clk,
    input  wire [8:0] phase,
    output reg  [7:0] value);

    always @(posedge clk) case (phase)
        9'd0: value <= 8'd0;
        9'd1: value <= 8'd1;
        9'd2: value <= 8'd2;
        9'd3: value <= 8'd4;
        9'd4: value <= 8'd5;
        9'd5: value <= 8'd6;
        9'd6: value <= 8'd7;
        9'd7: value <= 8'd9;
        9'd8: value <= 8'd10;
        9'd9: value <= 8'd11;
        9'd10: value <= 8'd12;
        9'd11: value <= 8'd13;
        9'd12: value <= 8'd15;
        9'd13: value <= 8'd16;
        9'd14: value <= 8'd17;
        9'd15: value <= 8'd18;
        9'd16: value <= 8'd20;
        9'd17: value <= 8'd21;
        9'd18: value <= 8'd22;
        9'd19: value <= 8'd23;
        9'd20: value <= 8'd24;
        9'd21: value <= 8'd25;
        9'd22: value <= 8'd27;
        9'd23: value <= 8'd28;
        9'd24: value <= 8'd29;
        9'd25: value <= 8'd30;
        9'd26: value <= 8'd31;
        9'd27: value <= 8'd33;
        9'd28: value <= 8'd34;
        9'd29: value <= 8'd35;
        9'd30: value <= 8'd36;
        9'd31: value <= 8'd37;
        9'd32: value <= 8'd38;
        9'd33: value <= 8'd39;
        9'd34: value <= 8'd41;
        9'd35: value <= 8'd42;
        9'd36: value <= 8'd43;
        9'd37: value <= 8'd44;
        9'd38: value <= 8'd45;
        9'd39: value <= 8'd46;
        9'd40: value <= 8'd47;
        9'd41: value <= 8'd48;
        9'd42: value <= 8'd49;
        9'd43: value <= 8'd50;
        9'd44: value <= 8'd51;
        9'd45: value <= 8'd52;
        9'd46: value <= 8'd53;
        9'd47: value <= 8'd55;
        9'd48: value <= 8'd56;
        9'd49: value <= 8'd57;
        9'd50: value <= 8'd58;
        9'd51: value <= 8'd59;
        9'd52: value <= 8'd60;
        9'd53: value <= 8'd61;
        9'd54: value <= 8'd62;
        9'd55: value <= 8'd62;
        9'd56: value <= 8'd63;
        9'd57: value <= 8'd64;
        9'd58: value <= 8'd65;
        9'd59: value <= 8'd66;
        9'd60: value <= 8'd67;
        9'd61: value <= 8'd68;
        9'd62: value <= 8'd69;
        9'd63: value <= 8'd70;
        9'd64: value <= 8'd71;
        9'd65: value <= 8'd72;
        9'd66: value <= 8'd72;
        9'd67: value <= 8'd73;
        9'd68: value <= 8'd74;
        9'd69: value <= 8'd75;
        9'd70: value <= 8'd76;
        9'd71: value <= 8'd77;
        9'd72: value <= 8'd77;
        9'd73: value <= 8'd78;
        9'd74: value <= 8'd79;
        9'd75: value <= 8'd80;
        9'd76: value <= 8'd80;
        9'd77: value <= 8'd81;
        9'd78: value <= 8'd82;
        9'd79: value <= 8'd82;
        9'd80: value <= 8'd83;
        9'd81: value <= 8'd84;
        9'd82: value <= 8'd84;
        9'd83: value <= 8'd85;
        9'd84: value <= 8'd86;
        9'd85: value <= 8'd86;
        9'd86: value <= 8'd87;
        9'd87: value <= 8'd88;
        9'd88: value <= 8'd88;
        9'd89: value <= 8'd89;
        9'd90: value <= 8'd89;
        9'd91: value <= 8'd90;
        9'd92: value <= 8'd90;
        9'd93: value <= 8'd91;
        9'd94: value <= 8'd91;
        9'd95: value <= 8'd92;
        9'd96: value <= 8'd92;
        9'd97: value <= 8'd93;
        9'd98: value <= 8'd93;
        9'd99: value <= 8'd94;
        9'd100: value <= 8'd94;
        9'd101: value <= 8'd95;
        9'd102: value <= 8'd95;
        9'd103: value <= 8'd95;
        9'd104: value <= 8'd96;
        9'd105: value <= 8'd96;
        9'd106: value <= 8'd96;
        9'd107: value <= 8'd97;
        9'd108: value <= 8'd97;
        9'd109: value <= 8'd97;
        9'd110: value <= 8'd98;
        9'd111: value <= 8'd98;
        9'd112: value <= 8'd98;
        9'd113: value <= 8'd98;
        9'd114: value <= 8'd99;
        9'd115: value <= 8'd99;
        9'd116: value <= 8'd99;
        9'd117: value <= 8'd99;
        9'd118: value <= 8'd99;
        9'd119: value <= 8'd99;
        9'd120: value <= 8'd100;
        9'd121: value <= 8'd100;
        9'd122: value <= 8'd100;
        9'd123: value <= 8'd100;
        9'd124: value <= 8'd100;
        9'd125: value <= 8'd100;
        9'd126: value <= 8'd100;
        9'd127: value <= 8'd100;
        9'd128: value <= 8'd100;
        9'd129: value <= 8'd100;
        9'd130: value <= 8'd100;
        9'd131: value <= 8'd100;
        9'd132: value <= 8'd100;
        9'd133: value <= 8'd100;
        9'd134: value <= 8'd100;
        9'd135: value <= 8'd100;
        9'd136: value <= 8'd100;
        9'd137: value <= 8'd99;
        9'd138: value <= 8'd99;
        9'd139: value <= 8'd99;
        9'd140: value <= 8'd99;
        9'd141: value <= 8'd99;
        9'd142: value <= 8'd99;
        9'd143: value <= 8'd98;
        9'd144: value <= 8'd98;
        9'd145: value <= 8'd98;
        9'd146: value <= 8'd98;
        9'd147: value <= 8'd97;
        9'd148: value <= 8'd97;
        9'd149: value <= 8'd97;
        9'd150: value <= 8'd96;
        9'd151: value <= 8'd96;
        9'd152: value <= 8'd96;
        9'd153: value <= 8'd95;
        9'd154: value <= 8'd95;
        9'd155: value <= 8'd95;
        9'd156: value <= 8'd94;
        9'd157: value <= 8'd94;
        9'd158: value <= 8'd93;
        9'd159: value <= 8'd93;
        9'd160: value <= 8'd92;
        9'd161: value <= 8'd92;
        9'd162: value <= 8'd91;
        9'd163: value <= 8'd91;
        9'd164: value <= 8'd90;
        9'd165: value <= 8'd90;
        9'd166: value <= 8'd89;
        9'd167: value <= 8'd89;
        9'd168: value <= 8'd88;
        9'd169: value <= 8'd88;
        9'd170: value <= 8'd87;
        9'd171: value <= 8'd86;
        9'd172: value <= 8'd86;
        9'd173: value <= 8'd85;
        9'd174: value <= 8'd84;
        9'd175: value <= 8'd84;
        9'd176: value <= 8'd83;
        9'd177: value <= 8'd82;
        9'd178: value <= 8'd82;
        9'd179: value <= 8'd81;
        9'd180: value <= 8'd80;
        9'd181: value <= 8'd80;
        9'd182: value <= 8'd79;
        9'd183: value <= 8'd78;
        9'd184: value <= 8'd77;
        9'd185: value <= 8'd77;
        9'd186: value <= 8'd76;
        9'd187: value <= 8'd75;
        9'd188: value <= 8'd74;
        9'd189: value <= 8'd73;
        9'd190: value <= 8'd72;
        9'd191: value <= 8'd72;
        9'd192: value <= 8'd71;
        9'd193: value <= 8'd70;
        9'd194: value <= 8'd69;
        9'd195: value <= 8'd68;
        9'd196: value <= 8'd67;
        9'd197: value <= 8'd66;
        9'd198: value <= 8'd65;
        9'd199: value <= 8'd64;
        9'd200: value <= 8'd63;
        9'd201: value <= 8'd62;
        9'd202: value <= 8'd62;
        9'd203: value <= 8'd61;
        9'd204: value <= 8'd60;
        9'd205: value <= 8'd59;
        9'd206: value <= 8'd58;
        9'd207: value <= 8'd57;
        9'd208: value <= 8'd56;
        9'd209: value <= 8'd55;
        9'd210: value <= 8'd53;
        9'd211: value <= 8'd52;
        9'd212: value <= 8'd51;
        9'd213: value <= 8'd50;
        9'd214: value <= 8'd49;
        9'd215: value <= 8'd48;
        9'd216: value <= 8'd47;
        9'd217: value <= 8'd46;
        9'd218: value <= 8'd45;
        9'd219: value <= 8'd44;
        9'd220: value <= 8'd43;
        9'd221: value <= 8'd42;
        9'd222: value <= 8'd41;
        9'd223: value <= 8'd39;
        9'd224: value <= 8'd38;
        9'd225: value <= 8'd37;
        9'd226: value <= 8'd36;
        9'd227: value <= 8'd35;
        9'd228: value <= 8'd34;
        9'd229: value <= 8'd33;
        9'd230: value <= 8'd31;
        9'd231: value <= 8'd30;
        9'd232: value <= 8'd29;
        9'd233: value <= 8'd28;
        9'd234: value <= 8'd27;
        9'd235: value <= 8'd25;
        9'd236: value <= 8'd24;
        9'd237: value <= 8'd23;
        9'd238: value <= 8'd22;
        9'd239: value <= 8'd21;
        9'd240: value <= 8'd20;
        9'd241: value <= 8'd18;
        9'd242: value <= 8'd17;
        9'd243: value <= 8'd16;
        9'd244: value <= 8'd15;
        9'd245: value <= 8'd13;
        9'd246: value <= 8'd12;
        9'd247: value <= 8'd11;
        9'd248: value <= 8'd10;
        9'd249: value <= 8'd9;
        9'd250: value <= 8'd7;
        9'd251: value <= 8'd6;
        9'd252: value <= 8'd5;
        9'd253: value <= 8'd4;
        9'd254: value <= 8'd2;
        9'd255: value <= 8'd1;
        9'd256: value <= 8'd0;
        9'd257: value <= 8'd255;
        9'd258: value <= 8'd254;
        9'd259: value <= 8'd252;
        9'd260: value <= 8'd251;
        9'd261: value <= 8'd250;
        9'd262: value <= 8'd249;
        9'd263: value <= 8'd247;
        9'd264: value <= 8'd246;
        9'd265: value <= 8'd245;
        9'd266: value <= 8'd244;
        9'd267: value <= 8'd243;
        9'd268: value <= 8'd241;
        9'd269: value <= 8'd240;
        9'd270: value <= 8'd239;
        9'd271: value <= 8'd238;
        9'd272: value <= 8'd236;
        9'd273: value <= 8'd235;
        9'd274: value <= 8'd234;
        9'd275: value <= 8'd233;
        9'd276: value <= 8'd232;
        9'd277: value <= 8'd231;
        9'd278: value <= 8'd229;
        9'd279: value <= 8'd228;
        9'd280: value <= 8'd227;
        9'd281: value <= 8'd226;
        9'd282: value <= 8'd225;
        9'd283: value <= 8'd223;
        9'd284: value <= 8'd222;
        9'd285: value <= 8'd221;
        9'd286: value <= 8'd220;
        9'd287: value <= 8'd219;
        9'd288: value <= 8'd218;
        9'd289: value <= 8'd217;
        9'd290: value <= 8'd215;
        9'd291: value <= 8'd214;
        9'd292: value <= 8'd213;
        9'd293: value <= 8'd212;
        9'd294: value <= 8'd211;
        9'd295: value <= 8'd210;
        9'd296: value <= 8'd209;
        9'd297: value <= 8'd208;
        9'd298: value <= 8'd207;
        9'd299: value <= 8'd206;
        9'd300: value <= 8'd205;
        9'd301: value <= 8'd204;
        9'd302: value <= 8'd203;
        9'd303: value <= 8'd201;
        9'd304: value <= 8'd200;
        9'd305: value <= 8'd199;
        9'd306: value <= 8'd198;
        9'd307: value <= 8'd197;
        9'd308: value <= 8'd196;
        9'd309: value <= 8'd195;
        9'd310: value <= 8'd194;
        9'd311: value <= 8'd194;
        9'd312: value <= 8'd193;
        9'd313: value <= 8'd192;
        9'd314: value <= 8'd191;
        9'd315: value <= 8'd190;
        9'd316: value <= 8'd189;
        9'd317: value <= 8'd188;
        9'd318: value <= 8'd187;
        9'd319: value <= 8'd186;
        9'd320: value <= 8'd185;
        9'd321: value <= 8'd184;
        9'd322: value <= 8'd184;
        9'd323: value <= 8'd183;
        9'd324: value <= 8'd182;
        9'd325: value <= 8'd181;
        9'd326: value <= 8'd180;
        9'd327: value <= 8'd179;
        9'd328: value <= 8'd179;
        9'd329: value <= 8'd178;
        9'd330: value <= 8'd177;
        9'd331: value <= 8'd176;
        9'd332: value <= 8'd176;
        9'd333: value <= 8'd175;
        9'd334: value <= 8'd174;
        9'd335: value <= 8'd174;
        9'd336: value <= 8'd173;
        9'd337: value <= 8'd172;
        9'd338: value <= 8'd172;
        9'd339: value <= 8'd171;
        9'd340: value <= 8'd170;
        9'd341: value <= 8'd170;
        9'd342: value <= 8'd169;
        9'd343: value <= 8'd168;
        9'd344: value <= 8'd168;
        9'd345: value <= 8'd167;
        9'd346: value <= 8'd167;
        9'd347: value <= 8'd166;
        9'd348: value <= 8'd166;
        9'd349: value <= 8'd165;
        9'd350: value <= 8'd165;
        9'd351: value <= 8'd164;
        9'd352: value <= 8'd164;
        9'd353: value <= 8'd163;
        9'd354: value <= 8'd163;
        9'd355: value <= 8'd162;
        9'd356: value <= 8'd162;
        9'd357: value <= 8'd161;
        9'd358: value <= 8'd161;
        9'd359: value <= 8'd161;
        9'd360: value <= 8'd160;
        9'd361: value <= 8'd160;
        9'd362: value <= 8'd160;
        9'd363: value <= 8'd159;
        9'd364: value <= 8'd159;
        9'd365: value <= 8'd159;
        9'd366: value <= 8'd158;
        9'd367: value <= 8'd158;
        9'd368: value <= 8'd158;
        9'd369: value <= 8'd158;
        9'd370: value <= 8'd157;
        9'd371: value <= 8'd157;
        9'd372: value <= 8'd157;
        9'd373: value <= 8'd157;
        9'd374: value <= 8'd157;
        9'd375: value <= 8'd157;
        9'd376: value <= 8'd156;
        9'd377: value <= 8'd156;
        9'd378: value <= 8'd156;
        9'd379: value <= 8'd156;
        9'd380: value <= 8'd156;
        9'd381: value <= 8'd156;
        9'd382: value <= 8'd156;
        9'd383: value <= 8'd156;
        9'd384: value <= 8'd156;
        9'd385: value <= 8'd156;
        9'd386: value <= 8'd156;
        9'd387: value <= 8'd156;
        9'd388: value <= 8'd156;
        9'd389: value <= 8'd156;
        9'd390: value <= 8'd156;
        9'd391: value <= 8'd156;
        9'd392: value <= 8'd156;
        9'd393: value <= 8'd157;
        9'd394: value <= 8'd157;
        9'd395: value <= 8'd157;
        9'd396: value <= 8'd157;
        9'd397: value <= 8'd157;
        9'd398: value <= 8'd157;
        9'd399: value <= 8'd158;
        9'd400: value <= 8'd158;
        9'd401: value <= 8'd158;
        9'd402: value <= 8'd158;
        9'd403: value <= 8'd159;
        9'd404: value <= 8'd159;
        9'd405: value <= 8'd159;
        9'd406: value <= 8'd160;
        9'd407: value <= 8'd160;
        9'd408: value <= 8'd160;
        9'd409: value <= 8'd161;
        9'd410: value <= 8'd161;
        9'd411: value <= 8'd161;
        9'd412: value <= 8'd162;
        9'd413: value <= 8'd162;
        9'd414: value <= 8'd163;
        9'd415: value <= 8'd163;
        9'd416: value <= 8'd164;
        9'd417: value <= 8'd164;
        9'd418: value <= 8'd165;
        9'd419: value <= 8'd165;
        9'd420: value <= 8'd166;
        9'd421: value <= 8'd166;
        9'd422: value <= 8'd167;
        9'd423: value <= 8'd167;
        9'd424: value <= 8'd168;
        9'd425: value <= 8'd168;
        9'd426: value <= 8'd169;
        9'd427: value <= 8'd170;
        9'd428: value <= 8'd170;
        9'd429: value <= 8'd171;
        9'd430: value <= 8'd172;
        9'd431: value <= 8'd172;
        9'd432: value <= 8'd173;
        9'd433: value <= 8'd174;
        9'd434: value <= 8'd174;
        9'd435: value <= 8'd175;
        9'd436: value <= 8'd176;
        9'd437: value <= 8'd176;
        9'd438: value <= 8'd177;
        9'd439: value <= 8'd178;
        9'd440: value <= 8'd179;
        9'd441: value <= 8'd179;
        9'd442: value <= 8'd180;
        9'd443: value <= 8'd181;
        9'd444: value <= 8'd182;
        9'd445: value <= 8'd183;
        9'd446: value <= 8'd184;
        9'd447: value <= 8'd184;
        9'd448: value <= 8'd185;
        9'd449: value <= 8'd186;
        9'd450: value <= 8'd187;
        9'd451: value <= 8'd188;
        9'd452: value <= 8'd189;
        9'd453: value <= 8'd190;
        9'd454: value <= 8'd191;
        9'd455: value <= 8'd192;
        9'd456: value <= 8'd193;
        9'd457: value <= 8'd194;
        9'd458: value <= 8'd194;
        9'd459: value <= 8'd195;
        9'd460: value <= 8'd196;
        9'd461: value <= 8'd197;
        9'd462: value <= 8'd198;
        9'd463: value <= 8'd199;
        9'd464: value <= 8'd200;
        9'd465: value <= 8'd201;
        9'd466: value <= 8'd203;
        9'd467: value <= 8'd204;
        9'd468: value <= 8'd205;
        9'd469: value <= 8'd206;
        9'd470: value <= 8'd207;
        9'd471: value <= 8'd208;
        9'd472: value <= 8'd209;
        9'd473: value <= 8'd210;
        9'd474: value <= 8'd211;
        9'd475: value <= 8'd212;
        9'd476: value <= 8'd213;
        9'd477: value <= 8'd214;
        9'd478: value <= 8'd215;
        9'd479: value <= 8'd217;
        9'd480: value <= 8'd218;
        9'd481: value <= 8'd219;
        9'd482: value <= 8'd220;
        9'd483: value <= 8'd221;
        9'd484: value <= 8'd222;
        9'd485: value <= 8'd223;
        9'd486: value <= 8'd225;
        9'd487: value <= 8'd226;
        9'd488: value <= 8'd227;
        9'd489: value <= 8'd228;
        9'd490: value <= 8'd229;
        9'd491: value <= 8'd231;
        9'd492: value <= 8'd232;
        9'd493: value <= 8'd233;
        9'd494: value <= 8'd234;
        9'd495: value <= 8'd235;
        9'd496: value <= 8'd236;
        9'd497: value <= 8'd238;
        9'd498: value <= 8'd239;
        9'd499: value <= 8'd240;
        9'd500: value <= 8'd241;
        9'd501: value <= 8'd243;
        9'd502: value <= 8'd244;
        9'd503: value <= 8'd245;
        9'd504: value <= 8'd246;
        9'd505: value <= 8'd247;
        9'd506: value <= 8'd249;
        9'd507: value <= 8'd250;
        9'd508: value <= 8'd251;
        9'd509: value <= 8'd252;
        9'd510: value <= 8'd254;
        9'd511: value <= 8'd255;
    endcase

endmodule
