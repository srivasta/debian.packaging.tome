-- handle the meta school

RECHARGE = add_spell
{
	["name"] = 	"Recharge",
	["school"] = 	{SCHOOL_META},
	["level"] = 	5,
	["mana"] = 	10,
	["mana_max"] = 	100,
	["fail"] = 	20,
	["spell"] = 	function()
			return recharge(60 + get_level(RECHARGE, 140))
	end,
	["info"] = 	function()
			return "power "..(60 + get_level(RECHARGE, 140))
	end,
	["desc"] =	{
			"Taps on the ambient mana to recharge an object's power (charges or mana)",
	}
}

function get_spellbinder_max()
	local i

	i = get_level(SPELLBINDER, 4)
	if i > 4 then i = 4 end
	return i
end
--'
SPELLBINDER = add_spell
{
	["name"] = 	"Spellbinder",
	["school"] = 	{SCHOOL_META},
	["level"] = 	20,
	["mana"] = 	100,
	["mana_max"] = 	300,
	["fail"] = 	85,
	["spell"] = 	function()
			local i, ret, c

			if player.spellbinder_num ~= 0 then
				local t =
				{
					[SPELLBINDER_HP75] = "75% HP",
					[SPELLBINDER_HP50] = "50% HP",
					[SPELLBINDER_HP25] = "25% HP",
				}
				msg_print("The spellbinder is already active.")
				msg_print("It will trigger at "..t[player.spellbinder_trigger]..".")
				msg_print("With the spells: ")
				for i = 1, player.spellbinder_num do
					msg_print(spell(player.spellbinder[i]).name)
				end
				return TRUE
			end

			ret, c = get_com("Trigger at [a]75% hp [b]50% hp [c]25% hp?", strbyte("a"))
			if ret == FALSE then return TRUE end
			
			if c == strbyte("a") then
				player.spellbinder_trigger = SPELLBINDER_HP75
			elseif c == strbyte("b") then
				player.spellbinder_trigger = SPELLBINDER_HP50
			elseif c == strbyte("c") then
				player.spellbinder_trigger = SPELLBINDER_HP25
			else
				return
			end
			player.spellbinder_num = get_spellbinder_max()
			i = player.spellbinder_num
			while i > 0 do
				local s

				s = get_school_spell("bind", "is_ok_spell", 0)
				if s == -1 then
					player.spellbinder_trigger = 0
					player.spellbinder_num = 0
					return TRUE
				else
					if spell(s).skill_level > 7 + get_level(SPELLBINDER, 35) then
						msg_print("You are only allowed spells with a base level of "..(7 + get_level(SPELLBINDER, 35))..".");
						return TRUE
					end
				end
				player.spellbinder[i] = s
				i = i - 1
			end
			player.energy = player.energy - 3100;
			msg_print("Spellbinder ready.")
			return TRUE
	end,
	["info"] = 	function()
			return "number "..(get_spellbinder_max()).." max level "..(7 + get_level(SPELLBINDER, 35))
	end,
	["desc"] =	{
			"Stores spells in a trigger.",
			"When the condition is met all spells fire off at the same time",
			"This spell takes a long time to cast so you are advised to prepare it",
			"in a safe area.",
			"Also it will use the mana for the Spellbinder and the mana for the",
			"selected spells"
	}
}

DISPERSEMAGIC = add_spell
{
	["name"] = 	"Disperse Magic",
	["school"] = 	{SCHOOL_META},
	["level"] = 	15,
	["mana"] = 	30,
	["mana_max"] = 	60,
	["fail"] = 	40,
	-- Unnafected by blindness
	["blind"] =     FALSE,
	-- Unnafected by confusion
	["confusion"] = FALSE,
	["stick"] =
	{
			["charge"] =    { 5, 5 },
			[TV_WAND] =
			{
				["rarity"] = 		25,
				["base_level"] =	{ 1, 15 },
				["max_level"] =		{ 5, 40 },
			},
	},
	["spell"] = 	function()
			local obvious
			obvious = set_blind(0)
			obvious = is_obvious(set_lite(0), obvious)
			if get_level(DISPERSEMAGIC, 50) >= 5 then
				obvious = is_obvious(set_confused(0), obvious)
				obvious = is_obvious(set_image(0), obvious)
			end
			if get_level(DISPERSEMAGIC, 50) >= 10 then
				obvious = is_obvious(set_slow(0), obvious)
				obvious = is_obvious(set_fast(0, 0), obvious)
				obvious = is_obvious(set_light_speed(0), obvious)
			end
			if get_level(DISPERSEMAGIC, 50) >= 15 then
				obvious = is_obvious(set_stun(0), obvious)
				obvious = is_obvious(set_meditation(0), obvious)
				obvious = is_obvious(set_cut(0), obvious)
			end
			if get_level(DISPERSEMAGIC, 50) >= 20 then
				obvious = is_obvious(set_hero(0), obvious)
				obvious = is_obvious(set_shero(0), obvious)
				obvious = is_obvious(set_blessed(0), obvious)
				obvious = is_obvious(set_shield(0, 0, 0, 0, 0), obvious)
				obvious = is_obvious(set_afraid(0), obvious)
				obvious = is_obvious(set_parasite(0, 0), obvious)
				obvious = is_obvious(set_mimic(0, 0, 0), obvious)
			end
			return TRUE
	end,
	["info"] = 	function()
			return ""
	end,
	["desc"] =	{
			"Dispels a lot of magic that can affect you, be it good or bad",
			"Level 1: blindness and light",
			"Level 5: confusion and hallucination",
			"Level 10: speed (both bad or good) and light speed",
			"Level 15: stunning, meditation, cuts",
			"Level 20: hero, super hero, bless, shields, afraid, parasites, mimicry",
	}
}

TRACKER = add_spell
{
	["name"] = 	"Tracker",
	["school"] = 	{SCHOOL_META, SCHOOL_CONVEYANCE},
	["level"] = 	30,
	["mana"] = 	50,
	["mana_max"] = 	50,
	["fail"] = 	95,
	["spell"] = 	function()
			if last_teleportation_y == -1 then
				msg_print("There has not been any teleporatation here.")
				return TRUE
			end
			teleport_player_to(last_teleportation_y, last_teleportation_x)
			return TRUE
	end,
	["info"] = 	function()
			return ""
	end,
	["desc"] =	{
			"Tracks down the last teleportation that happened on the level and teleports",
			"you to it",
	}
}
