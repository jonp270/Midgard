#include "saveFile.h"
#include "character.h"
#include <fstream>


void save(character bob) {
	std::ofstream charFile;
	charFile.open("character.midgardsave");
	if (charFile.is_open())
	{
		charFile << bob.name << std::endl;
		charFile << bob.str << std::endl;
		charFile << bob.hp << std::endl;
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