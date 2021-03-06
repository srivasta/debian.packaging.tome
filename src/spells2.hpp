#pragma once

#include "h-basic.hpp"
#include "monster_race_flag_set.hpp"
#include "object_filter.hpp"
#include "object_type_fwd.hpp"

void curse_artifact(object_type * o_ptr);
void grow_things(s16b type, int rad);
void grow_grass(int rad);
void grow_trees(int rad);
void hp_player(int num);
void heal_insanity(int val);
void warding_glyph();
void explosive_rune();
void do_dec_stat(int stat, int mode);
bool do_res_stat(int stat, bool full);
bool do_inc_stat(int stat);
void identify_hooks(object_type *o_ptr);
bool identify_pack();
void identify_pack_fully();
bool remove_curse();
bool remove_all_curse();
bool restore_level();
bool lose_all_info();
bool detect_doors(int rad);
bool detect_stairs(int rad);
bool detect_treasure(int rad);
bool detect_objects_gold(int rad);
bool detect_objects_normal(int rad);
bool detect_monsters_normal(int rad);
bool detect_monsters_invis(int rad);
void detect_monsters_orcs(int rad);
bool detect_all(int rad);
void stair_creation();
void wall_stone(int y, int x);
bool enchant(object_type *o_ptr, int n, int eflag);
bool enchant_spell(int num_hit, int num_dam, int num_ac, int num_pval);
bool ident_spell();
bool ident_all();
bool recharge(int num);
void aggravate_monsters(int who);
void genocide();
void mass_genocide();
void change_wild_mode();
bool banish_evil(int dist);
void dispel_evil(int dam);
void dispel_good(int dam);
void dispel_undead(int dam);
void dispel_monsters(int dam);
void destroy_area(int y1, int x1, int r);
void earthquake(int cy, int cx, int r);
void lite_room(int y1, int x1);
void unlite_room(int y1, int x1);
void lite_area(int dam, int rad);
void unlite_area(int dam, int rad);
void fire_cloud(int typ, int dir, int dam, int rad, int time);
void fire_wave(int typ, int dir, int dam, int rad, int time, s32b eff);
void fire_wall(int typ, int dir, int dam, int time);
bool fire_ball(int typ, int dir, int dam, int rad);
void fire_bolt(int typ, int dir, int dam);
void fire_beam(int typ, int dir, int dam);
void call_chaos();
void fire_bolt_or_beam(int prob, int typ, int dir, int dam);
void lite_line(int dir);
bool drain_life(int dir, int dam);
void wall_to_mud(int dir);
void wizard_lock(int dir);
void slow_monster(int dir);
void sleep_monster(int dir);
void confuse_monster(int dir, int plev);
void fear_monster(int dir, int plev);
void poly_monster(int dir);
void teleport_monster(int dir);
void destroy_doors_touch();
void sleep_monsters_touch();
void alchemy();
void activate_ty_curse();
void activate_dg_curse();
void summon_cyber();
void confuse_monsters(int dam);
void charm_monsters(int dam);
void charm_animals(int dam);
void stun_monsters(int dam);
void banish_monsters(int dist);
void turn_monsters(int dam);
void charm_monster(int dir, int plev);
void control_one_undead(int dir, int plev);
void charm_animal(int dir, int plev);
void mindblast_monsters(int dam);
void alter_reality();
void report_magics();
void teleport_swap(int dir);
void swap_position(int lty, int ltx);
object_filter_t const &item_tester_hook_recharge();
bool project_hack(int typ, int dam);
void project_meteor(int radius, int typ, int dam, u32b flg);
object_filter_t const &item_tester_hook_artifactable();
bool passwall(int dir, bool safe);
bool project_hook(int typ, int dir, int dam, int flg);
bool reset_recall(bool no_trepas_max_depth);
void geomancy_random_wall(int y, int x);
void geomancy_random_floor(int y, int x, bool kill_wall);
void geomancy_dig(int oy, int ox, int dir, int length);
void channel_the_elements(int y, int x, int level);
void random_resistance(object_type *o_ptr, int specific);
