#pragma once
#include <array>
#include "character.h"

class map {
	int rooms[8];
	int loadRoom(int,character);
	map(int);
};