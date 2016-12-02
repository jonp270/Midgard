#include "character.h" // so that we can access the functions and vars in the header.

//functions def go below.

fighter::fighter()
{
	str = 12;
	dex = 10;
	hp = 20;
	mp = 5;
	intelligence = 8;
	wis = 8;
	def = 5;
	res = 2;

}

mage::mage()
{
	str = 8;
	dex = 8;
	hp = 15;
	mp = 10;
	intelligence = 12;
	wis = 10;
	def = 2;
	res = 5;

}

theif::theif()
{
	str = 10;
	dex = 12;
	hp = 25;
	mp = 5;
	intelligence = 8;
	wis = 8;
	def = 4;
	res = 3;
}