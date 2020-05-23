#pragma once

#include "h-basic.h"

void inc_piety(int god, s32b amt);
void abandon_god(int god);
int wisdom_scale(int max);
int find_god(cptr name);
void follow_god(int god, bool_ silent);
bool_ god_enabled(struct deity_type *deity);
deity_type *god_at(byte god_idx);
bool_ show_god_info();
bool praying_to(int god);
