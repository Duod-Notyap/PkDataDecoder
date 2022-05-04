#include <iostream>
#include "Pokemon.h"
#include "Converter.h"
#include "Characters.h"
#include <iomanip>

//DecryptedDataSet decryptData(std::vector<uint32_t> data, uint32_t OTID, uint32_t PerVal, uint16_t checksum)
//{
//
//
//	return { data, swap_uint32(PerVal) % 24 };
//}
//
//EncryptedDataSet encryptData(std::vector<uint32_t> data, uint32_t OTID, uint32_t PerVal)
//{
//	uint32_t key = OTID ^ PerVal;
//
//	uint16_t validation = 0;
//	for (int i = 0; i < data.size(); i++)
//	{
//		uint16_t a = (data[i] >> 16) & 0b1111111111111111;
//		uint16_t b = data[i] & 0b1111111111111111;
//		validation += a + b;
//	}
//	validation = (validation << 8) | (validation >> 8);
//
//	for (int i = 0; i < data.size(); i++)
//	{
//		data[i] = swap_uint32(data[i]);
//		data[i] = data[i] ^ key;
//	}
//
//
//	return { data, validation };
//}

void Pokemon::G(int start)
{
	species = dataBuffer[start] & 0xFFFF;
	held_item = dataBuffer[start] >> 16;
	exp = dataBuffer[start + 1];
	pp_bonuses1 = dataBuffer[start + 2] & 0b11;
	pp_bonuses2 = (dataBuffer[start + 2] >> 2) & 0b11;
	pp_bonuses3 = (dataBuffer[start + 2] >> 4) & 0b11;
	pp_bonuses4 = (dataBuffer[start + 2] >> 6) & 0b11;
	friendship = (dataBuffer[start + 2] >> 8) & 0xFF;
	g_misc = dataBuffer[start + 2] >> 16;
}

void Pokemon::A(int start)
{
	move1 = dataBuffer[start] & 0xFFFF;
	move2 = dataBuffer[start] >> 16;
	move3 = dataBuffer[start + 1] & 0xFFFF;
	move4 = dataBuffer[start + 1] >> 16;
	pp1 = dataBuffer[start + 2] & 0xFF;
	pp2 = (dataBuffer[start + 2] >> 8) & 0xFF;
	pp3 = (dataBuffer[start + 2] >> 16) & 0xFF;
	pp4 = dataBuffer[start + 2] >> 24;
}

void Pokemon::E(int start)
{
	hpEV = dataBuffer[start] & 0xFF;
	atkEV = (dataBuffer[start] >> 8) & 0xFF;
	defEV = (dataBuffer[start] >> 16) & 0xFF;
	spdEV = dataBuffer[start] >> 24;
	spatkEV = dataBuffer[start + 1] & 0xFF;
	spdefEV = (dataBuffer[start + 1] >> 8) & 0xFF;
	coolness = (dataBuffer[start + 1] >> 16) & 0xFF;
	beauty = dataBuffer[start+1] >> 24;
	cuteness = dataBuffer[start + 1] & 0xFF;
	smartness = (dataBuffer[start + 1] >> 8) & 0xFF;
	toughness = (dataBuffer[start + 1] >> 16) & 0xFF;
	feel = dataBuffer[start + 1] >> 24;
}

void Pokemon::M(int start)
{
	pokerus_status = dataBuffer[start] & 0xFF;
	met_location = (dataBuffer[start] >> 8) & 0xFF;
	met_level = (dataBuffer[start] >> 16) & 0b1111111;
	origin_game = (dataBuffer[start] >> 23) & 0b1111;
	caught_pokeball = (dataBuffer[start] >> 27) & 0b1111;
	trainer_gender = dataBuffer[start] >> 31;
	hpIV = dataBuffer[start + 1] & 0b11111;
	atkIV = (dataBuffer[start + 1] >> 5) & 0b11111;
	defIV = (dataBuffer[start + 1] >> 10) & 0b11111;
	spdIV = (dataBuffer[start + 1] >> 15) & 0b11111;
	spatkIV = (dataBuffer[start + 1] >> 20) & 0b11111;
	spdefIV = (dataBuffer[start + 1] >> 25) & 0b11111;
	is_egg = (dataBuffer[start + 1] >> 30) & 0b1;
	ability = dataBuffer[start + 1] >> 31;
	ribbon_cool = dataBuffer[start + 2] & 0b11;
	ribbon_beauty = (dataBuffer[start + 2] >> 3) & 0b11;
	ribbon_cute = (dataBuffer[start + 2] >> 6) & 0b11;
	ribbon_smart = (dataBuffer[start + 2] >> 9) & 0b11;
	ribbon_tough = (dataBuffer[start + 2] >> 12) & 0b11;
	champion = (dataBuffer[start + 2] >> 15) & 0b1;
	winning = (dataBuffer[start + 2] >> 16) & 0b1;
	victory = (dataBuffer[start + 2] >> 17) & 0b1;
	artist = (dataBuffer[start + 2] >> 18) & 0b1;
	effort = (dataBuffer[start + 2] >> 19) & 0b1;
	sp1 = (dataBuffer[start + 2] >> 20) & 0b1;
	sp2 = (dataBuffer[start + 2] >> 21) & 0b1;
	sp3 = (dataBuffer[start + 2] >> 23) & 0b1;
	sp4 = (dataBuffer[start + 2] >> 24) & 0b1;
	sp5 = (dataBuffer[start + 2] >> 25) & 0b1;
	sp6 = (dataBuffer[start + 2] >> 26) & 0b1;
}

