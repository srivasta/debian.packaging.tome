#pragma once

#include "h-basic.h"
#include "store_type_fwd.hpp"

extern bool_ bldg_process_command(store_type *s_ptr, int i);
extern void show_building(store_type *s_ptr);
extern bool_ is_state(store_type *s_ptr, int state);
extern void enter_quest(void);
