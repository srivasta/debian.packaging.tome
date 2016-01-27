#pragma once

#include "h-basic.h"
#include "object_type_fwd.hpp"

extern bool_ is_magestaff(void);
extern void do_cmd_browse_aux(object_type *o_ptr);
extern void do_cmd_browse(void);
extern void fetch(int dir, int wgt, bool_ require_los);
extern void do_poly_self(void);
extern cptr symbiote_name(bool_ capitalize);
extern int use_symbiotic_power(int r_idx, bool_ great, bool_ only_number, bool_ no_cost);
extern bool_ is_ok_spell(s32b spell_idx, s32b pval);
extern s32b get_school_spell(cptr do_what, s16b force_book);
extern void do_cmd_copy_spell(void);
extern void cast_school_spell(void);
