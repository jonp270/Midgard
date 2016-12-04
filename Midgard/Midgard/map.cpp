#include "map.h"
#include "character.h"
#include <iostream>
int map::loadRoom(int direction, character* bob)
{
	// 1 = n, 2 = w, 3 = s, 4 = e
	int orgPos = bob->position; //bobs orginal position
	if (direction != 0)
	{
		if (direction == 1)
		{
			bob->position -= 3;
		}
		else if (direction == 2)
		{
			bob->position -= 1;
		}
		else if (direction == 3)
		{
			bob->position += 3;
		}
		else if (direction == 4)
		{
			bob->position += 1;
		}
		else if (direction == 5)
		{
			bob->position = bob->position; // for our look command, it will just reload the spot we are at.
		}
	}
	else
	{
		std::cout << "You enter a barren cellar, you pulled a bad card down here in prison and now you get to clear this place of fifi's so that the top dogs can use it to store stuff they dont want there bosses to see." << std::endl;
		bob->position = 0;
	}

	if (bob->position >= 0 && bob->position <= 8)
	{

		switch (bob->position) {
		case 0:
			std::cout << "This room is empty and has stairs leading back up to the roof" << std::endl;
			bob->position = 0;
			break;
		case 1:
			std::cout << "This room much like the others is barren. 1" << std::endl;
			bob->position = 1;
			break;
		case 2:
			std::cout << "This room much like the others is barren. 2" << std::endl;
			bob->position = 2;
			break;
		case 3:
			std::cout << "This room much like the others is barren. 3" << std::endl;
			bob->position = 3;
			break;
		case 4:
			std::cout << "This room much like the others is barren. 4" << std::endl;
			bob->position = 4;
			break;
		case 5:
			std::cout << "This room much like the others is barren. 5" << std::endl;
			bob->position = 5;
			break;
		case 6:
			std::cout << "This room much like the others is barren. 6" << std::endl;
			bob->position = 6;
			break;
		case 7:
			std::cout << "This room much like the others is barren. 7" << std::endl;
			bob->position = 7;
			break;
		case 8:
			std::cout << "This room much like the others is barren. 8" << std::endl;
			bob->position = 8;
			break;
		}
	}
	else
	{
		bob->position = orgPos; //if we are not in a room we can be in we need to go back to the one we were in and cout the following.
		std::cout << "you cant walk through walls dummy, use the look or l feature." << std::endl;;
	}

	return 1;
}

map::map(int numberRooms) {
	for (int c = 0; c >= numberRooms; c++)
	{
		rooms[c] = c;
	}
}

