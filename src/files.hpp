#pragma once

#include "h-basic.h"
#include "monster_type_fwd.hpp"

extern void html_screenshot(cptr name);
extern void help_file_screenshot(cptr name);
extern void player_flags(u32b* f1, u32b* f2, u32b* f3, u32b* f4, u32b* f5, u32b* esp);
extern void wipe_saved(void);
extern s16b tokenize(char *buf, s16b num, char **tokens, char delim1, char delim2);
extern void display_player(int mode);
extern cptr describe_player_location(void);
extern errr file_character(cptr name, bool_ full);
extern errr process_pref_file_aux(char *buf);
extern errr process_pref_file(cptr name);
extern bool_ show_file(cptr name, cptr what, int line, int mode);
extern void do_cmd_help(void);
extern void process_player_base(void);
extern void get_name(void);
extern void do_cmd_suicide(void);
extern void autosave_checkpoint();
extern void close_game(void);
extern errr get_rnd_line(const char * file_name, char * output);
extern char *get_line(const char* fname, cptr fdir, char *linbuf, int line);
extern void race_legends(void);
extern void show_highclass(int building);
extern errr get_xtra_line(const char * file_name, monster_type *m_ptr, char * output);