void Pokemon::decryptBuffer()
{
	uint32_t key = OTID ^ personality;

	for (int i = 0; i < dataBuffer.size(); i++)
	{
		dataBuffer[i] = dataBuffer[i] ^ key;
		dataBuffer[i] = swap_uint32(dataBuffer[i]);
	}

	uint16_t validation = 0;
	for (int i = 0; i < dataBuffer.size(); i++)
	{
		uint16_t a = (dataBuffer[i] >> 16) & 0b1111111111111111;
		uint16_t b = dataBuffer[i] & 0b1111111111111111;
		validation += a + b;
	}
	validation = (validation << 8) | (validation >> 8);

	if (checksum != validation)
		std::cout << "CHECKSUMS DO NOT MATCH\n";
}

void Pokemon::encryptBuffer()
{
	uint32_t key = OTID ^ personality;

	uint16_t validation = 0;
	for (int i = 0; i < dataBuffer.size(); i++)
	{
		uint16_t a = (dataBuffer[i] >> 16) & 0b1111111111111111;
		uint16_t b = dataBuffer[i] & 0b1111111111111111;
		validation += a + b;
	}
	validation = (validation << 8) | (validation >> 8);

	for (int i = 0; i < dataBuffer.size(); i++)
	{
		dataBuffer[i] = swap_uint32(dataBuffer[i]);
		dataBuffer[i] = dataBuffer[i] ^ key;
	}
}

Pokemon::Pokemon(std::string data)
{
	OTID = strToUint32_t(data.substr(0, HEX_DWORD));
	personality = strToUint32_t(data.substr(8, HEX_DWORD));
	nickname = convertText(strToVecUint8_t(data.substr(16, 10 * HEX_BYTE)), ENGLISH);
	language = strToUint8_t(data.substr(36, HEX_BYTE));
	eggName = strToUint8_t(data.substr(38, HEX_BYTE));
	OTName = convertText(strToVecUint8_t(data.substr(40, 7 * HEX_BYTE)), ENGLISH);
	markings = strToUint8_t(data.substr(54, HEX_BYTE));
	checksum = strToUint16_t(data.substr(56, HEX_WORD));
	dataBuffer = strToVecUint32_t(data.substr(64, 48 * HEX_BYTE));
	status = strToUint32_t(data.substr(160, HEX_DWORD));
	level = strToUint8_t(data.substr(168, HEX_BYTE));
	pokerus = strToUint8_t(data.substr(170, HEX_BYTE));
	curHP = strToUint16_t(data.substr(172, HEX_WORD));
	totHP = strToUint16_t(data.substr(176, HEX_WORD));
	atk = strToUint16_t(data.substr(180, HEX_WORD));
	def = strToUint16_t(data.substr(184, HEX_WORD));
	spd = strToUint16_t(data.substr(188, HEX_WORD));
	spatk = strToUint16_t(data.substr(192, HEX_WORD));
	spdef = strToUint16_t(data.substr(196, HEX_WORD));

	std::cout << std::dec << std::endl;
	decryptBuffer();

	int series = personality % 24;
	M(9-offset_m[series]);
	E(9-offset_e[series]);
	G(9-offset_g[series]);
	A(9-offset_a[series]);

	std::cout  << std::dec << std::endl;
}

Pokemon::~Pokemon()
{
}