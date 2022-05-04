﻿#include <map>
#include <string>

std::map<uint16_t, std::string> pokemon_names = {
	{0x000,	"??????????"},
	{0x001,	"Bulbasaur"	},
	{0x002,	"Ivysaur"	},
	{0x003,	"Venusaur"	},
	{0x004,	"Charmander"},
	{0x005,	"Charmeleon"},
	{0x006,	"Charizard"	},
	{0x007,	"Squirtle"	},
	{0x008,	"Wartortle"	},
	{0x009,	"Blastoise"	},
	{0x00A,	"Caterpie"	},
	{0x00B,	"Metapod"	},
	{0x00C,	"Butterfree"},
	{0x00D,	"Weedle"	},
	{0x00E,	"Kakuna"	},
	{0x00F,	"Beedrill"	},
	{0x010,	"Pidgey"	},
	{0x011,	"Pidgeotto"	},
	{0x012,	"Pidgeot"	},
	{0x013,	"Rattata"	},
	{0x014,	"Raticate"	},
	{0x015,	"Spearow"	},
	{0x016,	"Fearow"	},
	{0x017,	"Ekans"		},
	{0x018,	"Arbok"		},
	{0x019,	"Pikachu"	},
	{0x01A,	"Raichu"	},
	{0x01B,	"Sandshrew"	},
	{0x01C,	"Sandslash"	},
	{0x01D,	"Nidoran♀"	},
	{0x01E,	"Nidorina"	},
	{0x01F,	"Nidoqueen"	},
	{0x020,	"Nidoran♂"	},
	{0x021,	"Nidorino"	},
	{0x022,	"Nidoking"	},
	{0x023,	"Clefairy"	},
	{0x024,	"Clefable"	},
	{0x025,	"Vulpix"	},
	{0x026,	"Ninetales"	},
	{0x027,	"Jigglypuff"},
	{0x028,	"Wigglytuff"},
	{0x029,	"Zubat"		},
	{0x02A,	"Golbat"	},
	{0x02B,	"Oddish"	},
	{0x02C,	"Gloom"		},
	{0x02D,	"Vileplume"	},
	{0x02E,	"Paras"		},
	{0x02F,	"Parasect"	},
	{0x030,	"Venonat"	},
	{0x031,	"Venomoth"	},
	{0x032,	"Diglett"	},
	{0x033,	"Dugtrio"	},
	{0x034,	"Meowth"	},
	{0x035,	"Persian"	},
	{0x036,	"Psyduck"	},
	{0x037,	"Golduck"	},
	{0x038,	"Mankey"	},
	{0x039,	"Primeape"	},
	{0x03A,	"Growlithe"	},
	{0x03B,	"Arcanine"	},
	{0x03C,	"Poliwag"	},
	{0x03D,	"Poliwhirl"	},
	{0x03E,	"Poliwrath"	},
	{0x03F,	"Abra"		},
	{0x040,	"Kadabra"	},
	{0x041,	"Alakazam"	},
	{0x042,	"Machop"	},
	{0x043,	"Machoke"	},
	{0x044,	"Machamp"	},
	{0x045,	"Bellsprout"},
	{0x046,	"Weepinbell"},
	{0x047,	"Victreebel"},
	{0x048,	"Tentacool"	},
	{0x049,	"Tentacruel"},
	{0x04A,	"Geodude"	},
	{0x04B,	"Graveler"	},
	{0x04C,	"Golem"		},
	{0x04D,	"Ponyta"	},
	{0x04E,	"Rapidash"	},
	{0x04F,	"Slowpoke"	},
	{0x050,	"Slowbro"	},
	{0x051,	"Magnemite"	},
	{0x052,	"Magneton"	},
	{0x053,	"Farfetch'd"},
	{0x054,	"Doduo"		},
	{0x055,	"Dodrio"	},
	{0x056,	"Seel"		},
	{0x057,	"Dewgong"	},
	{0x058,	"Grimer"	},
	{0x059,	"Muk"		},
	{0x05A,	"Shellder"	},
	{0x05B,	"Cloyster"	},
	{0x05C,	"Gastly"	},
	{0x05D,	"Haunter"	},
	{0x05E,	"Gengar"	},
	{0x05F,	"Onix"		},
	{0x060,	"Drowzee"	},
	{0x061,	"Hypno"		},
	{0x062,	"Krabby"	},
	{0x063,	"Kingler"	},
	{0x064,	"Voltorb"	},
	{0x065,	"Electrode"	},
	{0x066,	"Exeggcute"	},
	{0x067,	"Exeggutor"	},
	{0x068,	"Cubone"	},
	{0x069,	"Marowak"	},
	{0x06A,	"Hitmonlee"	},
	{0x06B,	"Hitmonchan"},
	{0x06C,	"Lickitung"	},
	{0x06D,	"Koffing"	},
	{0x06E,	"Weezing"	},
	{0x06F,	"Rhyhorn"	},
	{0x070,	"Rhydon"	},
	{0x071,	"Chansey"	},
	{0x072,	"Tangela"	},
	{0x073,	"Kangaskhan"},
	{0x074,	"Horsea"	},
	{0x075,	"Seadra"	},
	{0x076,	"Goldeen"	},
	{0x077,	"Seaking"	},
	{0x078,	"Staryu"	},
	{0x079,	"Starmie"	},
	{0x07A,	"Mr. Mime"	},
	{0x07B,	"Scyther"	},
	{0x07C,	"Jynx"		},
	{0x07D,	"Electabuzz"},
	{0x07E,	"Magmar"	},
	{0x07F,	"Pinsir"	},
	{0x080,	"Tauros"	},
	{0x081,	"Magikarp"	},
	{0x082,	"Gyarados"	},
	{0x083,	"Lapras"	},
	{0x084,	"Ditto"		},
	{0x085,	"Eevee"		},
	{0x086,	"Vaporeon"	},
	{0x087,	"Jolteon"	},
	{0x088,	"Flareon"	},
	{0x089,	"Porygon"	},
	{0x08A,	"Omanyte"	},
	{0x08B,	"Omastar"	},
	{0x08C,	"Kabuto"	},
	{0x08D,	"Kabutops"	},
	{0x08E,	"Aerodactyl"},
	{0x08F,	"Snorlax"	},
	{0x090,	"Articuno"	},
	{0x091,	"Zapdos"	},
	{0x092,	"Moltres"	},
	{0x093,	"Dratini"	},
	{0x094,	"Dragonair"	},
	{0x095,	"Dragonite"	},
	{0x096,	"Mewtwo"	},
	{0x097,	"Mew"		},
	{0x098,	"Chikorita"	},
	{0x099,	"Bayleef"	},
	{0x09A,	"Meganium"	},
	{0x09B,	"Cyndaquil"	},
	{0x09C,	"Quilava"	},
	{0x09D,	"Typhlosion"},
	{0x09E,	"Totodile"	},
	{0x09F,	"Croconaw"	},
	{0x0A0,	"Feraligatr"},
	{0x0A1,	"Sentret"	},
	{0x0A2,	"Furret"	},
	{0x0A3,	"Hoothoot"	},
	{0x0A4,	"Noctowl"	},
	{0x0A5,	"Ledyba"	},
	{0x0A6,	"Ledian"	},
	{0x0A7,	"Spinarak"	},
	{0x0A8,	"Ariados"	},
	{0x0A9,	"Crobat"	},
	{0x0AA,	"Chinchou"	},
	{0x0AB,	"Lanturn"	},
	{0x0AC,	"Pichu"		},
	{0x0AD,	"Cleffa"	},
	{0x0AE,	"Igglybuff"	},
	{0x0AF,	"Togepi"	},
	{0x0B0,	"Togetic"	},
	{0x0B1,	"Natu"		},
	{0x0B2,	"Xatu"		},
	{0x0B3,	"Mareep"	},
	{0x0B4,	"Flaaffy"	},
	{0x0B5,	"Ampharos"	},
	{0x0B6,	"Bellossom"	},
	{0x0B7,	"Marill"	},
	{0x0B8,	"Azumarill"	},
	{0x0B9,	"Sudowoodo"	},
	{0x0BA,	"Politoed"	},
	{0x0BB,	"Hoppip"	},
	{0x0BC,	"Skiploom"	},
	{0x0BD,	"Jumpluff"	},
	{0x0BE,	"Aipom"		},
	{0x0BF,	"Sunkern"	},
	{0x0C0,	"Sunflora"	},
	{0x0C1,	"Yanma"		},
	{0x0C2,	"Wooper"	},
	{0x0C3,	"Quagsire"	},
	{0x0C4,	"Espeon"	},
	{0x0C5,	"Umbreon"	},
	{0x0C6,	"Murkrow"	},
	{0x0C7,	"Slowking"	},
	{0x0C8,	"Misdreavus"},
	{0x0C9,	"Unown"		},
	{0x0CA,	"Wobbuffet"	},
	{0x0CB,	"Girafarig"	},
	{0x0CC,	"Pineco"	},
	{0x0CD,	"Forretress"},
	{0x0CE,	"Dunsparce"	},
	{0x0CF,	"Gligar"	},
	{0x0D0,	"Steelix"	},
	{0x0D1,	"Snubbull"	},
	{0x0D2,	"Granbull"	},
	{0x0D3,	"Qwilfish"	},
	{0x0D4,	"Scizor"	},
	{0x0D5,	"Shuckle"	},
	{0x0D6,	"Heracross"	},
	{0x0D7,	"Sneasel"	},
	{0x0D8,	"Teddiursa"	},
	{0x0D9,	"Ursaring"	},
	{0x0DA,	"Slugma"	},
	{0x0DB,	"Magcargo"	},
	{0x0DC,	"Swinub"	},
	{0x0DD,	"Piloswine"	},
	{0x0DE,	"Corsola"	},
	{0x0DF,	"Remoraid"	},
	{0x0E0,	"Octillery"	},
	{0x0E1,	"Delibird"	},
	{0x0E2,	"Mantine"	},
	{0x0E3,	"Skarmory"	},
	{0x0E4,	"Houndour"	},
	{0x0E5,	"Houndoom"	},
	{0x0E6,	"Kingdra"	},
	{0x0E7,	"Phanpy"	},
	{0x0E8,	"Donphan"	},
	{0x0E9,	"Porygon2"	},
	{0x0EA,	"Stantler"	},
	{0x0EB,	"Smeargle"	},
	{0x0EC,	"Tyrogue"	},
	{0x0ED,	"Hitmontop"	},
	{0x0EE,	"Smoochum"	},
	{0x0EF,	"Elekid"	},
	{0x0F0,	"Magby"		},
	{0x0F1,	"Miltank"	},
	{0x0F2,	"Blissey"	},
	{0x0F3,	"Raikou"	},
	{0x0F4,	"Entei"		},
	{0x0F5,	"Suicune"	},
	{0x0F6,	"Larvitar"	},
	{0x0F7,	"Pupitar"	},
	{0x0F8,	"Tyranitar"	},
	{0x0F9,	"Lugia"		},
	{0x0FA,	"Ho-Oh"		},
	{0x0FB,	"Celebi"	},
	{0x0FC,	"?"			},
	{0x0FD,	"?"			},
	{0x0FE,	"?"			},
	{0x0FF,	"?"			},
	{0x100,	"?"			},
	{0x101,	"?"			},
	{0x102,	"?"			},
	{0x103,	"?"			},
	{0x104,	"?"			},
	{0x105,	"?"			},
	{0x106,	"?"			},
	{0x107,	"?"			},
	{0x108,	"?"			},
	{0x109,	"?"			},
	{0x10A,	"?"			},
	{0x10B,	"?"			},
	{0x10C,	"?"			},
	{0x10D,	"?"			},
	{0x10E,	"?"			},
	{0x10F,	"?"			},
	{0x110,	"?"			},
	{0x111,	"?"			},
	{0x112,	"?"			},
	{0x113,	"?"			},
	{0x114,	"?"			},
	{0x115,	"Treecko"	},
	{0x116,	"Grovyle"	},
	{0x117,	"Sceptile"	},
	{0x118,	"Torchic"	},
	{0x119,	"Combusken"	},
	{0x11A,	"Blaziken"	},
	{0x11B,	"Mudkip"	},
	{0x11C,	"Marshtomp"	},
	{0x11D,	"Swampert"	},
	{0x11E,	"Poochyena"	},
	{0x11F,	"Mightyena"	},
	{0x120,	"Zigzagoon"	},
	{0x121,	"Linoone"	},
	{0x122,	"Wurmple"	},
	{0x123,	"Silcoon"	},
	{0x124,	"Beautifly"	},
	{0x125,	"Cascoon"	},
	{0x126,	"Dustox"	},
	{0x127,	"Lotad"		},
	{0x128,	"Lombre"	},
	{0x129,	"Ludicolo"	},
	{0x12A,	"Seedot"	},
	{0x12B,	"Nuzleaf"	},
	{0x12C,	"Shiftry"	},
	{0x12D,	"Nincada"	},
	{0x12E,	"Ninjask"	},
	{0x12F,	"Shedinja"	},
	{0x130,	"Taillow"	},
	{0x131,	"Swellow"	},
	{0x132,	"Shroomish"	},
	{0x133,	"Breloom"	},
	{0x134,	"Spinda"	},
	{0x135,	"Wingull"	},
	{0x136,	"Pelipper"	},
	{0x137,	"Surskit"	},
	{0x138,	"Masquerain"},
	{0x139,	"Wailmer"	},
	{0x13A,	"Wailord"	},
	{0x13B,	"Skitty"	},
	{0x13C,	"Delcatty"	},
	{0x13D,	"Kecleon"	},
	{0x13E,	"Baltoy"	},
	{0x13F,	"Claydol"	},
	{0x140,	"Nosepass"	},
	{0x141,	"Torkoal"	},
	{0x142,	"Sableye"	},
	{0x143,	"Barboach"	},
	{0x144,	"Whiscash"	},
	{0x145,	"Luvdisc"	},
	{0x146,	"Corphish"	},
	{0x147,	"Crawdaunt"	},
	{0x148,	"Feebas"	},
	{0x149,	"Milotic"	},
	{0x14A,	"Carvanha"	},
	{0x14B,	"Sharpedo"	},
	{0x14C,	"Trapinch"	},
	{0x14D,	"Vibrava"	},
	{0x14E,	"Flygon"	},
	{0x14F,	"Makuhita"	},
	{0x150,	"Hariyama"	},
	{0x151,	"Electrike"	},
	{0x152,	"Manectric"	},
	{0x153,	"Numel"		},
	{0x154,	"Camerupt"	},
	{0x155,	"Spheal"	},
	{0x156,	"Sealeo"	},
	{0x157,	"Walrein"	},
	{0x158,	"Cacnea"	},
	{0x159,	"Cacturne"	},
	{0x15A,	"Snorunt"	},
	{0x15B,	"Glalie"	},
	{0x15C,	"Lunatone"	},
	{0x15D,	"Solrock"	},
	{0x15E,	"Azurill"	},
	{0x15F,	"Spoink"	},
	{0x160,	"Grumpig"	},
	{0x161,	"Plusle"	},
	{0x162,	"Minun"		},
	{0x163,	"Mawile"	},
	{0x164,	"Meditite"	},
	{0x165,	"Medicham"	},
	{0x166,	"Swablu"	},
	{0x167,	"Altaria"	},
	{0x168,	"Wynaut"	},
	{0x169,	"Duskull"	},
	{0x16A,	"Dusclops"	},
	{0x16B,	"Roselia"	},
	{0x16C,	"Slakoth"	},
	{0x16D,	"Vigoroth"	},
	{0x16E,	"Slaking"	},
	{0x16F,	"Gulpin"	},
	{0x170,	"Swalot"	},
	{0x171,	"Tropius"	},
	{0x172,	"Whismur"	},
	{0x173,	"Loudred"	},
	{0x174,	"Exploud"	},
	{0x175,	"Clamperl"	},
	{0x176,	"Huntail"	},
	{0x177,	"Gorebyss"	},
	{0x178,	"Absol"		},
	{0x179,	"Shuppet"	},
	{0x17A,	"Banette"	},
	{0x17B,	"Seviper"	},
	{0x17C,	"Zangoose"	},
	{0x17D,	"Relicanth"	},
	{0x17E,	"Aron"		},
	{0x17F,	"Lairon"	},
	{0x180,	"Aggron"	},
	{0x181,	"Castform"	},
	{0x182,	"Volbeat"	},
	{0x183,	"Illumise"	},
	{0x184,	"Lileep"	},
	{0x185,	"Cradily"	},
	{0x186,	"Anorith"	},
	{0x187,	"Armaldo"	},
	{0x188,	"Ralts"		},
	{0x189,	"Kirlia"	},
	{0x18A,	"Gardevoir"	},
	{0x18B,	"Bagon"		},
	{0x18C,	"Shelgon"	},
	{0x18D,	"Salamence"	},
	{0x18E,	"Beldum"	},
	{0x18F,	"Metang"	},
	{0x190,	"Metagross"	},
	{0x191,	"Regirock"	},
	{0x192,	"Regice"	},
	{0x193,	"Registeel"	},
	{0x194,	"Kyogre"	},
	{0x195,	"Groudon"	},
	{0x196,	"Rayquaza"	},
	{0x197,	"Latias"	},
	{0x198,	"Latios"	},
	{0x199,	"Jirachi"	},
	{0x19A,	"Deoxys"	},
	{0x19B,	"Chimecho"	},
	{0x19C,	"Pokémon Egg"},
	{0x19D,	"Unown"		},
	{0x19E,	"Unown"		},
	{0x19F,	"Unown"		},
	{0x1A0,	"Unown"		},
	{0x1A1,	"Unown"		},
	{0x1A2,	"Unown"		},
	{0x1A3,	"Unown"		},
	{0x1A4,	"Unown"		},
	{0x1A5,	"Unown"		},
	{0x1A6,	"Unown"		},
	{0x1A7,	"Unown"		},
	{0x1A8,	"Unown"		},
	{0x1A9,	"Unown"		},
	{0x1AA,	"Unown"		},
	{0x1AB,	"Unown"		},
	{0x1AC,	"Unown"		},
	{0x1AD,	"Unown"		},
	{0x1AE,	"Unown"		},
	{0x1AF,	"Unown"		},
	{0x1B0,	"Unown"		},
	{0x1B1,	"Unown"		},
	{0x1B2,	"Unown"		},
	{0x1B3,	"Unown"		},
	{0x1B4,	"Unown"		},
	{0x1B5,	"Unown"		},
	{0x1B6,	"Unown"		},
	{0x1B7,	"Unown"		}
};