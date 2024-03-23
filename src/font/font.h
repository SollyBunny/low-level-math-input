#ifndef INCLUDE_FONT_H
#define INCLUDE_FONT_H

#include "glyph.h"

#define CHAR_exclamation 33
struct Glyph GLYPH_exclamation = {.w=27, .h=31, .padleft=8, .padright=16, .padtop=7, .padbottom=0, .b={.w=3, .h=24, .data={7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,0,0,0,0,7,7,7}}};
#define CHAR_double_quote 34
struct Glyph GLYPH_double_quote = {.w=23, .h=17, .padleft=4, .padright=8, .padtop=6, .padbottom=0, .b={.w=11, .h=11, .data={1799,1799,1799,1799,1799,1799,1799,1799,1799,1799,1799}}};
#define CHAR_percent 37
struct Glyph GLYPH_percent = {.w=20, .h=31, .padleft=1, .padright=1, .padtop=7, .padbottom=0, .b={.w=18, .h=24, .data={115198,115198,58247,62343,29575,15239,15239,8071,8071,4095,2046,10104,130944,131008,233408,233184,233184,233072,233072,233016,232988,232988,130062,130062}}};
#define CHAR_ampersand 38
struct Glyph GLYPH_ampersand = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={1016,2044,1820,1550,3598,3598,14,28,28,56,112,248,252,476,58254,29574,30471,15879,15879,15367,15366,15886,32764,59384}}};
#define CHAR_single_quote 39
struct Glyph GLYPH_single_quote = {.w=27, .h=17, .padleft=8, .padright=16, .padtop=6, .padbottom=0, .b={.w=3, .h=11, .data={7,7,7,7,7,7,7,7,7,7,7}}};
#define CHAR_l_parens 40
struct Glyph GLYPH_l_parens = {.w=23, .h=37, .padleft=4, .padright=8, .padtop=3, .padbottom=0, .b={.w=11, .h=34, .data={512,1792,1984,480,240,120,56,28,28,14,14,6,6,7,7,7,7,7,7,7,7,6,6,14,14,28,28,56,120,240,480,1984,1920,1536}}};
#define CHAR_r_parens 41
struct Glyph GLYPH_r_parens = {.w=23, .h=37, .padleft=4, .padright=8, .padtop=3, .padbottom=0, .b={.w=11, .h=34, .data={1,7,15,60,120,112,224,480,448,384,896,896,768,768,768,1792,1792,1792,1792,768,768,768,896,896,384,448,448,224,112,120,60,31,7,3}}};
#define CHAR_asterisk 42
struct Glyph GLYPH_asterisk = {.w=21, .h=28, .padleft=2, .padright=4, .padtop=12, .padbottom=0, .b={.w=15, .h=16, .data={448,448,448,8643,29127,32223,8188,2032,992,4088,16382,31183,29123,448,448,448}}};
#define CHAR_plus 43
struct Glyph GLYPH_plus = {.w=22, .h=27, .padleft=3, .padright=6, .padtop=12, .padbottom=0, .b={.w=13, .h=15, .data={224,224,224,224,224,224,8191,8191,8191,224,224,224,224,224,224}}};
#define CHAR_comma 44
struct Glyph GLYPH_comma = {.w=26, .h=38, .padleft=7, .padright=14, .padtop=28, .padbottom=0, .b={.w=5, .h=10, .data={30,30,30,28,28,12,14,14,7,7}}};
#define CHAR_minus 45
struct Glyph GLYPH_minus = {.w=22, .h=21, .padleft=3, .padright=6, .padtop=18, .padbottom=0, .b={.w=13, .h=3, .data={8191,8191,8191}}};
#define CHAR_period 46
struct Glyph GLYPH_period = {.w=27, .h=31, .padleft=8, .padright=16, .padtop=28, .padbottom=0, .b={.w=3, .h=3, .data={7,7,7}}};
#define CHAR_0 48
struct Glyph GLYPH_0 = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,31751,32263,32647,29639,29175,28799,28735,28703,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_1 49
struct Glyph GLYPH_1 = {.w=21, .h=31, .padleft=2, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={480,504,508,478,463,450,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,16382,16382}}};
#define CHAR_2 50
struct Glyph GLYPH_2 = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14343,12295,28679,28672,28672,12288,14336,7168,7680,3584,1792,896,448,480,240,120,56,28,14,32767,32767}}};
#define CHAR_3 51
struct Glyph GLYPH_3 = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={4080,8188,15388,14350,28686,28686,28672,12288,14336,15360,8128,4032,8128,15360,28672,28672,57344,57344,57351,24583,28678,30750,16380,8184}}};
#define CHAR_4 52
struct Glyph GLYPH_4 = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={3840,3840,3968,3968,4032,3808,3808,3696,3696,3640,3644,3612,3598,3598,3591,8191,8191,8191,3584,3584,3584,3584,3584,3584}}};
#define CHAR_5 53
struct Glyph GLYPH_5 = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={16383,16383,7,7,7,7,7,135,4095,8191,7183,14343,14343,12295,28672,28672,28672,28672,12295,14343,14350,7198,8188,4088}}};
#define CHAR_6 54
struct Glyph GLYPH_6 = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,28679,28679,7,7,7,135,4095,8191,15391,14351,12295,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_7 55
struct Glyph GLYPH_7 = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7168,7168,3072,3584,3584,1536,1792,1792,768,896,896,448,448,192,224,224,96,112,112,48,56,24}}};
#define CHAR_8 56
struct Glyph GLYPH_8 = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4080,8184,15388,14348,12302,28686,28686,12302,14348,15388,8184,4080,8188,15390,14350,12295,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_9 57
struct Glyph GLYPH_9 = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,30734,31774,32764,32760,29664,28672,28672,28672,28679,12295,14342,15390,8188,4088}}};
#define CHAR_semicolon 59
struct Glyph GLYPH_semicolon = {.w=26, .h=38, .padleft=7, .padright=14, .padtop=14, .padbottom=0, .b={.w=5, .h=24, .data={30,30,30,0,0,0,0,0,0,0,0,0,0,0,30,30,30,28,28,12,14,14,7,7}}};
#define CHAR_gt 60
struct Glyph GLYPH_gt = {.w=22, .h=29, .padleft=3, .padright=5, .padtop=11, .padbottom=0, .b={.w=14, .h=18, .data={14336,15360,7936,1920,992,248,124,31,7,7,31,60,248,992,1984,7936,15360,14336}}};
#define CHAR_equals 61
struct Glyph GLYPH_equals = {.w=22, .h=25, .padleft=3, .padright=6, .padtop=16, .padbottom=0, .b={.w=13, .h=9, .data={8191,8191,8191,0,0,0,8191,8191,8191}}};
#define CHAR_ls 62
struct Glyph GLYPH_ls = {.w=21, .h=29, .padleft=2, .padright=5, .padtop=11, .padbottom=0, .b={.w=14, .h=18, .data={7,15,62,120,496,1984,3968,15872,14336,14336,15872,3840,1984,496,248,62,15,7}}};
#define CHAR_question_mark 63
struct Glyph GLYPH_question_mark = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14343,12295,28679,28672,12288,14336,15360,7680,3840,1920,896,448,448,448,448,0,0,0,448,448,448}}};
#define CHAR_A 65
struct Glyph GLYPH_A = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3128,7192,7196,8188,8188,16382,14350,12302,28678,28679,28679,24583}}};
#define CHAR_B 66
struct Glyph GLYPH_B = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,7175,7175,4095,2047,8191,15367,14343,12295,28679,28679,28679,12295,14343,15367,8191,4095}}};
#define CHAR_C 67
struct Glyph GLYPH_C = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,28679,28679,7,7,7,7,7,7,7,7,7,7,7,7,28679,28679,14350,15390,8188,4088}}};
#define CHAR_D 68
struct Glyph GLYPH_D = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={1023,2047,3847,7175,7175,14343,14343,12295,12295,28679,28679,28679,28679,28679,28679,12295,12295,14343,14343,7175,7175,3847,2047,1023}}};
#define CHAR_E 69
struct Glyph GLYPH_E = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,7,7,7,7,7,7,7,7,4095,4095,4095,7,7,7,7,7,7,7,7,7,16383,16383}}};
#define CHAR_F 70
struct Glyph GLYPH_F = {.w=23, .h=31, .padleft=4, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7,7,7,7,7,7,7,7,2047,2047,2047,7,7,7,7,7,7,7,7,7,7,7}}};
#define CHAR_G 71
struct Glyph GLYPH_G = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,28679,28679,7,7,7,7,16263,32647,32647,28679,28679,28679,28679,28679,28679,28679,28686,30750,32764,8184}}};
#define CHAR_H 72
struct Glyph GLYPH_H = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,32767,32767,32767,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}};
#define CHAR_I 73
struct Glyph GLYPH_I = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,8191,8191}}};
#define CHAR_J 74
struct Glyph GLYPH_J = {.w=20, .h=31, .padleft=1, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={32704,32704,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28679,12295,14342,15390,8188,4088}}};
#define CHAR_K 75
struct Glyph GLYPH_K = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={14343,7175,3591,3847,1799,903,455,487,231,119,63,63,127,239,231,455,967,903,1799,1799,3591,7175,7175,14343}}};
#define CHAR_L 76
struct Glyph GLYPH_L = {.w=23, .h=31, .padleft=4, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8191,8191}}};
#define CHAR_M 77
struct Glyph GLYPH_M = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={61455,61455,61455,63519,63519,64543,64575,60479,60983,61047,58999,59239,59367,58343,58311,58311,57799,57351,57351,57351,57351,57351,57351,57351}}};
#define CHAR_N 78
struct Glyph GLYPH_N = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28687,28687,28703,28703,28703,28735,28735,28791,28791,28903,28903,29127,29127,29575,29575,29447,30471,30471,32263,32263,31751,31751,30727,30727}}};
#define CHAR_O 79
struct Glyph GLYPH_O = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_P 80
struct Glyph GLYPH_P = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,6151,7175,7175,4095,2047,511,7,7,7,7,7,7,7,7,7,7}}};
#define CHAR_Q 81
struct Glyph GLYPH_Q = {.w=21, .h=36, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=29, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088,384,896,896,768,768}}};
#define CHAR_R 82
struct Glyph GLYPH_R = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4095,8191,15367,14343,12295,28679,28679,28679,12295,14343,14343,8191,4095,1023,903,1799,1799,3591,3591,7175,7175,14343,14343,28679}}};
#define CHAR_S 83
struct Glyph GLYPH_S = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,28679,28679,7,7,14,30,124,1016,4064,7936,15360,14336,12288,28672,28679,28679,14343,15390,8188,4088}}};
#define CHAR_T 84
struct Glyph GLYPH_T = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224}}};
#define CHAR_U 85
struct Glyph GLYPH_U = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_V 86
struct Glyph GLYPH_V = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={24579,28679,28679,28678,12302,14350,14350,6156,6172,7196,7192,3096,3640,3640,3632,1648,1904,1904,864,992,992,960,448,448}}};
#define CHAR_W 87
struct Glyph GLYPH_W = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={57347,24579,24579,24579,24583,24583,28679,29126,29126,12742,13254,13286,13294,13166,15214,16236,8060,7804,7740,7740,7740,7740,7224,7192}}};
#define CHAR_X 88
struct Glyph GLYPH_X = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,14350,14350,7196,7196,3640,3640,1904,1904,992,992,448,448,992,992,1904,1904,3640,3640,7196,7196,14350,14350,28679}}};
#define CHAR_Y 89
struct Glyph GLYPH_Y = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,12295,14350,6158,7196,7196,3608,3640,1592,1904,880,992,992,448,448,448,448,448,448,448,448,448,448,448}}};
#define CHAR_Z 90
struct Glyph GLYPH_Z = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7168,7168,3584,1792,1792,896,896,448,448,224,224,112,112,56,56,28,28,14,7,7,8191,8191}}};
#define CHAR_l_bracket 91
struct Glyph GLYPH_l_bracket = {.w=24, .h=36, .padleft=5, .padright=8, .padtop=3, .padbottom=0, .b={.w=11, .h=33, .data={2047,2047,2047,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,2047,2047,2047}}};
#define CHAR_backslash 92
struct Glyph GLYPH_backslash = {.w=21, .h=36, .padleft=2, .padright=4, .padtop=5, .padbottom=0, .b={.w=15, .h=31, .data={7,14,14,12,28,28,56,56,48,112,112,96,224,224,448,448,384,896,896,1792,1792,1536,3584,3584,3072,7168,7168,14336,14336,12288,28672}}};
#define CHAR_r_bracket 93
struct Glyph GLYPH_r_bracket = {.w=23, .h=36, .padleft=4, .padright=8, .padtop=3, .padbottom=0, .b={.w=11, .h=33, .data={1023,2047,2047,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,1792,2047,2047,2047}}};
#define CHAR_caret 94
struct Glyph GLYPH_caret = {.w=21, .h=16, .padleft=2, .padright=4, .padtop=8, .padbottom=0, .b={.w=15, .h=8, .data={992,2016,3952,3640,7196,14366,28687,28679}}};
#define CHAR_underscore 95
struct Glyph GLYPH_underscore = {.w=22, .h=39, .padleft=3, .padright=6, .padtop=36, .padbottom=0, .b={.w=13, .h=3, .data={8191,8191,8191}}};
#define CHAR_a 97
struct Glyph GLYPH_a = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4092,8190,15374,14343,12295,28672,32512,32760,32766,28686,28679,28679,28679,30727,31758,32766,30716}}};
#define CHAR_b 98
struct Glyph GLYPH_b = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={7,7,7,7,7,7,7,4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,12295,14351,15391,8191,4087}}};
#define CHAR_c 99
struct Glyph GLYPH_c = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,28679,28679,7,7,7,7,7,28679,28679,14350,15390,8188,4088}}};
#define CHAR_d 100
struct Glyph GLYPH_d = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28672,28672,28672,28672,28672,28672,28672,30712,32764,31774,30734,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712}}};
#define CHAR_e 101
struct Glyph GLYPH_e = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,12295,28679,28679,32767,32767,32767,7,7,28679,12302,14366,8188,4088}}};
#define CHAR_f 102
struct Glyph GLYPH_f = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8128,8160,224,112,112,112,112,112,8191,8191,8191,112,112,112,112,112,112,112,112,112,112,112,112,112}}};
#define CHAR_g 103
struct Glyph GLYPH_g = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={30712,32764,31774,30734,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712,28672,28672,12295,14342,15374,8188,4088}}};
#define CHAR_h 104
struct Glyph GLYPH_h = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={7,7,7,7,7,7,7,4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}};
#define CHAR_i 105
struct Glyph GLYPH_i = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=8, .padbottom=0, .b={.w=13, .h=23, .data={224,224,224,0,0,0,255,255,224,224,224,224,224,224,224,224,224,224,224,224,224,8191,8191}}};
#define CHAR_j 106
struct Glyph GLYPH_j = {.w=22, .h=38, .padleft=3, .padright=9, .padtop=8, .padbottom=0, .b={.w=10, .h=30, .data={896,896,896,0,0,0,1020,1020,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,384,448,511,255}}};
#define CHAR_k 107
struct Glyph GLYPH_k = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={7,7,7,7,7,7,7,15367,7687,3847,1927,967,487,247,127,127,255,495,967,903,1799,3591,7687,15367}}};
#define CHAR_l 108
struct Glyph GLYPH_l = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={511,511,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,896,32640,32512}}};
#define CHAR_m 109
struct Glyph GLYPH_m = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={16383,16383,12743,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127}}};
#define CHAR_n 110
struct Glyph GLYPH_n = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}};
#define CHAR_o 111
struct Glyph GLYPH_o = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_p 112
struct Glyph GLYPH_p = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,12295,14351,15391,8191,4087,7,7,7,7,7,7,7}}};
#define CHAR_q 113
struct Glyph GLYPH_q = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={30712,32764,31774,30734,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712,28672,28672,28672,28672,28672,28672,28672}}};
#define CHAR_r 114
struct Glyph GLYPH_r = {.w=24, .h=31, .padleft=5, .padright=6, .padtop=14, .padbottom=0, .b={.w=13, .h=17, .data={2039,4095,3615,7183,7175,7,7,7,7,7,7,7,7,7,7,7,7}}};
#define CHAR_s 115
struct Glyph GLYPH_s = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4092,16382,14350,28679,28679,7,14,510,4092,16352,14336,28672,28679,28679,14350,16382,4092}}};
#define CHAR_t 116
struct Glyph GLYPH_t = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={112,112,112,112,112,112,112,8191,8191,112,112,112,112,112,112,112,112,112,112,112,112,224,8160,8128}}};
#define CHAR_u 117
struct Glyph GLYPH_u = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712}}};
#define CHAR_v 118
struct Glyph GLYPH_v = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={24583,28679,28678,14350,14350,6172,7196,7192,3128,3640,3632,1904,1904,992,992,960,448}}};
#define CHAR_w 119
struct Glyph GLYPH_w = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=17, .data={57347,24579,24579,24583,29127,29126,12742,13254,13294,13166,15214,16252,7804,7740,7740,7740,7192}}};
#define CHAR_x 120
struct Glyph GLYPH_x = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={28687,14350,7196,7740,3640,1904,2016,992,448,992,2016,1904,3640,7740,7196,14350,28687}}};
#define CHAR_y 121
struct Glyph GLYPH_y = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={24583,28679,28686,12302,14348,14364,7196,7192,3128,3640,3632,1648,1904,2016,992,960,448,448,448,192,224,224,124,124}}};
#define CHAR_z 122
struct Glyph GLYPH_z = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=14, .padbottom=0, .b={.w=13, .h=17, .data={8191,8191,7168,3584,1792,896,960,448,224,112,120,56,28,14,7,8191,8191}}};
#define CHAR_l_brace 123
struct Glyph GLYPH_l_brace = {.w=22, .h=37, .padleft=3, .padright=7, .padtop=3, .padbottom=0, .b={.w=12, .h=34, .data={2048,3840,3968,448,192,224,224,224,224,224,224,224,224,96,112,120,63,31,63,120,112,96,224,224,224,224,224,224,224,224,448,4032,3968,3072}}};
#define CHAR_pipe 124
struct Glyph GLYPH_pipe = {.w=27, .h=36, .padleft=8, .padright=16, .padtop=5, .padbottom=0, .b={.w=3, .h=31, .data={7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7}}};
#define CHAR_r_brace 125
struct Glyph GLYPH_r_brace = {.w=23, .h=37, .padleft=4, .padright=7, .padtop=3, .padbottom=0, .b={.w=12, .h=34, .data={1,31,63,120,112,96,224,224,224,224,224,224,224,224,192,448,4032,3968,3968,448,192,224,224,224,224,224,224,224,224,96,112,63,31,7}}};
#define CHAR_multiply 215
struct Glyph GLYPH_multiply = {.w=20, .h=28, .padleft=1, .padright=2, .padtop=12, .padbottom=0, .b={.w=17, .h=16, .data={114695,122895,61470,30780,15480,7920,4064,1984,1984,4064,7920,15480,30780,61470,122895,114695}}};
#define CHAR_divide 247
struct Glyph GLYPH_divide = {.w=22, .h=28, .padleft=3, .padright=6, .padtop=12, .padbottom=0, .b={.w=13, .h=16, .data={224,224,224,0,0,0,0,8191,8191,8191,0,0,0,224,224,224}}};
#define CHAR_ALPHA 913
struct Glyph GLYPH_ALPHA = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3128,7192,7196,8188,8188,16382,14350,12302,28678,28679,28679,24583}}};
#define CHAR_BETA 914
struct Glyph GLYPH_BETA = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,7175,7175,4095,2047,8191,15367,14343,12295,28679,28679,28679,12295,14343,15367,8191,4095}}};
#define CHAR_GAMMA 915
struct Glyph GLYPH_GAMMA = {.w=23, .h=31, .padleft=4, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7}}};
#define CHAR_DELTA 916
struct Glyph GLYPH_DELTA = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3096,7192,7196,6172,6156,14350,14350,12302,28678,28679,32767,32767}}};
#define CHAR_EPSILON 917
struct Glyph GLYPH_EPSILON = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,7,7,7,7,7,7,7,7,4095,4095,4095,7,7,7,7,7,7,7,7,7,16383,16383}}};
#define CHAR_ZETA 918
struct Glyph GLYPH_ZETA = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7168,7168,3584,1792,1792,896,896,448,448,224,224,112,112,56,56,28,28,14,7,7,8191,8191}}};
#define CHAR_ETA 919
struct Glyph GLYPH_ETA = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,32767,32767,32767,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}};
#define CHAR_THETA 920
struct Glyph GLYPH_THETA = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,32767,32767,32767,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_IOTA 921
struct Glyph GLYPH_IOTA = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,8191,8191}}};
#define CHAR_KAPPA 922
struct Glyph GLYPH_KAPPA = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={14343,7175,3591,3847,1799,903,455,487,231,119,63,63,127,239,231,455,967,903,1799,1799,3591,7175,7175,14343}}};
#define CHAR_LAMBDA 923
struct Glyph GLYPH_LAMBDA = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3096,7192,7196,6172,6156,14350,14350,12302,28678,28679,28679,24579}}};
#define CHAR_MU 924
struct Glyph GLYPH_MU = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={61455,61455,61455,63519,63519,64543,64575,60479,60983,61047,58999,59239,59367,58343,58311,58311,57799,57351,57351,57351,57351,57351,57351,57351}}};
#define CHAR_NU 925
struct Glyph GLYPH_NU = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28687,28687,28703,28703,28703,28735,28735,28791,28791,28903,28903,29127,29127,29575,29575,29447,30471,30471,32263,32263,31751,31751,30727,30727}}};
#define CHAR_XI 926
struct Glyph GLYPH_XI = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,0,0,0,0,0,0,0,0,4092,4092,4092,0,0,0,0,0,0,0,0,0,16383,16383}}};
#define CHAR_OMIKRON 927
struct Glyph GLYPH_OMIKRON = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_PI 928
struct Glyph GLYPH_PI = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={32767,32767,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}};
#define CHAR_RHO 929
struct Glyph GLYPH_RHO = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,6151,7175,7175,4095,2047,511,7,7,7,7,7,7,7,7,7,7}}};
#define CHAR_SIGMA 931
struct Glyph GLYPH_SIGMA = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7,6,14,12,28,56,56,112,112,224,224,112,112,56,56,28,12,14,6,7,8191,8191}}};
#define CHAR_TAU 932
struct Glyph GLYPH_TAU = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224}}};
#define CHAR_UPSULON 933
struct Glyph GLYPH_UPSULON = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,12295,14350,6158,7196,7196,3608,3640,1592,1904,880,992,992,448,448,448,448,448,448,448,448,448,448,448}}};
#define CHAR_PHI 934
struct Glyph GLYPH_PHI = {.w=21, .h=31, .padleft=2, .padright=2, .padtop=7, .padbottom=0, .b={.w=17, .h=24, .data={896,896,1984,16376,32764,62366,58254,50055,115591,115591,115591,115591,115591,115591,115591,115591,50055,58254,62366,32764,16376,1984,896,896}}};
#define CHAR_HI 935
struct Glyph GLYPH_HI = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,14350,14350,7196,7196,3640,3640,1904,1904,992,992,448,448,992,992,1904,1904,3640,3640,7196,7196,14350,14350,28679}}};
#define CHAR_PSI 936
struct Glyph GLYPH_PSI = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,12743,14798,15838,8188,2040,448,448,448,448,448,448,448}}};
#define CHAR_OMEGA 937
struct Glyph GLYPH_OMEGA = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,12294,14350,8062,3964,32639,32639}}};
#define CHAR_alpha 945
struct Glyph GLYPH_alpha = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={25592,26620,30494,32270,15367,15367,14343,14343,14343,14343,14343,15367,15367,32270,30494,26620,25592}}};
#define CHAR_beta 946
struct Glyph GLYPH_beta = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={2040,4092,7710,7182,6151,14343,14343,14343,6151,7175,4071,2023,8167,15367,14343,12295,28679,28679,28679,12295,14343,15375,8191,4095,7,7,7,7,7,7,7}}};
#define CHAR_gamma 947
struct Glyph GLYPH_gamma = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=13, .padbottom=0, .b={.w=15, .h=25, .data={6,28679,28686,28686,12316,12316,14392,14392,6256,7280,7264,3808,3808,1984,1984,960,960,448,448,448,448,448,448,448,448}}};
#define CHAR_delta 948
struct Glyph GLYPH_delta = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,7196,14,14,14,14,28,252,4088,8124,15374,14342,12295,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_epsilon 949
struct Glyph GLYPH_epsilon = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=17, .data={8184,16380,14366,28686,28686,14,1020,1016,1020,14,7,7,57351,24583,30734,16382,8184}}};
#define CHAR_zeta 950
struct Glyph GLYPH_zeta = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={32767,32767,7680,3840,1920,960,224,112,56,60,28,14,14,6,7,7,7,7,7,7,14,30,2044,8184,16128,14336,28672,28672,14336,16256,8064}}};
#define CHAR_eta 951
struct Glyph GLYPH_eta = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28672,28672,28672,28672,28672,28672,28672}}};
#define CHAR_theta 952
struct Glyph GLYPH_theta = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={2032,4088,7708,7180,14350,14342,12294,12295,28679,28679,32767,32767,32767,28679,28679,28679,12295,12294,14350,14350,7196,7708,4088,2032}}};
#define CHAR_iota 953
struct Glyph GLYPH_iota = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={511,511,448,448,448,448,448,448,448,448,448,448,448,448,896,32640,32512}}};
#define CHAR_kappa 954
struct Glyph GLYPH_kappa = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=14, .padbottom=0, .b={.w=14, .h=17, .data={15367,7687,3847,1927,967,487,247,127,127,255,495,967,903,1799,3591,7687,15367}}};
#define CHAR_lambda 955
struct Glyph GLYPH_lambda = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={124,124,224,224,192,448,448,448,960,992,2016,1904,1648,3632,3640,3128,7192,7196,14364,14348,12302,28686,28679,24583}}};
#define CHAR_mu 956
struct Glyph GLYPH_mu = {.w=21, .h=38, .padleft=2, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,30735,31775,65535,59391,7,7,7,7,7,7,7}}};
#define CHAR_nu 957
struct Glyph GLYPH_nu = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=13, .padbottom=0, .b={.w=15, .h=18, .data={2,28679,28679,28686,12302,12316,14364,14392,6200,7216,7280,3696,3680,2016,2016,960,960,448}}};
#define CHAR_xi 958
struct Glyph GLYPH_xi = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={32767,32767,124,28,14,14,14,14,28,60,4088,8160,8184,60,14,14,7,7,7,7,14,30,2044,8184,16128,14336,28672,28672,14336,16256,8064}}};
#define CHAR_omikron 959
struct Glyph GLYPH_omikron = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_pi 960
struct Glyph GLYPH_pi = {.w=20, .h=31, .padleft=1, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=17, .data={65535,65535,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,63544,61496}}};
#define CHAR_rho 961
struct Glyph GLYPH_rho = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14351,15391,8191,4087,7,7,7,7,7,7,7}}};
#define CHAR_sigma 963
struct Glyph GLYPH_sigma = {.w=21, .h=31, .padleft=2, .padright=2, .padtop=14, .padbottom=0, .b={.w=17, .h=17, .data={131064,131068,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}};
#define CHAR_tau 964
struct Glyph GLYPH_tau = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=14, .padbottom=0, .b={.w=13, .h=17, .data={8191,8191,112,112,112,112,112,112,112,112,112,112,112,112,224,8160,8128}}};
#define CHAR_upsulon 965
struct Glyph GLYPH_upsulon = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=13, .padbottom=0, .b={.w=15, .h=18, .data={6144,7175,6151,14343,12295,12295,12295,28679,28679,28679,12295,12295,14343,14343,7182,7710,4092,2040}}};
#define CHAR_phi 966
struct Glyph GLYPH_phi = {.w=20, .h=38, .padleft=1, .padright=2, .padtop=14, .padbottom=0, .b={.w=17, .h=24, .data={32268,32526,58126,50054,50054,115591,115591,115591,115591,115591,50055,50054,58254,62350,31676,16376,8176,896,896,896,896,896,896,896}}};
#define CHAR_hi 967
struct Glyph GLYPH_hi = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={28686,14366,14360,7224,7216,3696,3696,1888,2016,992,960,448,448,480,992,1008,880,1848,1848,1564,3612,3086,15374,14343}}};
#define CHAR_psi 968
struct Glyph GLYPH_psi = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={448,448,448,448,448,448,448,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,12743,14798,15838,8188,4088,448,448,448,448,448,448,448}}};
#define CHAR_omega 969
struct Glyph GLYPH_omega = {.w=21, .h=31, .padleft=2, .padright=2, .padtop=13, .padbottom=0, .b={.w=17, .h=18, .data={16388,24588,57358,57358,57350,49158,49159,115591,115591,115591,115591,115591,115591,50055,50118,59342,32510,32508}}};
#define CHAR_space 32
struct Glyph GLYPH_space = {.w=58, .h=0, .padleft=18, .padright=40, .padtop=0, .padbottom=0, .b={.w=0, .h=0, .data={}}};
#define CHAR_tab 9
struct Glyph GLYPH_tab = {.w=112, .h=0, .padleft=72, .padright=40, .padtop=0, .padbottom=0, .b={.w=0, .h=0, .data={}}};

