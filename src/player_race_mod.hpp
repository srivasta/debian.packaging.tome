#pragma once

#include "body.hpp"
#include "h-basic.h"
#include "object_flag_set.hpp"
#include "object_proto.hpp"
#include "player_defs.hpp"
#include "player_level_flag.hpp"
#include "player_race_ability_type.hpp"
#include "player_race_flag_set.hpp"
#include "player_shared.hpp"
#include "skill_modifiers.hpp"
#include "skills_defs.hpp"

#include <array>
#include <string>
#include <vector>

struct player_race_mod
{
	std::string title;
	std::string description;

	bool_ place = FALSE;                                    /* TRUE = race race modifier, FALSE = Race modifier race */

	char luck = '\0';                                       /* Luck */
	s16b mana = 0;                                          /* Mana % */

	player_shared ps;

	char infra = '\0';                                      /* (+) Infra-vision range */

	u32b choice[2] { };                                     /* Legal race choices */

	u32b pclass[2] { };                                     /* Classes allowed */
	u32b mclass[2] { };                                     /* Classes restricted */

	char body_parts[BODY_MAX] { };                          /* To help to decide what to use when body changing */

	player_race_flag_set flags;

	std::array<player_level_flag, PY_MAX_LEVEL+1> lflags;

	byte g_attr = 0;                                        /* Overlay graphic attribute */
	char g_char = '\0';                                     /* Overlay graphic character */

	struct skill_modifiers skill_modifiers;

	std::vector<object_proto> object_protos;

	std::vector<player_race_ability_type> abilities;        /* Abilities to be gained by level; ignores prereqs */
};
