#include <cstdint>
#include <vector>
#include <string>
#include "Converter.h"

uint32_t swap_uint32(uint32_t val)
{
	val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF);
	return (val << 16) | (val >> 16);
}

std::vector<uint8_t> strToVecUint8_t(const std::string& data)
{
	std::vector<uint8_t> buffer;

	// For Each 2 character(1 byte) segment use strtol to convert to a uint8_t value and push to back of buffer
	for (unsigned int i = 0; i < data.length(); i += 2)
	{
		std::string strByte = data.substr(i, 2);
		uint8_t byte = (uint8_t)strtol(strByte.c_str(), NULL, 16);
		buffer.push_back(byte);
	}

	return buffer;
}

std::vector<uint32_t> strToVecUint32_t(const std::string& data)
{
	std::vector<uint32_t> buffer;

	// For Each 2 character(1 byte) segment use strtol to convert to a uint8_t value and push to back of buffer
	for (unsigned int i = 0; i < data.length(); i += 8)
	{
		std::string word = data.substr(i, 8);
		buffer.push_back(strToUint32_t(word));
	}

	return buffer;
}

uint16_t strToUint16_t(const std::string& data)
{
	uint16_t retval = 0;

	//for each 2 character (1 byte) segment use strtol to push to each section of the 32 bit memory
	for (unsigned int i = 0; i < data.length(); i += 2)
	{
		std::string strByte = data.substr(i, 2);
		uint8_t byte = (uint8_t)strtol(strByte.c_str(), NULL, 16);
		retval = retval | (byte << 8 - i * 4);
	}

	return retval;
}

uint32_t strToUint32_t(const std::string& data)
{
	uint32_t retval = 0;

	//for each 2 character (1 byte) segment use strtol to push to each section of the 32 bit memory
	for (unsigned int i = 0; i < data.length(); i += 2)
	{
		std::string strByte = data.substr(i, 2);
		uint8_t byte = (uint8_t)strtol(strByte.c_str(), NULL, 16);
		retval = retval | (byte << 24 - i * 4);
	}

	return retval;
}

std::vector<uint32_t> uint8_tVecToUint32_tVec(const std::vector<uint8_t> data)
{
	std::vector<uint32_t> retval;

	//for each 4 uint8_t values, construct a uint32_t value and push to array
	for (int i = 0; i < data.size(); i += 4)
	{
		uint32_t current = 0;
		for (int f = 0; f < 4; f++)
		{
			current = current | (data[i + f] << (24 - f * 8));
		}
		retval.push_back(current);
	}

	return retval;
}

uint8_t strToUint8_t(const std::string data)
{
	return (uint8_t)strtol(data.c_str(), NULL, 16);
}