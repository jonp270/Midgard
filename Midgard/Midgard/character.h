#pragma once // auto included so that nothing every calls this in more than once (which would waste time)
#include <string>
/*
	So header files are used to hold our own set of stuff. Were going to have a decent bit of code in this game so its nice
	to split things apart. Header files are something i started to see in my cop2001 class and were actually going a step beyond that
	with a seperate .cpp file for each header. This might seem weird but its also best and common pratice.
	****************************************************************************************************************************

	The following is what is known as a class and is the bulk of the oop(Object-Oriented Programming.) programming style. Ive given you
	the shell rather then try to start you off with classes (that really wouldnt be fair though there not to difficult once you should come to them)
	I good refrence article i found is http://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/ Note that this is why were on the phone
	together, I just want you to do vars and functions. its alot for one hour so this will probably be your project for a week or three.
*/

class character {
//Varables that only the character can change. so for instance (str) is not something a enemy needs to modify.
public:
	std::string name = " ";
	int str = 0;
	int dex = 0;
	int hp = 0;
	int mp = 0;
	int intelligence = 0;
	int wis = 0;
	int def = 0;
	int res = 0;
	int position = 0;
	virtual void setName(std::string);
//Vars that everyone can see and change. This makes them easy to get to and to use for needed info. Health will most likely need to go here.
// In addition this is also where we will put functions to access the private vars above but more on that later.
//if the enemy can see it, it goes here
};

class fighter: public character {
public:
	fighter(std::string);


};

class mage : public character {
public:
	mage(std::string);
};


class thief : public character {
public:
	thief(std::string);
};
