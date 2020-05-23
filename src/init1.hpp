#pragma once

#include "h-basic.h"
#include "dungeon_flag_set.hpp"

int color_char_to_attr(char c);
extern byte conv_color[16];
errr init_player_info_txt(FILE *fp);
errr init_ab_info_txt(FILE *fp);
errr init_s_info_txt(FILE *fp);
errr init_set_info_txt(FILE *fp);
errr init_v_info_txt(FILE *fp);
errr init_f_info_txt(FILE *fp);
errr init_k_info_txt(FILE *fp);
errr init_a_info_txt(FILE *fp);
errr init_ra_info_txt(FILE *fp);
errr init_e_info_txt(FILE *fp);
errr init_r_info_txt(FILE *fp);
errr init_re_info_txt(FILE *fp);
errr init_d_info_txt(FILE *fp);
errr init_t_info_txt(FILE *fp);
errr init_ba_info_txt(FILE *fp);
errr init_st_info_txt(FILE *fp);
errr init_ow_info_txt(FILE *fp);
errr init_wf_info_txt(FILE *fp);
errr grab_one_dungeon_flag(dungeon_flag_set *flags, const char *str);
errr process_dungeon_file(cptr name, int *yval, int *xval, int ymax, int xmax, bool_ init, bool_ full);
