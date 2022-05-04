#ifndef _MOVES_H_INCLUDED
#define _MOVES_H_INCLUDED
#include <map>
#include <string>

std::map<uint16_t, std::string>* move_names = new std::map<uint16_t, std::string>({
	{0,		"-"						     	},
	{1,		"Pound"							},
	{2,		"Karate Chop*"					},
	{3,		"Double Slap"					},
	{4,		"Comet Punch"					},
	{5,		"Mega Punch"					},
	{6,		"Pay Day"						},
	{7,		"Fire Punch"					},
	{8,		"Ice Punch"						},
	{9,		"Thunder Punch"					},
	{10,	"Scratch"						},
	{11,	"Vise Grip"						},
	{12,	"Guillotine"					},
	{13,	"Razor Wind"					},
	{14,	"Swords Dance"					},
	{15,	"Cut"							},
	{16,	"Gust*"							},
	{17,	"Wing Attack"					},
	{18,	"Whirlwind"						},
	{19,	"Fly"							},
	{20,	"Bind"							},
	{21,	"Slam"							},
	{22,	"Vine Whip"						},
	{23,	"Stomp"							},
	{24,	"Double Kick"					},
	{25,	"Mega Kick"						},
	{26,	"Jump Kick"						},
	{27,	"Rolling Kick"					},
	{28,	"Sand Attack*"					},
	{29,	"Headbutt"						},
	{30,	"Horn Attack"					},
	{31,	"Fury Attack"					},
	{32,	"Horn Drill"					},
	{33,	"Tackle"						},
	{34,	"Body Slam"						},
	{35,	"Wrap"							},
	{36,	"Take Down"						},
	{37,	"Thrash"						},
	{38,	"Double-Edge"					},
	{39,	"Tail Whip"						},
	{40,	"Poison Sting"					},
	{41,	"Twineedle"						},
	{42,	"Pin Missile"					},
	{43,	"Leer"							},
	{44,	"Bite*"							},
	{45,	"Growl"							},
	{46,	"Roar"							},
	{47,	"Sing"							},
	{48,	"Supersonic"					},
	{49,	"Sonic Boom"					},
	{50,	"Disable"						},
	{51,	"Acid"							},
	{52,	"Ember"							},
	{53,	"Flamethrower"					},
	{54,	"Mist"							},
	{55,	"Water Gun"						},
	{56,	"Hydro Pump"					},
	{57,	"Surf"							},
	{58,	"Ice Beam"						},
	{59,	"Blizzard"						},
	{60,	"Psybeam"						},
	{61,	"Bubble Beam"					},
	{62,	"Aurora Beam"					},
	{63,	"Hyper Beam"					},
	{64,	"Peck"							},
	{65,	"Drill Peck"					},
	{66,	"Submission"					},
	{67,	"Low Kick"						},
	{68,	"Counter"						},
	{69,	"Seismic Toss"					},
	{70,	"Strength"						},
	{71,	"Absorb"						},
	{72,	"Mega Drain"					},
	{73,	"Leech Seed"					},
	{74,	"Growth"						},
	{75,	"Razor Leaf"					},
	{76,	"Solar Beam"					},
	{77,	"Poison Powder"					},
	{78,	"Stun Spore"					},
	{79,	"Sleep Powder"					},
	{80,	"Petal Dance"					},
	{81,	"String Shot"					},
	{82,	"Dragon Rage"					},
	{83,	"Fire Spin"						},
	{84,	"Thunder Shock"					},
	{85,	"Thunderbolt"					},
	{86,	"Thunder Wave"					},
	{87,	"Thunder"						},
	{88,	"Rock Throw"					},
	{89,	"Earthquake"					},
	{90,	"Fissure"						},
	{91,	"Dig"							},
	{92,	"Toxic"							},
	{93,	"Confusion"						},
	{94,	"Psychic"						},
	{95,	"Hypnosis"						},
	{96,	"Meditate"						},
	{97,	"Agility"						},
	{98,	"Quick Attack"					},
	{99,	"Rage"							},
	{100,	"Teleport"						},
	{101,	"Night Shade"					},
	{102,	"Mimic"							},
	{103,	"Screech"						},
	{104,	"Double Team"					},
	{105,	"Recover"						},
	{106,	"Harden"						},
	{107,	"Minimize"						},
	{108,	"Smokescreen"					},
	{109,	"Confuse Ray"					},
	{110,	"Withdraw"						},
	{111,	"Defense Curl"					},
	{112,	"Barrier"						},
	{113,	"Light Screen"					},
	{114,	"Haze"							},
	{115,	"Reflect"						},
	{116,	"Focus Energy"					},
	{117,	"Bide"							},
	{118,	"Metronome"						},
	{119,	"Mirror Move"					},
	{120,	"Self-Destruct"					},
	{121,	"Egg Bomb"						},
	{122,	"Lick"							},
	{123,	"Smog"							},
	{124,	"Sludge"						},
	{125,	"Bone Club"						},
	{126,	"Fire Blast"					},
	{127,	"Waterfall"						},
	{128,	"Clamp"							},
	{129,	"Swift"							},
	{130,	"Skull Bash"					},
	{131,	"Spike Cannon"					},
	{132,	"Constrict"						},
	{133,	"Amnesia"						},
	{134,	"Kinesis"						},
	{135,	"Soft-Boiled"					},
	{136,	"High Jump Kick"				},
	{137,	"Glare"							},
	{138,	"Dream Eater"					},
	{139,	"Poison Gas"					},
	{140,	"Barrage"						},
	{141,	"Leech Life"					},
	{142,	"Lovely Kiss"					},
	{143,	"Sky Attack"					},
	{144,	"Transform"						},
	{145,	"Bubble"						},
	{146,	"Dizzy Punch"					},
	{147,	"Spore"							},
	{148,	"Flash"							},
	{149,	"Psywave"						},
	{150,	"Splash"						},
	{151,	"Acid Armor"					},
	{152,	"Crabhammer"					},
	{153,	"Explosion"						},
	{154,	"Fury Swipes"					},
	{155,	"Bonemerang"					},
	{156,	"Rest"							},
	{157,	"Rock Slide"					},
	{158,	"Hyper Fang"					},
	{159,	"Sharpen"						},
	{160,	"Conversion"					},
	{161,	"Tri Attack"					},
	{162,	"Super Fang"					},
	{163,	"Slash"							},
	{164,	"Substitute"					},
	{165,	"Struggle"						},
	{166,	"Sketch"						},
	{167,	"Triple Kick"					},
	{168,	"Thief"							},
	{169,	"Spider Web"					},
	{170,	"Mind Reader"					},
	{171,	"Nightmare"						},
	{172,	"Flame Wheel"					},
	{173,	"Snore"							},
	{174,	"Curse*"						},
	{175,	"Flail"							},
	{176,	"Conversion 2"					},
	{177,	"Aeroblast"						},
	{178,	"Cotton Spore"					},
	{179,	"Reversal"						},
	{180,	"Spite"							},
	{181,	"Powder Snow"					},
	{182,	"Protect"						},
	{183,	"Mach Punch"					},
	{184,	"Scary Face"					},
	{185,	"Feint Attack"					},
	{186,	"Sweet Kiss*"					},
	{187,	"Belly Drum"					},
	{188,	"Sludge Bomb"					},
	{189,	"Mud-Slap"						},
	{190,	"Octazooka"						},
	{191,	"Spikes"						},
	{192,	"Zap Cannon"					},
	{193,	"Foresight"						},
	{194,	"Destiny Bond"					},
	{195,	"Perish Song"					},
	{196,	"Icy Wind"						},
	{197,	"Detect"						},
	{198,	"Bone Rush"						},
	{199,	"Lock-On"						},
	{200,	"Outrage"						},
	{201,	"Sandstorm"						},
	{202,	"Giga Drain"					},
	{203,	"Endure"						},
	{204,	"Charm*"						},
	{205,	"Rollout"						},
	{206,	"False Swipe"					},
	{207,	"Swagger"						},
	{208,	"Milk Drink"					},
	{209,	"Spark"							},
	{210,	"Fury Cutter"					},
	{211,	"Steel Wing"					},
	{212,	"Mean Look"						},
	{213,	"Attract"						},
	{214,	"Sleep Talk"					},
	{215,	"Heal Bell"						},
	{216,	"Return"						},
	{217,	"Present"						},
	{218,	"Frustration"					},
	{219,	"Safeguard"						},
	{220,	"Pain Split"					},
	{221,	"Sacred Fire"					},
	{222,	"Magnitude"						},
	{223,	"Dynamic Punch"					},
	{224,	"Megahorn"						},
	{225,	"Dragon Breath"					},
	{226,	"Baton Pass"					},
	{227,	"Encore"						},
	{228,	"Pursuit"						},
	{229,	"Rapid Spin"					},
	{230,	"Sweet Scent"					},
	{231,	"Iron Tail"						},
	{232,	"Metal Claw"					},
	{233,	"Vital Throw"					},
	{234,	"Morning Sun"					},
	{235,	"Synthesis"						},
	{236,	"Moonlight*"					},
	{237,	"Hidden Power"					},
	{238,	"Cross Chop"					},
	{239,	"Twister"						},
	{240,	"Rain Dance"					},
	{241,	"Sunny Day"						},
	{242,	"Crunch"						},
	{243,	"Mirror Coat"					},
	{244,	"Psych Up"						},
	{245,	"Extreme Speed"					},
	{246,	"Ancient Power"					},
	{247,	"Shadow Ball"					},
	{248,	"Future Sight"					},
	{249,	"Rock Smash"					},
	{250,	"Whirlpool"						},
	{251,	"Beat Up"						},
	{252,	"Fake Out"						},
	{253,	"Uproar"						},
	{254,	"Stockpile"						},
	{255,	"Spit Up"						},
	{256,	"Swallow"						},
	{257,	"Heat Wave"						},
	{258,	"Hail"							},
	{259,	"Torment"						},
	{260,	"Flatter"						},
	{261,	"Will-O-Wisp"					},
	{262,	"Memento"						},
	{263,	"Facade"						},
	{264,	"Focus Punch"					},
	{265,	"Smelling Salts"				},
	{266,	"Follow Me"						},
	{267,	"Nature Power"					},
	{268,	"Charge"						},
	{269,	"Taunt"							},
	{270,	"Helping Hand"					},
	{271,	"Trick"							},
	{272,	"Role Play"						},
	{273,	"Wish"							},
	{274,	"Assist"						},
	{275,	"Ingrain"						},
	{276,	"Superpower"					},
	{277,	"Magic Coat"					},
	{278,	"Recycle"						},
	{279,	"Revenge"						},
	{280,	"Brick Break"					},
	{281,	"Yawn"							},
	{282,	"Knock Off"						},
	{283,	"Endeavor"						},
	{284,	"Eruption"						},
	{285,	"Skill Swap"					},
	{286,	"Imprison"						},
	{287,	"Refresh"						},
	{288,	"Grudge"						},
	{289,	"Snatch"						},
	{290,	"Secret Power"					},
	{291,	"Dive"							},
	{292,	"Arm Thrust"					},
	{293,	"Camouflage"					},
	{294,	"Tail Glow"						},
	{295,	"Luster Purge"					},
	{296,	"Mist Ball"						},
	{297,	"Feather Dance"					},
	{298,	"Teeter Dance"					},
	{299,	"Blaze Kick"					},
	{300,	"Mud Sport"						},
	{301,	"Ice Ball"						},
	{302,	"Needle Arm"					},
	{303,	"Slack Off"						},
	{304,	"Hyper Voice"					},
	{305,	"Poison Fang"					},
	{306,	"Crush Claw"					},
	{307,	"Blast Burn"					},
	{308,	"Hydro Cannon"					},
	{309,	"Meteor Mash"					},
	{310,	"Astonish"						},
	{311,	"Weather Ball"					},
	{312,	"Aromatherapy"					},
	{313,	"Fake Tears"					},
	{314,	"Air Cutter"					},
	{315,	"Overheat"						},
	{316,	"Odor Sleuth"					},
	{317,	"Rock Tomb"						},
	{318,	"Silver Wind"					},
	{319,	"Metal Sound"					},
	{320,	"Grass Whistle"					},
	{321,	"Tickle"						},
	{322,	"Cosmic Power"					},
	{323,	"Water Spout"					},
	{324,	"Signal Beam"					},
	{325,	"Shadow Punch"					},
	{326,	"Extrasensory"					},
	{327,	"Sky Uppercut"					},
	{328,	"Sand Tomb"						},
	{329,	"Sheer Cold"					},
	{330,	"Muddy Water"					},
	{331,	"Bullet Seed"					},
	{332,	"Aerial Ace"					},
	{333,	"Icicle Spear"					},
	{334,	"Iron Defense"					},
	{335,	"Block"							},
	{336,	"Howl"							},
	{337,	"Dragon Claw"					},
	{338,	"Frenzy Plant"					},
	{339,	"Bulk Up"						},
	{340,	"Bounce"						},
	{341,	"Mud Shot"						},
	{342,	"Poison Tail"					},
	{343,	"Covet"							},
	{344,	"Volt Tackle"					},
	{345,	"Magical Leaf"					},
	{346,	"Water Sport"					},
	{347,	"Calm Mind"						},
	{348,	"Leaf Blade"					},
	{349,	"Dragon Dance"					},
	{350,	"Rock Blast"					},
	{351,	"Shock Wave"					},
	{352,	"Water Pulse"					},
	{353,	"Doom Desire"					},
	{354,	"Psycho Boost"					},
	{355,	"Roost"							},
	{356,	"Gravity"						},
	{357,	"Miracle Eye"					},
	{358,	"Wake-Up Slap"					},
	{359,	"Hammer Arm"					},
	{360,	"Gyro Ball"						},
	{361,	"Healing Wish"					},
	{362,	"Brine"							},
	{363,	"Natural Gift"					},
	{364,	"Feint"							},
	{365,	"Pluck"							},
	{366,	"Tailwind"						},
	{367,	"Acupressure"					},
	{368,	"Metal Burst"					},
	{369,	"U-turn"						},
	{370,	"Close Combat"					},
	{371,	"Payback"						},
	{372,	"Assurance"						},
	{373,	"Embargo"						},
	{374,	"Fling"							},
	{375,	"Psycho Shift"					},
	{376,	"Trump Card"					},
	{377,	"Heal Block"					},
	{378,	"Wring Out"						},
	{379,	"Power Trick"					},
	{380,	"Gastro Acid"					},
	{381,	"Lucky Chant"					},
	{382,	"Me First"						},
	{383,	"Copycat"						},
	{384,	"Power Swap"					},
	{385,	"Guard Swap"					},
	{386,	"Punishment"					},
	{387,	"Last Resort"					},
	{388,	"Worry Seed"					},
	{389,	"Sucker Punch"					},
	{390,	"Toxic Spikes"					},
	{391,	"Heart Swap"					},
	{392,	"Aqua Ring"						},
	{393,	"Magnet Rise"					},
	{394,	"Flare Blitz"					},
	{395,	"Force Palm"					},
	{396,	"Aura Sphere"					},
	{397,	"Rock Polish"					},
	{398,	"Poison Jab"					},
	{399,	"Dark Pulse"					},
	{400,	"Night Slash"					},
	{401,	"Aqua Tail"						},
	{402,	"Seed Bomb"						},
	{403,	"Air Slash"						},
	{404,	"X-Scissor"						},
	{405,	"Bug Buzz"						},
	{406,	"Dragon Pulse"					},
	{407,	"Dragon Rush"					},
	{408,	"Power Gem"						},
	{409,	"Drain Punch"					},
	{410,	"Vacuum Wave"					},
	{411,	"Focus Blast"					},
	{412,	"Energy Ball"					},
	{413,	"Brave Bird"					},
	{414,	"Earth Power"					},
	{415,	"Switcheroo"					},
	{416,	"Giga Impact"					},
	{417,	"Nasty Plot"					},
	{418,	"Bullet Punch"					},
	{419,	"Avalanche"						},
	{420,	"Ice Shard"						},
	{421,	"Shadow Claw"					},
	{422,	"Thunder Fang"					},
	{423,	"Ice Fang"						},
	{424,	"Fire Fang"						},
	{425,	"Shadow Sneak"					},
	{426,	"Mud Bomb"						},
	{427,	"Psycho Cut"					},
	{428,	"Zen Headbutt"					},
	{429,	"Mirror Shot"					},
	{430,	"Flash Cannon"					},
	{431,	"Rock Climb"					},
	{432,	"Defog"							},
	{433,	"Trick Room"					},
	{434,	"Draco Meteor"					},
	{435,	"Discharge"						},
	{436,	"Lava Plume"					},
	{437,	"Leaf Storm"					},
	{438,	"Power Whip"					},
	{439,	"Rock Wrecker"					},
	{440,	"Cross Poison"					},
	{441,	"Gunk Shot"						},
	{442,	"Iron Head"						},
	{443,	"Magnet Bomb"					},
	{444,	"Stone Edge"					},
	{445,	"Captivate"						},
	{446,	"Stealth Rock"					},
	{447,	"Grass Knot"					},
	{448,	"Chatter"						},
	{449,	"Judgment"						},
	{450,	"Bug Bite"						},
	{451,	"Charge Beam"					},
	{452,	"Wood Hammer"					},
	{453,	"Aqua Jet"						},
	{454,	"Attack Order"					},
	{455,	"Defend Order"					},
	{456,	"Heal Order"					},
	{457,	"Head Smash"					},
	{458,	"Double Hit"					},
	{459,	"Roar of Time"					},
	{460,	"Spacial Rend"					},
	{461,	"Lunar Dance"					},
	{462,	"Crush Grip"					},
	{463,	"Magma Storm"					},
	{464,	"Dark Void"						},
	{465,	"Seed Flare"					},
	{466,	"Ominous Wind"					},
	{467,	"Shadow Force"					},
	{468,	"Hone Claws"					},
	{469,	"Wide Guard"					},
	{470,	"Guard Split"					},
	{471,	"Power Split"					},
	{472,	"Wonder Room"					},
	{473,	"Psyshock"						},
	{474,	"Venoshock"						},
	{475,	"Autotomize"					},
	{476,	"Rage Powder"					},
	{477,	"Telekinesis"					},
	{478,	"Magic Room"					},
	{479,	"Smack Down"					},
	{480,	"Storm Throw"					},
	{481,	"Flame Burst"					},
	{482,	"Sludge Wave"					},
	{483,	"Quiver Dance"					},
	{484,	"Heavy Slam"					},
	{485,	"Synchronoise"					},
	{486,	"Electro Ball"					},
	{487,	"Soak"							},
	{488,	"Flame Charge"					},
	{489,	"Coil"							},
	{490,	"Low Sweep"						},
	{491,	"Acid Spray"					},
	{492,	"Foul Play"						},
	{493,	"Simple Beam"					},
	{494,	"Entrainment"					},
	{495,	"After You"						},
	{496,	"Round"							},
	{497,	"Echoed Voice"					},
	{498,	"Chip Away"						},
	{499,	"Clear Smog"					},
	{500,	"Stored Power"					},
	{501,	"Quick Guard"					},
	{502,	"Ally Switch"					},
	{503,	"Scald"							},
	{504,	"Shell Smash"					},
	{505,	"Heal Pulse"					},
	{506,	"Hex"							},
	{507,	"Sky Drop"						},
	{508,	"Shift Gear"					},
	{509,	"Circle Throw"					},
	{510,	"Incinerate"					},
	{511,	"Quash"							},
	{512,	"Acrobatics"					},
	{513,	"Reflect Type"					},
	{514,	"Retaliate"						},
	{515,	"Final Gambit"					},
	{516,	"Bestow"						},
	{517,	"Inferno"						},
	{518,	"Water Pledge"					},
	{519,	"Fire Pledge"					},
	{520,	"Grass Pledge"					},
	{521,	"Volt Switch"					},
	{522,	"Struggle Bug"					},
	{523,	"Bulldoze"						},
	{524,	"Frost Breath"					},
	{525,	"Dragon Tail"					},
	{526,	"Work Up"						},
	{527,	"Electroweb"					},
	{528,	"Wild Charge"					},
	{529,	"Drill Run"						},
	{530,	"Dual Chop"						},
	{531,	"Heart Stamp"					},
	{532,	"Horn Leech"					},
	{533,	"Sacred Sword"					},
	{534,	"Razor Shell"					},
	{535,	"Heat Crash"					},
	{536,	"Leaf Tornado"					},
	{537,	"Steamroller"					},
	{538,	"Cotton Guard"					},
	{539,	"Night Daze"					},
	{540,	"Psystrike"						},
	{541,	"Tail Slap"						},
	{542,	"Hurricane"						},
	{543,	"Head Charge"					},
	{544,	"Gear Grind"					},
	{545,	"Searing Shot"					},
	{546,	"Techno Blast"					},
	{547,	"Relic Song"					},
	{548,	"Secret Sword"					},
	{549,	"Glaciate"						},
	{550,	"Bolt Strike"					},
	{551,	"Blue Flare"					},
	{552,	"Fiery Dance"					},
	{553,	"Freeze Shock"					},
	{554,	"Ice Burn"						},
	{555,	"Snarl"							},
	{556,	"Icicle Crash"					},
	{557,	"V-create"						},
	{558,	"Fusion Flare"					},
	{559,	"Fusion Bolt"					},
	{560,	"Flying Press"					},
	{561,	"Mat Block"						},
	{562,	"Belch"							},
	{563,	"Rototiller"					},
	{564,	"Sticky Web"					},
	{565,	"Fell Stinger"					},
	{566,	"Phantom Force"					},
	{567,	"Trick-or-Treat"				},
	{568,	"Noble Roar"					},
	{569,	"Ion Deluge"					},
	{570,	"Parabolic Charge"				},
	{571,	"Forest's Curse"				},
	{572,	"Petal Blizzard"				},
	{573,	"Freeze-Dry"					},
	{574,	"Disarming Voice"				},
	{575,	"Parting Shot"					},
	{576,	"Topsy-Turvy"					},
	{577,	"Draining Kiss"					},
	{578,	"Crafty Shield"					},
	{579,	"Flower Shield"					},
	{580,	"Grassy Terrain"				},
	{581,	"Misty Terrain"					},
	{582,	"Electrify"						},
	{583,	"Play Rough"					},
	{584,	"Fairy Wind"					},
	{585,	"Moonblast"						},
	{586,	"Boomburst"						},
	{587,	"Fairy Lock"					},
	{588,	"King's Shield"					},
	{589,	"Play Nice"						},
	{590,	"Confide"						},
	{591,	"Diamond Storm"					},
	{592,	"Steam Eruption"				},
	{593,	"Hyperspace Hole"				},
	{594,	"Water Shuriken*"				},
	{595,	"Mystical Fire"					},
	{596,	"Spiky Shield"					},
	{597,	"Aromatic Mist"					},
	{598,	"Eerie Impulse"					},
	{599,	"Venom Drench"					},
	{600,	"Powder"						},
	{601,	"Geomancy"						},
	{602,	"Magnetic Flux"					},
	{603,	"Happy Hour"					},
	{604,	"Electric Terrain"				},
	{605,	"Dazzling Gleam"				},
	{606,	"Celebrate"						},
	{607,	"Hold Hands"					},
	{608,	"Baby-Doll Eyes"				},
	{609,	"Nuzzle"						},
	{610,	"Hold Back"						},
	{611,	"Infestation"					},
	{612,	"Power-Up Punch"				},
	{613,	"Oblivion Wing"					},
	{614,	"Thousand Arrows"				},
	{615,	"Thousand Waves"				},
	{616,	"Land's Wrath"					},
	{617,	"Light of Ruin"					},
	{618,	"Origin Pulse"					},
	{619,	"Precipice Blades"				},
	{620,	"Dragon Ascent"					},
	{621,	"Hyperspace Fury"				},
	{622,	"Breakneck Blitz"				},
	{623,	"Breakneck Blitz"				},
	{624,	"All-Out Pummeling"				},
	{625,	"All-Out Pummeling"				},
	{626,	"Supersonic Skystrike"			},
	{627,	"Supersonic Skystrike"			},
	{628,	"Acid Downpour"					},
	{629,	"Acid Downpour"					},
	{630,	"Tectonic Rage"					},
	{631,	"Tectonic Rage"					},
	{632,	"Continental Crush"				},
	{633,	"Continental Crush"				},
	{634,	"Savage Spin-Out"				},
	{635,	"Savage Spin-Out"				},
	{636,	"Never-Ending Nightmare"		},
	{637,	"Never-Ending Nightmare"		},
	{638,	"Corkscrew Crash"				},
	{639,	"Corkscrew Crash"				},
	{640,	"Inferno Overdrive"				},
	{641,	"Inferno Overdrive"				},
	{642,	"Hydro Vortex"					},
	{643,	"Hydro Vortex"					},
	{644,	"Bloom Doom"					},
	{645,	"Bloom Doom"					},
	{646,	"Gigavolt Havoc"				},
	{647,	"Gigavolt Havoc"				},
	{648,	"Shattered Psyche"				},
	{649,	"Shattered Psyche"				},
	{650,	"Subzero Slammer"				},
	{651,	"Subzero Slammer"				},
	{652,	"Devastating Drake"				},
	{653,	"Devastating Drake"				},
	{654,	"Black Hole Eclipse"			},
	{655,	"Black Hole Eclipse"			},
	{656,	"Twinkle Tackle"				},
	{657,	"Twinkle Tackle"				},
	{658,	"Catastropika"					},
	{659,	"Shore Up"						},
	{660,	"First Impression"				},
	{661,	"Baneful Bunker"				},
	{662,	"Spirit Shackle"				},
	{663,	"Darkest Lariat"				},
	{664,	"Sparkling Aria"				},
	{665,	"Ice Hammer"					},
	{666,	"Floral Healing"				},
	{667,	"High Horsepower"				},
	{668,	"Strength Sap"					},
	{669,	"Solar Blade"					},
	{670,	"Leafage"						},
	{671,	"Spotlight"						},
	{672,	"Toxic Thread"					},
	{673,	"Laser Focus"					},
	{674,	"Gear Up"						},
	{675,	"Throat Chop"					},
	{676,	"Pollen Puff"					},
	{677,	"Anchor Shot"					},
	{678,	"Psychic Terrain"				},
	{679,	"Lunge"							},
	{680,	"Fire Lash"						},
	{681,	"Power Trip"					},
	{682,	"Burn Up"						},
	{683,	"Speed Swap"					},
	{684,	"Smart Strike"					},
	{685,	"Purify"						},
	{686,	"Revelation Dance"				},
	{687,	"Core Enforcer"					},
	{688,	"Trop Kick"						},
	{689,	"Instruct"						},
	{690,	"Beak Blast"					},
	{691,	"Clanging Scales"				},
	{692,	"Dragon Hammer"					},
	{693,	"Brutal Swing"					},
	{694,	"Aurora Veil"					},
	{695,	"Sinister Arrow Raid"			},
	{696,	"Malicious Moonsault"			},
	{697,	"Oceanic Operetta"				},
	{698,	"Guardian of Alola"				},
	{699,	"Soul-Stealing 7-Star Strike"	},
	{700,	"Stoked Sparksurfer"			},
	{701,	"Pulverizing Pancake"			},
	{702,	"Extreme Evoboost"				},
	{703,	"Genesis Supernova"				},
	{704,	"Shell Trap"					},
	{705,	"Fleur Cannon"					},
	{706,	"Psychic Fangs"					},
	{707,	"Stomping Tantrum"				},
	{708,	"Shadow Bone"					},
	{709,	"Accelerock"					},
	{710,	"Liquidation"					},
	{711,	"Prismatic Laser"				},
	{712,	"Spectral Thief"				},
	{713,	"Sunsteel Strike"				},
	{714,	"Moongeist Beam"				},
	{715,	"Tearful Look"					},
	{716,	"Zing Zap"						},
	{717,	"Nature's Madness"				},
	{718,	"Multi-Attack"					},
	{719,	"10,000,000 Volt Thunderbolt"	},
	{720,	"Mind Blown"					},
	{721,	"Plasma Fists"					},
	{722,	"Photon Geyser"					},
	{723,	"Light That Burns the Sky"		},
	{724,	"Searing Sunraze Smash"			},
	{725,	"Menacing Moonraze Maelstrom"	},
	{726,	"Let's Snuggle Forever"			},
	{727,	"Splintered Stormshards"		},
	{728,	"Clangorous Soulblaze"			},
	{729,	"Zippy Zap"						},
	{730,	"Splishy Splash"				},
	{731,	"Floaty Fall"					},
	{732,	"Pika Papow"					},
	{733,	"Bouncy Bubble"					},
	{734,	"Buzzy Buzz"					},
	{735,	"Sizzly Slide"					},
	{736,	"Glitzy Glow"					},
	{737,	"Baddy Bad"						},
	{738,	"Sappy Seed"					},
	{739,	"Freezy Frost"					},
	{740,	"Sparkly Swirl"					},
	{741,	"Veevee Volley"					},
	{742,	"Double Iron Bash"				},
	{743,	"Max Guard"						},
	{744,	"Dynamax Cannon"				},
	{745,	"Snipe Shot"					},
	{746,	"Jaw Lock"						},
	{747,	"Stuff Cheeks"					},
	{748,	"No Retreat"					},
	{749,	"Tar Shot"						},
	{750,	"Magic Powder"					},
	{751,	"Dragon Darts"					},
	{752,	"Teatime"						},
	{753,	"Octolock"						},
	{754,	"Bolt Beak"						},
	{755,	"Fishious Rend"					},
	{756,	"Court Change"					},
	{757,	"Max Flare"						},
	{758,	"Max Flutterby"					},
	{759,	"Max Lightning"					},
	{760,	"Max Strike"					},
	{761,	"Max Knuckle"					},
	{762,	"Max Phantasm"					},
	{763,	"Max Hailstorm"					},
	{764,	"Max Ooze"						},
	{765,	"Max Geyser"					},
	{766,	"Max Airstream"					},
	{767,	"Max Starfall"					},
	{768,	"Max Wyrmwind"					},
	{769,	"Max Mindstorm"					},
	{770,	"Max Rockfall"					},
	{771,	"Max Quake"						},
	{772,	"Max Darkness"					},
	{773,	"Max Overgrowth"				},
	{774,	"Max Steelspike"				},
	{775,	"Clangorous Soul"				},
	{776,	"Body Press"					},
	{777,	"Decorate"						},
	{778,	"Drum Beating"					},
	{779,	"Snap Trap"						},
	{780,	"Pyro Ball"						},
	{781,	"Behemoth Blade"				},
	{782,	"Behemoth Bash"					},
	{783,	"Aura Wheel"					},
	{784,	"Breaking Swipe"				},
	{785,	"Branch Poke"					},
	{786,	"Overdrive"						},
	{787,	"Apple Acid"					},
	{788,	"Grav Apple"					},
	{789,	"Spirit Break"					},
	{790,	"Strange Steam"					},
	{791,	"Life Dew"						},
	{792,	"Obstruct"						},
	{793,	"False Surrender"				},
	{794,	"Meteor Assault"				},
	{795,	"Eternabeam"					},
	{796,	"Steel Beam"					},
	{797,	"Expanding Force"				},
	{798,	"Steel Roller"					},
	{799,	"Scale Shot"					},
	{800,	"Meteor Beam"					},
	{801,	"Shell Side Arm"				},
	{802,	"Misty Explosion"				},
	{803,	"Grassy Glide"					},
	{804,	"Rising Voltage"				},
	{805,	"Terrain Pulse"					},
	{806,	"Skitter Smack"					},
	{807,	"Burning Jealousy"				},
	{808,	"Lash Out"						},
	{809,	"Poltergeist"					},
	{810,	"Corrosive Gas"					},
	{811,	"Coaching"						},
	{812,	"Flip Turn"						},
	{813,	"Triple Axel"					},
	{814,	"Dual Wingbeat"					},
	{815,	"Scorching Sands"				},
	{816,	"Jungle Healing"				},
	{817,	"Wicked Blow"					},
	{818,	"Surging Strikes"				},
	{819,	"Thunder Cage"					},
	{820,	"Dragon Energy"					},
	{821,	"Freezing Glare"				},
	{822,	"Fiery Wrath"					},
	{823,	"Thunderous Kick"				},
	{824,	"Glacial Lance"					},
	{825,	"Astral Barrage"				},
	{826,	"Eerie Spell"					},
	{827,	"Dire Claw"						},
	{828,	"Psyshield Bash"				},
	{829,	"Power Shift"					},
	{830,	"Stone Axe"						},
	{831,	"Springtide Storm"				},
	{832,	"Mystical Power"				},
	{833,	"Raging Fury"					},
	{834,	"Wave Crash"					},
	{835,	"Chloroblast"					},
	{836,	"Mountain Gale"					},
	{837,	"Victory Dance"					},
	{838,	"Headlong Rush"					},
	{839,	"Barb Barrage"					},
	{840,	"Esper Wing"					},
	{841,	"Bitter Malice"					},
	{842,	"Shelter"						},
	{843,	"Triple Arrows"					},
	{844,	"Infernal Parade"				},
	{845,	"Ceaseless Edge"				},
	{846,	"Bleakwind Storm"				},
	{847,	"Wildbolt Storm"				},
	{848,	"Sandsear Storm"				},
	{849,	"Lunar Blessing"				},
	{850,	"Take Heart"					},
});

