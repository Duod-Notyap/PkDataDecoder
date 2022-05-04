#ifndef _CONVERTER_H_INCLUDED_
#define _CONVERTER_H_INCLUDED_

uint16_t strToUint16_t(const std::string& data);
uint32_t strToUint32_t(const std::string& data);
std::vector<uint32_t> strToVecUint32_t(const std::string& data);
std::vector<uint8_t> strToVecUint8_t(const std::string& data);
uint32_t swap_uint32(uint32_t val);
std::vector<uint32_t> uint8_tVecToUint32_tVec(const std::vector<uint8_t> data);
uint8_t strToUint8_t(const std::string data);

#endif