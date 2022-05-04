#ifndef _ENCRYPTOR_H_INCLUDED
#define _ENCRYPTOR_H_INCLUDED
#include <vector>
#include <string>
#include <map>

#define HEX_DWORD 8
#define HEX_WORD 4
#define HEX_BYTE 2
#define MALE 0
#define FEMALE 1

class Pokemon {
public:
	Pokemon(std::string data);
	~Pokemon();
	uint32_t OTID;
	uint32_t personality;
	std::string nickname;
	uint8_t language;
	uint8_t eggName;
	std::string OTName;
	uint8_t markings;
	uint16_t checksum;
	uint32_t status;
	uint8_t level;
	uint8_t pokerus;
	uint16_t curHP;
	uint16_t totHP;
	uint16_t atk;
	uint16_t def;
	uint16_t spd;
	uint16_t spatk;
	uint16_t spdef;
	uint16_t species;
	uint16_t held_item;
	uint32_t exp;
	uint8_t pp_bonuses1;
	uint8_t pp_bonuses2;
	uint8_t pp_bonuses3;
	uint8_t pp_bonuses4;
	uint8_t friendship;
	uint16_t g_misc;
	uint16_t move1;
	uint16_t move2;
	uint16_t move3;
	uint16_t move4;
	uint8_t pp1;
	uint8_t pp2;
	uint8_t pp3;
	uint8_t pp4;
	uint8_t hpEV;
	uint8_t atkEV;
	uint8_t defEV;
	uint8_t spdEV;
	uint8_t spatkEV;
	uint8_t spdefEV;
	uint8_t coolness;
	uint8_t beauty;
	uint8_t cuteness;
	uint8_t smartness;
	uint8_t toughness;
	uint8_t feel;
	uint8_t pokerus_status;
	uint8_t met_location;
	uint8_t met_level;
	uint8_t origin_game;
	uint8_t caught_pokeball;
	uint8_t trainer_gender;
	uint8_t hpIV;
	uint8_t atkIV;
	uint8_t defIV;
	uint8_t spdIV;
	uint8_t spatkIV;
	uint8_t spdefIV;
	uint8_t is_egg;
	uint8_t ability;
	uint8_t ribbon_cool;
	uint8_t ribbon_beauty;
	uint8_t ribbon_cute;
	uint8_t ribbon_smart;
	uint8_t ribbon_tough;
	uint8_t champion;
	uint8_t winning;
	uint8_t victory;
	uint8_t artist;
	uint8_t effort;
	uint8_t sp1;
	uint8_t sp2;
	uint8_t sp3;
	uint8_t sp4;
	uint8_t sp5;
	uint8_t sp6;

	operator char() const;

private:
	std::vector<uint32_t> dataBuffer;

	void M(int start);
	void E(int start);
	void G(int start);
	void A(int start);

	void decryptBuffer();
	void encryptBuffer();

	//TODO CHANGE VALUES TO 9-CURRENT VALUE
	std::map<int, int> offset_m = {
	{0, 9},
	{1, 6},
	{2, 9},
	{3, 6},
	{4, 3},
	{5, 3},
	{6, 9},
	{7, 6},
	{8, 9},
	{9, 6},
	{10, 3},
	{11, 3},
	{12, 9},
	{13, 6},
	{14, 9},
	{15, 6},
	{16, 3},
	{17, 3},
	{18, 0},
	{19, 0},
	{20, 0},
	{21, 0},
	{22, 0},
	{23, 0}
	};

	std::map<int, int> offset_e = {
		{0, 6},
		{1, 9},
		{2, 3},
		{3, 3},
		{4, 9},
		{5, 6},
		{6, 6},
		{7, 9},
		{8, 3},
		{9, 3},
		{10, 9},
		{11, 6},
		{12, 0},
		{13, 0},
		{14, 0},
		{15, 0},
		{16, 0},
		{17, 0},
		{18, 6},
		{19, 9},
		{20, 3},
		{21, 3},
		{22, 9},
		{23, 6}
	};

	std::map<int, int> offset_g = {
		{0, 0},
		{1, 0},
		{2, 0},
		{3, 0},
		{4, 0},
		{5, 0},
		{6, 3},
		{7, 3},
		{8, 6},
		{9, 9},
		{10, 6},
		{11, 9},
		{12, 3},
		{13, 3},
		{14, 6},
		{15, 9},
		{16, 6},
		{17, 9},
		{18, 3},
		{19, 3},
		{20, 6},
		{21, 9},
		{22, 6},
		{23, 9}
	};

	std::map<int, int> offset_a = {
		{0, 3},
		{1, 3},
		{2, 6},
		{3, 9},
		{4, 6},
		{5, 9},
		{6, 0},
		{7, 0},
		{8, 0},
		{9, 0},
		{10, 0},
		{11, 0},
		{12, 6},
		{13, 9},
		{14, 3},
		{15, 3},
		{16, 9},
		{17, 6},
		{18, 6},
		{19, 9},
		{20, 3},
		{21, 3},
		{22, 9},
		{23, 6}
	};

};

#endif