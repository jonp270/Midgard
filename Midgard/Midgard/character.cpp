#include "character.h" // so that we can access the functions and vars in the header.

//functions def go below.

fighter::fighter(std::string givenName)
{
	str = 12;
	dex = 10;
	hp = 20;
	mp = 5;
	intelligence = 8;
	wis = 8;
	def = 5;
	res = 2;
	job = 1;
	setName(givenName);
}

mage::mage(std::string givenName)
{
	str = 8;
	dex = 8;
	hp = 15;
	mp = 10;
	intelligence = 12;
	wis = 10;
	def = 3;
	res = 5;
	job = 2;
	setName(givenName);
}

thief::thief(std::string givenName)
{
	str = 10;
	dex = 12;
	hp = 15;
	mp = 5;
	intelligence = 8;
	wis = 8;
	def = 4;
	res = 3;
	job = 3;
	setName(givenName);
}

void character::setName(std::string givenName)
{
	name = givenName;
}
