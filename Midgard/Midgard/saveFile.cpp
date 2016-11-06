#include "saveFile.h"


void save(character charSave) {
	std::string name;
	int str;
	int hp;
	int dex = 0;
	int mp = 0;
	int intelligence = 0;
	int wis = 0;
	int def = 0;
	int res = 0;
	//order is important for the save file;
	name = charSave.name;
	hp = charSave.hp;
	mp = charSave.mp;
	str = charSave.str;
	dex = charSave.dex;
	intelligence = charSave.intelligence;
	wis = charSave.wis;
	def = charSave.def;
	res = charSave.res;

	std::ofstream charFile;
	charFile.open("character.midgardsave");
	if (charFile.is_open())
	{
		charFile << name << endl;
		charFile << str << endl;
		charFile << hp << endl;
		charFile.close();
	}
}


void load(character charLoad) {
	std::string name;
	int str;
	int hp;
	int dex = 0;
	int mp = 0;
	int intelligence = 0;
	int wis = 0;
	int def = 0;
	int res = 0;


	std::string line;
	std::ifstream charFile;
	charFile.open("character.midgardsave");
	if (charFile.is_open())
	{
		charFile >> charLoad.name;
		charFile >> charLoad.str;
		charFile >> charLoad.hp;
	}
	charFile.close();
}