struct Glyph *glyphs[] = {
NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,&GLYPH_tab,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,&GLYPH_space,&GLYPH_exclamation,&GLYPH_double_quote,NULL,NULL,&GLYPH_percent,&GLYPH_ampersand,&GLYPH_single_quote,&GLYPH_l_parens,&GLYPH_r_parens,&GLYPH_asterisk,&GLYPH_plus,&GLYPH_comma,&GLYPH_minus,&GLYPH_period,NULL,&GLYPH_0,&GLYPH_1,&GLYPH_2,&GLYPH_3,&GLYPH_4,&GLYPH_5,&GLYPH_6,&GLYPH_7,&GLYPH_8,&GLYPH_9,NULL,&GLYPH_semicolon,&GLYPH_gt,&GLYPH_equals,&GLYPH_ls,&GLYPH_question_mark,NULL,&GLYPH_A,&GLYPH_B,&GLYPH_C,&GLYPH_D,&GLYPH_E,&GLYPH_F,&GLYPH_G,&GLYPH_H,&GLYPH_I,&GLYPH_J,&GLYPH_K,&GLYPH_L,&GLYPH_M,&GLYPH_N,&GLYPH_O,&GLYPH_P,&GLYPH_Q,&GLYPH_R,&GLYPH_S,&GLYPH_T,&GLYPH_U,&GLYPH_V,&GLYPH_W,&GLYPH_X,&GLYPH_Y,&GLYPH_Z,&GLYPH_l_bracket,&GLYPH_backslash,&GLYPH_r_bracket,&GLYPH_caret,&GLYPH_underscore,NULL,&GLYPH_a,&GLYPH_b,&GLYPH_c,&GLYPH_d,&GLYPH_e,&GLYPH_f,&GLYPH_g,&GLYPH_h,&GLYPH_i,&GLYPH_j,&GLYPH_k,&GLYPH_l,&GLYPH_m,&GLYPH_n,&GLYPH_o,&GLYPH_p,&GLYPH_q,&GLYPH_r,&GLYPH_s,&GLYPH_t,&GLYPH_u,&GLYPH_v,&GLYPH_w,&GLYPH_x,&GLYPH_y,&GLYPH_z,&GLYPH_l_brace,&GLYPH_pipe,&GLYPH_r_brace,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,&GLYPH_multiply,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,&GLYPH_divide,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,&GLYPH_ALPHA,&GLYPH_BETA,&GLYPH_GAMMA,&GLYPH_DELTA,&GLYPH_EPSILON,&GLYPH_ZETA,&GLYPH_ETA,&GLYPH_THETA,&GLYPH_IOTA,&GLYPH_KAPPA,&GLYPH_LAMBDA,&GLYPH_MU,&GLYPH_NU,&GLYPH_XI,&GLYPH_OMIKRON,&GLYPH_PI,&GLYPH_RHO,NULL,&GLYPH_SIGMA,&GLYPH_TAU,&GLYPH_UPSULON,&GLYPH_PHI,&GLYPH_HI,&GLYPH_PSI,&GLYPH_OMEGA,NULL,NULL,NULL,NULL,NULL,NULL,NULL,&GLYPH_alpha,&GLYPH_beta,&GLYPH_gamma,&GLYPH_delta,&GLYPH_epsilon,&GLYPH_zeta,&GLYPH_eta,&GLYPH_theta,&GLYPH_iota,&GLYPH_kappa,&GLYPH_lambda,&GLYPH_mu,&GLYPH_nu,&GLYPH_xi,&GLYPH_omikron,&GLYPH_pi,&GLYPH_rho,NULL,&GLYPH_sigma,&GLYPH_tau,&GLYPH_upsulon,&GLYPH_phi,&GLYPH_hi,&GLYPH_psi,&GLYPH_omega
};

#endif