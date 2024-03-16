#ifndef INCLUDE_FONT_H
#define INCLUDE_FONT_H

#include <glyph.h>

#define CHAR_A 0
#define GLYPH_A glyphs[CHAR_A]
#define CHAR_B 1
#define GLYPH_B glyphs[CHAR_B]
#define CHAR_C 2
#define GLYPH_C glyphs[CHAR_C]
#define CHAR_D 3
#define GLYPH_D glyphs[CHAR_D]
#define CHAR_E 4
#define GLYPH_E glyphs[CHAR_E]
#define CHAR_F 5
#define GLYPH_F glyphs[CHAR_F]
#define CHAR_G 6
#define GLYPH_G glyphs[CHAR_G]
#define CHAR_H 7
#define GLYPH_H glyphs[CHAR_H]
#define CHAR_I 8
#define GLYPH_I glyphs[CHAR_I]
#define CHAR_J 9
#define GLYPH_J glyphs[CHAR_J]
#define CHAR_K 10
#define GLYPH_K glyphs[CHAR_K]
#define CHAR_L 11
#define GLYPH_L glyphs[CHAR_L]
#define CHAR_M 12
#define GLYPH_M glyphs[CHAR_M]
#define CHAR_N 13
#define GLYPH_N glyphs[CHAR_N]
#define CHAR_O 14
#define GLYPH_O glyphs[CHAR_O]
#define CHAR_P 15
#define GLYPH_P glyphs[CHAR_P]
#define CHAR_Q 16
#define GLYPH_Q glyphs[CHAR_Q]
#define CHAR_R 17
#define GLYPH_R glyphs[CHAR_R]
#define CHAR_S 18
#define GLYPH_S glyphs[CHAR_S]
#define CHAR_T 19
#define GLYPH_T glyphs[CHAR_T]
#define CHAR_U 20
#define GLYPH_U glyphs[CHAR_U]
#define CHAR_V 21
#define GLYPH_V glyphs[CHAR_V]
#define CHAR_W 22
#define GLYPH_W glyphs[CHAR_W]
#define CHAR_X 23
#define GLYPH_X glyphs[CHAR_X]
#define CHAR_Y 24
#define GLYPH_Y glyphs[CHAR_Y]
#define CHAR_Z 25
#define GLYPH_Z glyphs[CHAR_Z]
#define CHAR_a 26
#define GLYPH_a glyphs[CHAR_a]
#define CHAR_b 27
#define GLYPH_b glyphs[CHAR_b]
#define CHAR_c 28
#define GLYPH_c glyphs[CHAR_c]
#define CHAR_d 29
#define GLYPH_d glyphs[CHAR_d]
#define CHAR_e 30
#define GLYPH_e glyphs[CHAR_e]
#define CHAR_f 31
#define GLYPH_f glyphs[CHAR_f]
#define CHAR_g 32
#define GLYPH_g glyphs[CHAR_g]
#define CHAR_h 33
#define GLYPH_h glyphs[CHAR_h]
#define CHAR_i 34
#define GLYPH_i glyphs[CHAR_i]
#define CHAR_j 35
#define GLYPH_j glyphs[CHAR_j]
#define CHAR_k 36
#define GLYPH_k glyphs[CHAR_k]
#define CHAR_l 37
#define GLYPH_l glyphs[CHAR_l]
#define CHAR_m 38
#define GLYPH_m glyphs[CHAR_m]
#define CHAR_n 39
#define GLYPH_n glyphs[CHAR_n]
#define CHAR_o 40
#define GLYPH_o glyphs[CHAR_o]
#define CHAR_p 41
#define GLYPH_p glyphs[CHAR_p]
#define CHAR_q 42
#define GLYPH_q glyphs[CHAR_q]
#define CHAR_r 43
#define GLYPH_r glyphs[CHAR_r]
#define CHAR_s 44
#define GLYPH_s glyphs[CHAR_s]
#define CHAR_t 45
#define GLYPH_t glyphs[CHAR_t]
#define CHAR_u 46
#define GLYPH_u glyphs[CHAR_u]
#define CHAR_v 47
#define GLYPH_v glyphs[CHAR_v]
#define CHAR_w 48
#define GLYPH_w glyphs[CHAR_w]
#define CHAR_x 49
#define GLYPH_x glyphs[CHAR_x]
#define CHAR_y 50
#define GLYPH_y glyphs[CHAR_y]
#define CHAR_z 51
#define GLYPH_z glyphs[CHAR_z]
#define CHAR_ALPHA 52
#define GLYPH_ALPHA glyphs[CHAR_ALPHA]
#define CHAR_BETA 53
#define GLYPH_BETA glyphs[CHAR_BETA]
#define CHAR_GAMMA 54
#define GLYPH_GAMMA glyphs[CHAR_GAMMA]
#define CHAR_DELTA 55
#define GLYPH_DELTA glyphs[CHAR_DELTA]
#define CHAR_EPSILON 56
#define GLYPH_EPSILON glyphs[CHAR_EPSILON]
#define CHAR_ZETA 57
#define GLYPH_ZETA glyphs[CHAR_ZETA]
#define CHAR_ETA 58
#define GLYPH_ETA glyphs[CHAR_ETA]
#define CHAR_THETA 59
#define GLYPH_THETA glyphs[CHAR_THETA]
#define CHAR_IOTA 60
#define GLYPH_IOTA glyphs[CHAR_IOTA]
#define CHAR_KAPPA 61
#define GLYPH_KAPPA glyphs[CHAR_KAPPA]
#define CHAR_LAMBDA 62
#define GLYPH_LAMBDA glyphs[CHAR_LAMBDA]
#define CHAR_MU 63
#define GLYPH_MU glyphs[CHAR_MU]
#define CHAR_NU 64
#define GLYPH_NU glyphs[CHAR_NU]
#define CHAR_XI 65
#define GLYPH_XI glyphs[CHAR_XI]
#define CHAR_OMIKRON 66
#define GLYPH_OMIKRON glyphs[CHAR_OMIKRON]
#define CHAR_PI 67
#define GLYPH_PI glyphs[CHAR_PI]
#define CHAR_RHO 68
#define GLYPH_RHO glyphs[CHAR_RHO]
#define CHAR_SIGMA 69
#define GLYPH_SIGMA glyphs[CHAR_SIGMA]
#define CHAR_TAU 70
#define GLYPH_TAU glyphs[CHAR_TAU]
#define CHAR_UPSULON 71
#define GLYPH_UPSULON glyphs[CHAR_UPSULON]
#define CHAR_PHI 72
#define GLYPH_PHI glyphs[CHAR_PHI]
#define CHAR_HI 73
#define GLYPH_HI glyphs[CHAR_HI]
#define CHAR_PSI 74
#define GLYPH_PSI glyphs[CHAR_PSI]
#define CHAR_OMEGA 75
#define GLYPH_OMEGA glyphs[CHAR_OMEGA]
#define CHAR_alpha 76
#define GLYPH_alpha glyphs[CHAR_alpha]
#define CHAR_beta 77
#define GLYPH_beta glyphs[CHAR_beta]
#define CHAR_gamma 78
#define GLYPH_gamma glyphs[CHAR_gamma]
#define CHAR_delta 79
#define GLYPH_delta glyphs[CHAR_delta]
#define CHAR_epsilon 80
#define GLYPH_epsilon glyphs[CHAR_epsilon]
#define CHAR_zeta 81
#define GLYPH_zeta glyphs[CHAR_zeta]
#define CHAR_eta 82
#define GLYPH_eta glyphs[CHAR_eta]
#define CHAR_theta 83
#define GLYPH_theta glyphs[CHAR_theta]
#define CHAR_iota 84
#define GLYPH_iota glyphs[CHAR_iota]
#define CHAR_kappa 85
#define GLYPH_kappa glyphs[CHAR_kappa]
#define CHAR_lambda 86
#define GLYPH_lambda glyphs[CHAR_lambda]
#define CHAR_mu 87
#define GLYPH_mu glyphs[CHAR_mu]
#define CHAR_nu 88
#define GLYPH_nu glyphs[CHAR_nu]
#define CHAR_xi 89
#define GLYPH_xi glyphs[CHAR_xi]
#define CHAR_omikron 90
#define GLYPH_omikron glyphs[CHAR_omikron]
#define CHAR_pi 91
#define GLYPH_pi glyphs[CHAR_pi]
#define CHAR_rho 92
#define GLYPH_rho glyphs[CHAR_rho]
#define CHAR_sigma 93
#define GLYPH_sigma glyphs[CHAR_sigma]
#define CHAR_tau 94
#define GLYPH_tau glyphs[CHAR_tau]
#define CHAR_upsulon 95
#define GLYPH_upsulon glyphs[CHAR_upsulon]
#define CHAR_phi 96
#define GLYPH_phi glyphs[CHAR_phi]
#define CHAR_hi 97
#define GLYPH_hi glyphs[CHAR_hi]
#define CHAR_psi 98
#define GLYPH_psi glyphs[CHAR_psi]
#define CHAR_omega 99
#define GLYPH_omega glyphs[CHAR_omega]