std::map<uint16_t, uint8_t>* move_base_pp = new std::map<uint16_t, uint8_t>({
	{1,		35	},
	{2,		25	},
	{3,		10	},
	{4,		15	},
	{5,		20	},
	{6,		20	},
	{7,		15	},
	{8,		15	},
	{9,		15	},
	{10,	35	},
	{11,	30	},
	{12,	5	},
	{13,	10	},
	{14,	20 	},
	{15,	30	},
	{16,	35	},
	{17,	35	},
	{18,	20	},
	{19,	15	},
	{20,	20	},
	{21,	20	},
	{22,	25 	},
	{23,	20	},
	{24,	30	},
	{25,	5	},
	{26,	10 	},
	{27,	15	},
	{28,	15	},
	{29,	15	},
	{30,	25	},
	{31,	20	},
	{32,	5	},
	{33,	35	},
	{34,	15	},
	{35,	20	},
	{36,	20	},
	{37,	10 	},
	{38,	15	},
	{39,	30	},
	{40,	35	},
	{41,	20	},
	{42,	20	},
	{43,	30	},
	{44,	25	},
	{45,	40	},
	{46,	20	},
	{47,	15	},
	{48,	20	},
	{49,	20	},
	{50,	20	},
	{51,	30	},
	{52,	25	},
	{53,	15	},
	{54,	30	},
	{55,	25	},
	{56,	5	},
	{57,	15	},
	{58,	10	},
	{59,	5	},
	{60,	20	},
	{61,	20	},
	{62,	20	},
	{63,	5	},
	{64,	35	},
	{65,	20	},
	{66,	20 	},
	{67,	20	},
	{68,	20	},
	{69,	20	},
	{70,	15	},
	{71,	25	},
	{72,	15 	},
	{73,	10	},
	{74,	20 	},
	{75,	25	},
	{76,	10	},
	{77,	35	},
	{78,	30	},
	{79,	15	},
	{80,	10 	},
	{81,	40	},
	{82,	10	},
	{83,	15	},
	{84,	30	},
	{85,	15	},
	{86,	20	},
	{87,	10	},
	{88,	15	},
	{89,	10	},
	{90,	5	},
	{91,	10	},
	{92,	10	},
	{93,	25	},
	{94,	10	},
	{95,	20	},
	{96,	40	},
	{97,	30	},
	{98,	30	},
	{99,	20	},
	{100,	20	},
	{101,	15	},
	{102,	10	},
	{103,	40	},
	{104,	15	},
	{105,	10 	},
	{106,	30	},
	{107,	10 	},
	{108,	20	},
	{109,	10	},
	{110,	40	},
	{111,	40	},
	{112,	20 	},
	{113,	30	},
	{114,	30	},
	{115,	20	},
	{116,	30	},
	{117,	10	},
	{118,	10	},
	{119,	20	},
	{120,	5	},
	{121,	10	},
	{122,	30	},
	{123,	20	},
	{124,	20	},
	{125,	20	},
	{126,	5	},
	{127,	15	},
	{128,	15 	},
	{129,	20	},
	{130,	10 	},
	{131,	15	},
	{132,	35	},
	{133,	20	},
	{134,	15	},
	{135,	10	},
	{136,	10 	},
	{137,	30	},
	{138,	15	},
	{139,	40	},
	{140,	20	},
	{141,	10 	},
	{142,	10	},
	{143,	5	},
	{144,	10	},
	{145,	30	},
	{146,	10	},
	{147,	15	},
	{148,	20	},
	{149,	15	},
	{150,	40	},
	{151,	20 	},
	{152,	10	},
	{153,	5	},
	{154,	15	},
	{155,	10	},
	{156,	10	},
	{157,	10	},
	{158,	15	},
	{159,	30	},
	{160,	30	},
	{161,	10	},
	{162,	10	},
	{163,	20	},
	{164,	10	},
	{165,	1 	},
	{166,	1	},
	{167,	10	},
	{168,	25 	},
	{169,	10	},
	{170,	5	},
	{171,	15	},
	{172,	25	},
	{173,	15	},
	{174,	10	},
	{175,	15	},
	{176,	30	},
	{177,	5	},
	{178,	40	},
	{179,	15	},
	{180,	10	},
	{181,	25	},
	{182,	10	},
	{183,	30	},
	{184,	10	},
	{185,	20	},
	{186,	10	},
	{187,	10	},
	{188,	10	},
	{189,	10	},
	{190,	10	},
	{191,	20	},
	{192,	5	},
	{193,	40	},
	{194,	5	},
	{195,	5	},
	{196,	15	},
	{197,	5	},
	{198,	10	},
	{199,	5	},
	{200,	10 	},
	{201,	10	},
	{202,	10 	},
	{203,	10	},
	{204,	20	},
	{205,	20	},
	{206,	40	},
	{207,	15	},
	{208,	10	},
	{209,	20	},
	{210,	20	},
	{211,	25	},
	{212,	5	},
	{213,	15	},
	{214,	10	},
	{215,	5	},
	{216,	20	},
	{217,	15	},
	{218,	20	},
	{219,	25	},
	{220,	20	},
	{221,	5	},
	{222,	30	},
	{223,	5	},
	{224,	10	},
	{225,	20	},
	{226,	40	},
	{227,	5	},
	{228,	20	},
	{229,	40	},
	{230,	20	},
	{231,	15	},
	{232,	35	},
	{233,	10	},
	{234,	5	},
	{235,	5	},
	{236,	5	},
	{237,	15	},
	{238,	5	},
	{239,	20	},
	{240,	5	},
	{241,	5	},
	{242,	15	},
	{243,	20	},
	{244,	10	},
	{245,	5	},
	{246,	5	},
	{247,	15	},
	{248,	10 	},
	{249,	15	},
	{250,	15	},
	{251,	10	},
	{252,	10	},
	{253,	10	},
	{254,	20 	},
	{255,	10	},
	{256,	10	},
	{257,	10	},
	{258,	10	},
	{259,	15	},
	{260,	15	},
	{261,	15	},
	{262,	10	},
	{263,	20	},
	{264,	20	},
	{265,	10	},
	{266,	20	},
	{267,	20	},
	{268,	20	},
	{269,	20	},
	{270,	20	},
	{271,	10	},
	{272,	10	},
	{273,	10	},
	{274,	20	},
	{275,	20	},
	{276,	5	},
	{277,	15	},
	{278,	10	},
	{279,	10	},
	{280,	15	},
	{281,	10	},
	{282,	20	},
	{283,	5	},
	{284,	5	},
	{285,	10	},
	{286,	10	},
	{287,	20	},
	{288,	5	},
	{289,	10	},
	{290,	20	},
	{291,	10	},
	{292,	20	},
	{293,	20	},
	{294,	20	},
	{295,	5	},
	{296,	5	},
	{297,	15	},
	{298,	20	},
	{299,	10	},
	{300,	15	},
	{301,	20	},
	{302,	15	},
	{303,	10	},
	{304,	10	},
	{305,	15	},
	{306,	10	},
	{307,	5	},
	{308,	5	},
	{309,	10	},
	{310,	15	},
	{311,	10	},
	{312,	5	},
	{313,	20	},
	{314,	25	},
	{315,	5	},
	{316,	40	},
	{317,	15 	},
	{318,	5	},
	{319,	40	},
	{320,	15	},
	{321,	20	},
	{322,	20	},
	{323,	5	},
	{324,	15	},
	{325,	20	},
	{326,	20 	},
	{327,	15	},
	{328,	15	},
	{329,	5	},
	{330,	10	},
	{331,	30	},
	{332,	20	},
	{333,	30	},
	{334,	15	},
	{335,	5	},
	{336,	40	},
	{337,	15	},
	{338,	5	},
	{339,	20	},
	{340,	5	},
	{341,	15	},
	{342,	25	},
	{343,	25 	},
	{344,	15	},
	{345,	20	},
	{346,	15	},
	{347,	20	},
	{348,	15	},
	{349,	20	},
	{350,	10	},
	{351,	20	},
	{352,	20	},
	{353,	5	},
	{354,	5	},
	{355,	10	},
	{356,	5	},
	{357,	40	},
	{358,	10	},
	{359,	10	},
	{360,	5	},
	{361,	10	},
	{362,	10	},
	{363,	15	},
	{364,	10	},
	{365,	20	},
	{366,	15 	},
	{367,	30	},
	{368,	10	},
	{369,	20	},
	{370,	5	},
	{371,	10	},
	{372,	10	},
	{373,	15	},
	{374,	10	},
	{375,	10	},
	{376,	5	},
	{377,	15	},
	{378,	5	},
	{379,	10	},
	{380,	10	},
	{381,	30	},
	{382,	20	},
	{383,	20	},
	{384,	10	},
	{385,	10	},
	{386,	5	},
	{387,	5	},
	{388,	10	},
	{389,	5	},
	{390,	20	},
	{391,	10	},
	{392,	20	},
	{393,	10	},
	{394,	15	},
	{395,	10	},
	{396,	20	},
	{397,	20	},
	{398,	20	},
	{399,	15	},
	{400,	15	},
	{401,	10	},
	{402,	15	},
	{403,	15 	},
	{404,	15	},
	{405,	10	},
	{406,	10	},
	{407,	10	},
	{408,	20	},
	{409,	10 	},
	{410,	30	},
	{411,	5	},
	{412,	10	},
	{413,	15	},
	{414,	10	},
	{415,	10	},
	{416,	5	},
	{417,	20	},
	{418,	30	},
	{419,	10	},
	{420,	30	},
	{421,	15	},
	{422,	15	},
	{423,	15	},
	{424,	15	},
	{425,	30	},
	{426,	10	},
	{427,	20	},
	{428,	15	},
	{429,	10	},
	{430,	10	},
	{431,	20	},
	{432,	15	},
	{433,	5	},
	{434,	5	},
	{435,	15	},
	{436,	15	},
	{437,	5	},
	{438,	10	},
	{439,	5	},
	{440,	20	},
	{441,	5	},
	{442,	15	},
	{443,	20	},
	{444,	5	},
	{445,	20	},
	{446,	20	},
	{447,	20	},
	{448,	20	},
	{449,	10	},
	{450,	20	},
	{451,	10	},
	{452,	15	},
	{453,	20	},
	{454,	15	},
	{455,	10	},
	{456,	10	},
	{457,	5	},
	{458,	10	},
	{459,	5	},
	{460,	5	},
	{461,	10	},
	{462,	5	},
	{463,	5	},
	{464,	10	},
	{465,	5	},
	{466,	5	},
	{467,	5	},
	{468,	15	},
	{469,	10	},
	{470,	10	},
	{471,	10	},
	{472,	10	},
	{473,	10	},
	{474,	10	},
	{475,	15	},
	{476,	20	},
	{477,	15	},
	{478,	10	},
	{479,	15	},
	{480,	10	},
	{481,	15	},
	{482,	10	},
	{483,	20	},
	{484,	10	},
	{485,	10 	},
	{486,	10	},
	{487,	20	},
	{488,	20	},
	{489,	20	},
	{490,	20	},
	{491,	20	},
	{492,	15	},
	{493,	15	},
	{494,	15	},
	{495,	15	},
	{496,	15	},
	{497,	15	},
	{498,	20	},
	{499,	15	},
	{500,	10	},
	{501,	15	},
	{502,	15	},
	{503,	15	},
	{504,	15	},
	{505,	10	},
	{506,	10	},
	{507,	10	},
	{508,	10	},
	{509,	10	},
	{510,	15	},
	{511,	15	},
	{512,	15	},
	{513,	15	},
	{514,	5	},
	{515,	5	},
	{516,	15	},
	{517,	5	},
	{518,	10	},
	{519,	10	},
	{520,	10	},
	{521,	20	},
	{522,	20	},
	{523,	20	},
	{524,	10	},
	{525,	10	},
	{526,	30	},
	{527,	15	},
	{528,	15	},
	{529,	10	},
	{530,	15	},
	{531,	25	},
	{532,	10	},
	{533,	15 	},
	{534,	10	},
	{535,	10	},
	{536,	10	},
	{537,	20	},
	{538,	10	},
	{539,	10	},
	{540,	10	},
	{541,	10	},
	{542,	10	},
	{543,	15	},
	{544,	15	},
	{545,	5	},
	{546,	5	},
	{547,	10	},
	{548,	10	},
	{549,	10	},
	{550,	5	},
	{551,	5	},
	{552,	10	},
	{553,	5	},
	{554,	5	},
	{555,	15	},
	{556,	10	},
	{557,	5	},
	{558,	5	},
	{559,	5	},
	{560,	10	},
	{561,	10	},
	{562,	10	},
	{563,	10	},
	{564,	20	},
	{565,	25	},
	{566,	10	},
	{567,	20	},
	{568,	30	},
	{569,	25	},
	{570,	20	},
	{571,	20	},
	{572,	15	},
	{573,	20	},
	{574,	15	},
	{575,	20	},
	{576,	20	},
	{577,	10	},
	{578,	10	},
	{579,	10	},
	{580,	10	},
	{581,	10	},
	{582,	20	},
	{583,	10	},
	{584,	30	},
	{585,	15	},
	{586,	10	},
	{587,	10	},
	{588,	10	},
	{589,	20	},
	{590,	20	},
	{591,	5	},
	{592,	5	},
	{593,	5	},
	{594,	20	},
	{595,	10	},
	{596,	10	},
	{597,	20	},
	{598,	15	},
	{599,	20	},
	{600,	20	},
	{601,	10	},
	{602,	20	},
	{603,	30	},
	{604,	10	},
	{605,	10	},
	{606,	40	},
	{607,	40	},
	{608,	30	},
	{609,	20	},
	{610,	40	},
	{611,	20	},
	{612,	20	},
	{613,	10	},
	{614,	10	},
	{615,	10	},
	{616,	10	},
	{617,	5	},
	{618,	10	},
	{619,	10	},
	{620,	5	},
	{621,	5	},
	{622,	1	},
	{623,	1	},
	{624,	1	},
	{625,	1	},
	{626,	1	},
	{627,	1	},
	{628,	1	},
	{629,	1	},
	{630,	1	},
	{631,	1	},
	{632,	1	},
	{633,	1	},
	{634,	1	},
	{635,	1	},
	{636,	1	},
	{637,	1	},
	{638,	1	},
	{639,	1	},
	{640,	1	},
	{641,	1	},
	{642,	1	},
	{643,	1	},
	{644,	1	},
	{645,	1	},
	{646,	1	},
	{647,	1	},
	{648,	1	},
	{649,	1	},
	{650,	1	},
	{651,	1	},
	{652,	1	},
	{653,	1	},
	{654,	1	},
	{655,	1	},
	{656,	1	},
	{657,	1	},
	{658,	1	},
	{659,	10	},
	{660,	10	},
	{661,	10	},
	{662,	10	},
	{663,	10	},
	{664,	10	},
	{665,	10	},
	{666,	10	},
	{667,	10	},
	{668,	10	},
	{669,	10	},
	{670,	40	},
	{671,	15	},
	{672,	20	},
	{673,	30	},
	{674,	20	},
	{675,	15	},
	{676,	15	},
	{677,	20	},
	{678,	10	},
	{679,	15	},
	{680,	15	},
	{681,	10	},
	{682,	5	},
	{683,	10	},
	{684,	10	},
	{685,	20	},
	{686,	15	},
	{687,	10	},
	{688,	15	},
	{689,	15	},
	{690,	15	},
	{691,	5	},
	{692,	15	},
	{693,	20	},
	{694,	20	},
	{695,	1	},
	{696,	1	},
	{697,	1	},
	{698,	1	},
	{699,	1	},
	{700,	1	},
	{701,	1	},
	{702,	1	},
	{703,	1	},
	{704,	5	},
	{705,	5	},
	{706,	10	},
	{707,	10	},
	{708,	10	},
	{709,	20	},
	{710,	10	},
	{711,	10	},
	{712,	10	},
	{713,	5	},
	{714,	5	},
	{715,	20	},
	{716,	10	},
	{717,	10	},
	{718,	10	},
	{719,	1	},
	{720,	5	},
	{721,	15	},
	{722,	5	},
	{723,	1	},
	{724,	1	},
	{725,	1	},
	{726,	1	},
	{727,	1	},
	{728,	1	},
	{729,	10 	},
	{730,	15	},
	{731,	15	},
	{732,	20	},
	{733,	20 	},
	{734,	20 	},
	{735,	20 	},
	{736,	15	},
	{737,	15	},
	{738,	10 	},
	{739,	10 	},
	{740,	5 	},
	{741,	20	},
	{742,	5	},
	{743,	10	},
	{744,	5	},
	{745,	15	},
	{746,	10	},
	{747,	10	},
	{748,	5	},
	{749,	15	},
	{750,	20	},
	{751,	10	},
	{752,	10	},
	{753,	15	},
	{754,	10	},
	{755,	10	},
	{756,	10	},
	{757,	10	},
	{758,	10	},
	{759,	10	},
	{760,	10	},
	{761,	10	},
	{762,	10	},
	{763,	10	},
	{764,	10	},
	{765,	10	},
	{766,	10	},
	{767,	10	},
	{768,	10	},
	{769,	10	},
	{770,	10	},
	{771,	10	},
	{772,	10	},
	{773,	10	},
	{774,	10	},
	{775,	5	},
	{776,	10	},
	{777,	15	},
	{778,	10	},
	{779,	15	},
	{780,	5	},
	{781,	5	},
	{782,	5	},
	{783,	10	},
	{784,	15	},
	{785,	40	},
	{786,	10	},
	{787,	10	},
	{788,	10	},
	{789,	15	},
	{790,	10	},
	{791,	10	},
	{792,	10	},
	{793,	10	},
	{794,	5	},
	{795,	5	},
	{796,	5	},
	{797,	10	},
	{798,	5	},
	{799,	20	},
	{800,	10	},
	{801,	10	},
	{802,	5	},
	{803,	20	},
	{804,	20	},
	{805,	10	},
	{806,	10	},
	{807,	5	},
	{808,	5	},
	{809,	5	},
	{810,	40	},
	{811,	10	},
	{812,	20	},
	{813,	10	},
	{814,	10	},
	{815,	10	},
	{816,	10	},
	{817,	5	},
	{818,	5	},
	{819,	15	},
	{820,	5	},
	{821,	10	},
	{822,	10	},
	{823,	10	},
	{824,	5	},
	{825,	5	},
	{826,	5	},
	{827,	15	},
	{828,	10	},
	{829,	10	},
	{830,	15	},
	{831,	5	},
	{832,	10	},
	{833,	10	},
	{834,	10	},
	{835,	5	},
	{836,	5	},
	{837,	10	},
	{838,	5	},
	{839,	15	},
	{840,	10	},
	{841,	15	},
	{842,	10	},
	{843,	15	},
	{844,	15	},
	{845,	15	},
	{846,	5	},
	{847,	5	},
	{848,	5	},
	{849,	10	},
	{850,	10	}
});


#endif