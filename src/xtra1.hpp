#pragma once

#include "h-basic.h"

extern void fix_message(void);
extern void apply_flags(u32b f1, u32b f2, u32b f3, u32b f4, u32b f5, u32b esp, s16b pval, s16b tval, s16b to_h, s16b to_d, s16b to_a);
extern int luck(int min, int max);
extern int weight_limit(void);
extern bool_ calc_powers_silent;
extern void cnv_stat(int i, char *out_val);
extern s16b modify_stat_value(int value, int amount);
extern void calc_hitpoints(void);
extern void notice_stuff(void);
extern void update_stuff(void);
extern void redraw_stuff(void);
extern void window_stuff(void);
extern void handle_stuff(void);
extern bool_ monk_heavy_armor(void);
extern void calc_bonuses(bool_ silent);
extern void gain_fate(byte fate);
extern void fate_desc(char *desc, int fate);
extern void dump_fates(FILE *OutFile);
extern bool race_flags1_p(u32b flags1_mask);
extern bool race_flags2_p(u32b flags2_mask);
