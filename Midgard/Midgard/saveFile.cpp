#include "saveFile.h"
#include "character.h"
#include <fstream>


void save(character bob) {
	std::ofstream charFile;
	charFile.open("character.midgardsave");
	if (charFile.is_open())
	{
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
	}
}


void load(character bob) {


	std::string line;
	std::ifstream charFile;
	charFile.open("character.midgardsave");
	if (charFile.is_open())
	{
		charFile >> bob.name;
		charFile >> bob.str;
		charFile >> bob.hp;
	}
	charFile.close();
}