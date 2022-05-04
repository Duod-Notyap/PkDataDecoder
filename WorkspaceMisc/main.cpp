#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include "Converter.h"
#include "Pokemon.h"
#include "PID.h"
#include "Moves.h"

int main()
{



	std::string strData;
	std::cout << "FULL DATA:" << '\n';
	std::cin >> strData;
	std::transform(strData.begin(), strData.end(), strData.begin(),
		[](unsigned char c) { return std::tolower(c); });

	Pokemon p1(strData);

	std::cout << p1.nickname << " / " << pokemon_names[p1.species] << std::endl;
	std::cout << (*move_names)[p1.move1] << ", " << (*move_names)[p1.move2] << ", " << (*move_names)[p1.move3] << ", " << (*move_names)[p1.move4] << std::endl;
	std::cout << (int)p1.pp1 << "/" << (int)(*move_base_pp)[p1.move1] << " " << (int)p1.pp2 << "/" << (int)(*move_base_pp)[p1.move2] << " " << (int)p1.pp3 << "/" << (int)(*move_base_pp)[p1.move3] << " " << (int)p1.pp4 << "/" << (int)(*move_base_pp)[p1.move4] << std::endl;

	delete move_names;
	delete move_base_pp;
	return 0;
}