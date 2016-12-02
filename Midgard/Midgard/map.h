#pragma once
#include <array>

class map {
	int rooms[8];

	void room0();
	void room1(); 
	void room2(); 
	void room3(); 
	void room4();
	void room5();
	void room6();
	void room7();
	void room8();
	int loadRoom(int,character);
	map(int);
};