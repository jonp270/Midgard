#include "saveFile.h"
#include "character.h"
#include <fstream>
#include <iostream>


void save(character bob) {
	std::ofstream charFile;
	charFile.open("character.midgardsave");
	if (charFile.is_open())
	{
		charFile << bob.job << std::endl;
		charFile << bob.name << std::endl;
		charFile << bob.hp << std::endl;
		charFile << bob.mp << std::endl;
		charFile << bob.str << std::endl;
		charFile << bob.dex << std::endl;
		charFile << bob.intelligence << std::endl;
		charFile << bob.wis << std::endl;
		charFile << bob.def << std::endl;
		charFile << bob.res << std::endl;
		charFile << bob.position << std::endl;
		charFile.close();
		std::cout << "savefile saved" << std::endl;
	}
}


character load() {

	character bob;
	std::string line;
	std::ifstream charFile;
	charFile.open("character.midgardsave");
	if (charFile.is_open())
	{
		std::string::size_type sz;
		std::getline(charFile, line);
		bob.job = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.name = line;
		std::getline(charFile, line);
		bob.hp = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.mp = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.str = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.dex = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.intelligence = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.wis = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.def = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.res = std::stoi(line, &sz);
		std::getline(charFile, line);
		bob.position = std::stoi(line, &sz);
	}
	charFile.close();
	return bob;
}