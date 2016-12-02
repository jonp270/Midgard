#include "map.h"
#include "character.h"
int map::loadRoom(int direction, character bob)
{
	int roomLoad = bob.position;
	if (direction != 0) 
	{

	}
	
	switch (roomLoad) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
	}


}

map::map(int numberRooms) {
	for (int c = 0; c >= numberRooms; c++)
	{
		rooms[c] = c;
	}
}

void map::room0()
{
}

void map::room1()
{
}

void map::room2()
{
}

void map::room3()
{
}

void map::room4()
{
}

void map::room5()
{
}

void map::room6()
{
}

void map::room7()
{
}

void map::room8()
{
}
