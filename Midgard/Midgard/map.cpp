#include "map.h"
#include "character.h"
#include <iostream>
int map::loadRoom(int direction, character bob)
{
	// 1 = n, 2 = w, 3 = s, 4 = e
	int roomLoad = -1;
	if (direction != 0)
	{
		if (direction == 1)
		{
			bob.posY = bob.posY + 1;
		}
		else if (direction == 2)
		{
			bob.posX = bob.posX - 1;
		}
		else if (direction == 3)
		{
			bob.posY = bob.posY - 1;
		}
		else if (direction == 4)
		{
			bob.posX = bob.posX + 1;
		}

		else if (bob.posY == 0 && bob.posX == 0)
		{
			roomLoad = 0;
		}
		else if (bob.posY == 0 && bob.posX == 1)
		{
			roomLoad = 1;
		}
		else if (bob.posY == 0 && bob.posX == 2)
		{
			roomLoad = 2;
		}
		else if (bob.posY == 1 && bob.posX == 0)
		{
			roomLoad = 3;
		}
		else if (bob.posY == 1 && bob.posX == 1)
		{
			roomLoad = 4;
		}
		else if (bob.posY == 1 && bob.posX == 2)
		{
			roomLoad = 5;
		}
		else if (bob.posY == 2 && bob.posX == 0)
		{
			roomLoad = 6;
		}
		else if (bob.posY == 2 && bob.posX == 1)
		{
			roomLoad = 7;
		}
		else if (bob.posY == 2 && bob.posX == 2)
		{
			roomLoad = 8;
			bob.position = roomLoad;
		}
		else
		{
			std::cout << "You cant walk through walls dummy" << std::endl;
			return bob.position;
		}

	}

	else
	{
		std::cout << "You enter a barren cellar, you pulled a bad card down here in prison and now you get to clear this place of fifi's so that the top dogs can use it to store stuff they dont want there bosses to see." << std::endl;
		bob.position = 0;
	}
	
	switch (roomLoad) {
		case 0:
			std::cout << "This room is empty and has stairs leading back up to the roof" << std::endl;
			bob.position = 0;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 1:
			std::cout << "This room much like the others is barren. 1";
			bob.position = 1;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 2:
			std::cout << "This room much like the others is barren. 2";
			bob.position = 2;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 3:
			std::cout << "This room much like the others is barren. 3";
			bob.position = 3;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 4:
			std::cout << "This room much like the others is barren. 4";
			bob.position = 4;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 5:
			std::cout << "This room much like the others is barren. 5";
			bob.position = 5;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 6:
			std::cout << "This room much like the others is barren. 6";
			bob.position = 6;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 7:
			std::cout << "This room much like the others is barren. 7";
			bob.position = 7;
			bob.posY = 0;
			bob.posX = 0;
			break;
		case 8:
			std::cout << "This room much like the others is barren. 8";
			bob.position = 8;
			bob.posY = 0;
			bob.posX = 0;
			break;
	}


}

map::map(int numberRooms) {
	for (int c = 0; c >= numberRooms; c++)
	{
		rooms[c] = c;
	}
}