Glyph glyphs[] = {
[CHAR_A] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3128,7192,7196,8188,8188,16382,14350,12302,28678,28679,28679,24583}}},
[CHAR_B] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,7175,7175,4095,2047,8191,15367,14343,12295,28679,28679,28679,12295,14343,15367,8191,4095}}},
[CHAR_C] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,28679,28679,7,7,7,7,7,7,7,7,7,7,7,7,28679,28679,14350,15390,8188,4088}}},
[CHAR_D] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={1023,2047,3847,7175,7175,14343,14343,12295,12295,28679,28679,28679,28679,28679,28679,12295,12295,14343,14343,7175,7175,3847,2047,1023}}},
[CHAR_E] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,7,7,7,7,7,7,7,7,4095,4095,4095,7,7,7,7,7,7,7,7,7,16383,16383}}},
[CHAR_F] = {.w=23, .h=31, .padleft=4, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7,7,7,7,7,7,7,7,2047,2047,2047,7,7,7,7,7,7,7,7,7,7,7}}},
[CHAR_G] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,28679,28679,7,7,7,7,16263,32647,32647,28679,28679,28679,28679,28679,28679,28679,28686,30750,32764,8184}}},
[CHAR_H] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,32767,32767,32767,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}},
[CHAR_I] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,8191,8191}}},
[CHAR_J] = {.w=20, .h=31, .padleft=1, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={32704,32704,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28672,28679,12295,14342,15390,8188,4088}}},
[CHAR_K] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={14343,7175,3591,3847,1799,903,455,487,231,119,63,63,127,239,231,455,967,903,1799,1799,3591,7175,7175,14343}}},
[CHAR_L] = {.w=23, .h=31, .padleft=4, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8191,8191}}},
[CHAR_M] = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={61455,61455,61455,63519,63519,64543,64575,60479,60983,61047,58999,59239,59367,58343,58311,58311,57799,57351,57351,57351,57351,57351,57351,57351}}},
[CHAR_N] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28687,28687,28703,28703,28703,28735,28735,28791,28791,28903,28903,29127,29127,29575,29575,29447,30471,30471,32263,32263,31751,31751,30727,30727}}},
[CHAR_O] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_P] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,6151,7175,7175,4095,2047,511,7,7,7,7,7,7,7,7,7,7}}},
[CHAR_Q] = {.w=21, .h=36, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=29, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088,384,896,896,768,768}}},
[CHAR_R] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4095,8191,15367,14343,12295,28679,28679,28679,12295,14343,14343,8191,4095,1023,903,1799,1799,3591,3591,7175,7175,14343,14343,28679}}},
[CHAR_S] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,28679,28679,7,7,14,30,124,1016,4064,7936,15360,14336,12288,28672,28679,28679,14343,15390,8188,4088}}},
[CHAR_T] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224}}},
[CHAR_U] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_V] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={24579,28679,28679,28678,12302,14350,14350,6156,6172,7196,7192,3096,3640,3640,3632,1648,1904,1904,864,992,992,960,448,448}}},
[CHAR_W] = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={57347,24579,24579,24579,24583,24583,28679,29126,29126,12742,13254,13286,13294,13166,15214,16236,8060,7804,7740,7740,7740,7740,7224,7192}}},
[CHAR_X] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,14350,14350,7196,7196,3640,3640,1904,1904,992,992,448,448,992,992,1904,1904,3640,3640,7196,7196,14350,14350,28679}}},
[CHAR_Y] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,12295,14350,6158,7196,7196,3608,3640,1592,1904,880,992,992,448,448,448,448,448,448,448,448,448,448,448}}},
[CHAR_Z] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7168,7168,3584,1792,1792,896,896,448,448,224,224,112,112,56,56,28,28,14,7,7,8191,8191}}},
[CHAR_a] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4092,8190,15374,14343,12295,28672,32512,32760,32766,28686,28679,28679,28679,30727,31758,32766,30716}}},
[CHAR_b] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={7,7,7,7,7,7,7,4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,12295,14351,15391,8191,4087}}},
[CHAR_c] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,28679,28679,7,7,7,7,7,28679,28679,14350,15390,8188,4088}}},
[CHAR_d] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28672,28672,28672,28672,28672,28672,28672,30712,32764,31774,30734,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712}}},
[CHAR_e] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,12295,28679,28679,32767,32767,32767,7,7,28679,12302,14366,8188,4088}}},
[CHAR_f] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8128,8160,224,112,112,112,112,112,8191,8191,8191,112,112,112,112,112,112,112,112,112,112,112,112,112}}},
[CHAR_g] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={30712,32764,31774,30734,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712,28672,28672,12295,14342,15374,8188,4088}}},
[CHAR_h] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={7,7,7,7,7,7,7,4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}},
[CHAR_i] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=8, .padbottom=0, .b={.w=13, .h=23, .data={224,224,224,0,0,0,255,255,224,224,224,224,224,224,224,224,224,224,224,224,224,8191,8191}}},
[CHAR_j] = {.w=22, .h=38, .padleft=3, .padright=9, .padtop=8, .padbottom=0, .b={.w=10, .h=30, .data={896,896,896,0,0,0,1020,1020,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,896,384,448,511,255}}},
[CHAR_k] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={7,7,7,7,7,7,7,15367,7687,3847,1927,967,487,247,127,127,255,495,967,903,1799,3591,7687,15367}}},
[CHAR_l] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={511,511,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,896,32640,32512}}},
[CHAR_m] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={16383,16383,12743,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127}}},
[CHAR_n] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}},
[CHAR_o] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_p] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,12295,14351,15391,8191,4087,7,7,7,7,7,7,7}}},
[CHAR_q] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={30712,32764,31774,30734,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712,28672,28672,28672,28672,28672,28672,28672}}},
[CHAR_r] = {.w=24, .h=31, .padleft=5, .padright=6, .padtop=14, .padbottom=0, .b={.w=13, .h=17, .data={2039,4095,3615,7183,7175,7,7,7,7,7,7,7,7,7,7,7,7}}},
[CHAR_s] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4092,16382,14350,28679,28679,7,14,510,4092,16352,14336,28672,28679,28679,14350,16382,4092}}},
[CHAR_t] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={112,112,112,112,112,112,112,8191,8191,112,112,112,112,112,112,112,112,112,112,112,112,224,8160,8128}}},
[CHAR_u] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,30734,31774,32764,30712}}},
[CHAR_v] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={24583,28679,28678,14350,14350,6172,7196,7192,3128,3640,3632,1904,1904,992,992,960,448}}},
[CHAR_w] = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=17, .data={57347,24579,24579,24583,29127,29126,12742,13254,13294,13166,15214,16252,7804,7740,7740,7740,7192}}},
[CHAR_x] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={28687,14350,7196,7740,3640,1904,2016,992,448,992,2016,1904,3640,7740,7196,14350,28687}}},
[CHAR_y] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={24583,28679,28686,12302,14348,14364,7196,7192,3128,3640,3632,1648,1904,2016,992,960,448,448,448,192,224,224,124,124}}},
[CHAR_z] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=14, .padbottom=0, .b={.w=13, .h=17, .data={8191,8191,7168,3584,1792,896,960,448,224,112,120,56,28,14,7,8191,8191}}},
[CHAR_ALPHA] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3128,7192,7196,8188,8188,16382,14350,12302,28678,28679,28679,24583}}},
[CHAR_BETA] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,7175,7175,4095,2047,8191,15367,14343,12295,28679,28679,28679,12295,14343,15367,8191,4095}}},
[CHAR_GAMMA] = {.w=23, .h=31, .padleft=4, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7}}},
[CHAR_DELTA] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3096,7192,7196,6172,6156,14350,14350,12302,28678,28679,32767,32767}}},
[CHAR_EPSILON] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,7,7,7,7,7,7,7,7,4095,4095,4095,7,7,7,7,7,7,7,7,7,16383,16383}}},
[CHAR_ZETA] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7168,7168,3584,1792,1792,896,896,448,448,224,224,112,112,56,56,28,28,14,7,7,8191,8191}}},
[CHAR_ETA] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,32767,32767,32767,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}},
[CHAR_THETA] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,32767,32767,32767,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_IOTA] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,8191,8191}}},
[CHAR_KAPPA] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={14343,7175,3591,3847,1799,903,455,487,231,119,63,63,127,239,231,455,967,903,1799,1799,3591,7175,7175,14343}}},
[CHAR_LAMBDA] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={448,448,960,992,992,864,1904,1904,1648,3632,3640,3640,3096,7192,7196,6172,6156,14350,14350,12302,28678,28679,28679,24579}}},
[CHAR_MU] = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=7, .padbottom=0, .b={.w=16, .h=24, .data={61455,61455,61455,63519,63519,64543,64575,60479,60983,61047,58999,59239,59367,58343,58311,58311,57799,57351,57351,57351,57351,57351,57351,57351}}},
[CHAR_NU] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28687,28687,28703,28703,28703,28735,28735,28791,28791,28903,28903,29127,29127,29575,29575,29447,30471,30471,32263,32263,31751,31751,30727,30727}}},
[CHAR_XI] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,0,0,0,0,0,0,0,0,4092,4092,4092,0,0,0,0,0,0,0,0,0,16383,16383}}},
[CHAR_OMIKRON] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_PI] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={32767,32767,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679}}},
[CHAR_RHO] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={2047,4095,7687,7175,6151,14343,14343,14343,6151,7175,7175,4095,2047,511,7,7,7,7,7,7,7,7,7,7}}},
[CHAR_SIGMA] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=7, .padbottom=0, .b={.w=13, .h=24, .data={8191,8191,7,6,14,12,28,56,56,112,112,224,224,112,112,56,56,28,12,14,6,7,8191,8191}}},
[CHAR_TAU] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=7, .padbottom=0, .b={.w=14, .h=24, .data={16383,16383,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224}}},
[CHAR_UPSULON] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,12295,14350,6158,7196,7196,3608,3640,1592,1904,880,992,992,448,448,448,448,448,448,448,448,448,448,448}}},
[CHAR_PHI] = {.w=21, .h=31, .padleft=2, .padright=2, .padtop=7, .padbottom=0, .b={.w=17, .h=24, .data={896,896,1984,16376,32764,62366,58254,50055,115591,115591,115591,115591,115591,115591,115591,115591,50055,58254,62366,32764,16376,1984,896,896}}},
[CHAR_HI] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={28679,14350,14350,7196,7196,3640,3640,1904,1904,992,992,448,448,992,992,1904,1904,3640,3640,7196,7196,14350,14350,28679}}},
[CHAR_PSI] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,12743,14798,15838,8188,2040,448,448,448,448,448,448,448}}},
[CHAR_OMEGA] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,12295,12294,14350,8062,3964,32639,32639}}},
[CHAR_alpha] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={25592,26620,30494,32270,15367,15367,14343,14343,14343,14343,14343,15367,15367,32270,30494,26620,25592}}},
[CHAR_beta] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={2040,4092,7710,7182,6151,14343,14343,14343,6151,7175,4071,2023,8167,15367,14343,12295,28679,28679,28679,12295,14343,15375,8191,4095,7,7,7,7,7,7,7}}},
[CHAR_gamma] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=13, .padbottom=0, .b={.w=15, .h=25, .data={6,28679,28686,28686,12316,12316,14392,14392,6256,7280,7264,3808,3808,1984,1984,960,960,448,448,448,448,448,448,448,448}}},
[CHAR_delta] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,7196,14,14,14,14,28,252,4088,8124,15374,14342,12295,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_epsilon] = {.w=21, .h=31, .padleft=2, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=17, .data={8184,16380,14366,28686,28686,14,1020,1016,1020,14,7,7,57351,24583,30734,16382,8184}}},
[CHAR_zeta] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={32767,32767,7680,3840,1920,960,224,112,56,60,28,14,14,6,7,7,7,7,7,7,14,30,2044,8184,16128,14336,28672,28672,14336,16256,8064}}},
[CHAR_eta] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={4087,8191,15391,14351,12295,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28672,28672,28672,28672,28672,28672,28672}}},
[CHAR_theta] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={2032,4088,7708,7180,14350,14342,12294,12295,28679,28679,32767,32767,32767,28679,28679,28679,12295,12294,14350,14350,7196,7708,4088,2032}}},
[CHAR_iota] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={511,511,448,448,448,448,448,448,448,448,448,448,448,448,896,32640,32512}}},
[CHAR_kappa] = {.w=22, .h=31, .padleft=3, .padright=5, .padtop=14, .padbottom=0, .b={.w=14, .h=17, .data={15367,7687,3847,1927,967,487,247,127,127,255,495,967,903,1799,3591,7687,15367}}},
[CHAR_lambda] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=24, .data={124,124,224,224,192,448,448,448,960,992,2016,1904,1648,3632,3640,3128,7192,7196,14364,14348,12302,28686,28679,24583}}},
[CHAR_mu] = {.w=21, .h=38, .padleft=2, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=24, .data={28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,28679,30735,31775,65535,59391,7,7,7,7,7,7,7}}},
[CHAR_nu] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=13, .padbottom=0, .b={.w=15, .h=18, .data={2,28679,28679,28686,12302,12316,14364,14392,6200,7216,7280,3696,3680,2016,2016,960,960,448}}},
[CHAR_xi] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={32767,32767,124,28,14,14,14,14,28,60,4088,8160,8184,60,14,14,7,7,7,7,14,30,2044,8184,16128,14336,28672,28672,14336,16256,8064}}},
[CHAR_omikron] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=17, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_pi] = {.w=20, .h=31, .padleft=1, .padright=3, .padtop=14, .padbottom=0, .b={.w=16, .h=17, .data={65535,65535,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,14392,63544,61496}}},
[CHAR_rho] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={4088,8188,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14351,15391,8191,4087,7,7,7,7,7,7,7}}},
[CHAR_sigma] = {.w=21, .h=31, .padleft=2, .padright=2, .padtop=14, .padbottom=0, .b={.w=17, .h=17, .data={131064,131068,15390,14350,12295,28679,28679,28679,28679,28679,28679,28679,12295,14350,15390,8188,4088}}},
[CHAR_tau] = {.w=22, .h=31, .padleft=3, .padright=6, .padtop=14, .padbottom=0, .b={.w=13, .h=17, .data={8191,8191,112,112,112,112,112,112,112,112,112,112,112,112,224,8160,8128}}},
[CHAR_upsulon] = {.w=21, .h=31, .padleft=2, .padright=4, .padtop=13, .padbottom=0, .b={.w=15, .h=18, .data={6144,7175,6151,14343,12295,12295,12295,28679,28679,28679,12295,12295,14343,14343,7182,7710,4092,2040}}},
[CHAR_phi] = {.w=20, .h=38, .padleft=1, .padright=2, .padtop=14, .padbottom=0, .b={.w=17, .h=24, .data={32268,32526,58126,50054,50054,115591,115591,115591,115591,115591,50055,50054,58254,62350,31676,16376,8176,896,896,896,896,896,896,896}}},
[CHAR_hi] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=14, .padbottom=0, .b={.w=15, .h=24, .data={28686,14366,14360,7224,7216,3696,3696,1888,2016,992,960,448,448,480,992,1008,880,1848,1848,1564,3612,3086,15374,14343}}},
[CHAR_psi] = {.w=21, .h=38, .padleft=2, .padright=4, .padtop=7, .padbottom=0, .b={.w=15, .h=31, .data={448,448,448,448,448,448,448,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,29127,12743,14798,15838,8188,4088,448,448,448,448,448,448,448}}},
[CHAR_omega] = {.w=21, .h=31, .padleft=2, .padright=2, .padtop=13, .padbottom=0, .b={.w=17, .h=18, .data={16388,24588,57358,57358,57350,49158,49159,115591,115591,115591,115591,115591,115591,50055,50118,59342,32510,32508}}},

};

#endif