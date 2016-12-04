// Main file, this is where everything gets ran from and more importantly where the exe will start from. also // means everything that follows is a comment. multi lines go like /* */
#include <iostream> // #include means to add code that would not otherwise be useable, in this case "iostream" so that we can print text to a cmd.
#include "character.h"
#include "Combat.h"
#include "map.h"
#include "enemies.h"
#include "saveFile.h"
using namespace std; // This makes it so we dont have to type commands like "std::cout" and instead just use "cout" there are more than one and sometimes you can use this but for our purposes this is helpful.
/*
multi line comment,

Brief instructions on running. up top you will see something that says debug clicking on it you will find start debugging and start without debugging. until later you will always want without debugging. use that to start the program and run it, the shortcut is control + F5.

http://www.cplusplus.com/doc/tutorial/ is a link to basic programming tutorials in the syntax of the c++ language. this will not cover everthing we do but the important building blocks we will be going over.

//the following is a list of things that need done to continue code, im leaving and updating this so that at anytime we can come back and change thigns that we need to.
todo: create a char function, create first map, discuss tutorial or no tutorial, opening menu (start, load, exit).

following is int main, this is where the code will always start, its a special function that tells the computer hey this is where your starting. everything we do comes out of there.
*/
void gameState(map m, character bob) 
{
	string choice = " ";
	cout << "you may now move around and use the look command. Monsters will also try to kill you in certain rooms until you defeat the boss." << endl;
	cout << "type help if you dont know what to do." << endl;
	while (bob.hp > 0)
	{
		cin >> choice; // error checking

		if (choice == "help" || choice == "Help" || choice == "h" || choice == "H") //check to see if you the user asked for help (|| is or)
		{
			std::system("cls");
			cout << "from this menu you have three choices." << endl;
			cout << "1. look or l will show you what the room looks like as if you had just moved into it." << endl; //gen look is more advanced so that we can see things but in this game its easy to do it small.
			cout << "2. moving is simply done with n,w,e,s. These will move to the next room you need to go to." << endl;
			cout << "3. saving is done by simply typing save. This will save the data, let you know if it saved, and then exit. Note you cannot short hand this to s as that is south" << endl << endl;
		}
		else if (choice == "look" || choice == "Look" || choice == "l" || choice == "L")
		{
			m.loadRoom(5, &bob);
		}
		// this bit would be shortened in a refactor but it wasnt important here. My mistake on coding at 4:30 am.
		else if (choice == "n" || choice == "N" || choice == "s" || choice == "S" || choice == "w" || choice == "W" || choice == "e" || choice == "E")
		{
			if (choice == "n" || choice == "N")
				m.loadRoom(1, &bob);
			else if (choice == "s" || choice == "S")
				m.loadRoom(3, &bob);
			else if (choice == "w" || choice == "W")
				m.loadRoom(2, &bob);
			else if (choice == "e" || choice == "E")
				m.loadRoom(4, &bob);
		}
		else if (choice == "save" || choice == "Save")
		{
			save(bob);
		}
	}
} 

void startGame() {
	string newName;
	int choice;
	map m(8); // we create a instance of the class map and initiliaze it with 9 rooms.
	cout << "What is your name prisoner?" << endl;
	cin >> newName; // should prob do some error checking here but we might skip since this is a learning rather than a full on, or do it with justin on rather than solo.
	cout << "what class would you like to play. Please submit 1, 2, or 3." << endl;
	cout << "1. fighter" << endl << "2. mage " << endl << "3. thief" << endl;
	cin >> choice; //same as last cin

	if (choice == 1)
	{
		fighter bob(newName);
		m.loadRoom(0, &bob);
		gameState(m, bob);
	}
	else if (choice == 2)
	{
		mage bob(newName);
		m.loadRoom(0, &bob);
		gameState(m, bob);
	}
	else if (choice == 3)
	{
		thief bob(newName);
		m.loadRoom(0, &bob);
		gameState(m, bob);
	}
	else
	{
		cout << "you are now nothing and the game will crash";
	}
}

void startGame(character bob)
{
	int choice;
	map m(8); // we create a instance of the class map and initiliaze it with 9 rooms.
	m.loadRoom(5, &bob); // call the look function on our current room.
	gameState(m, bob);
}

int main() {
	int number = 0;
	//cout << "hello World" << endl; // cout refers to write text to cmd. << refers to the output flow (<< = out, >> = in) "" anything inside quotation marks refers to a string or text like your reading. endl means to end the line and the next output should be put on the next line.
	
	cout << "welcome to midgard";
	cout << "please pick an option" << endl;
	character bob;
	// switch statement inside a do while loop.
	do {
		// menu options
		cout << "1. Start a new game" << endl;
		cout << "load saved game." << endl;
		cout << "3. Quit" << endl;
		cout << "to quit please press 0" << endl;
		cin >> number;
			// Train of thought: needs an input to change out of munu options 1.
			// user choice^
		switch (number) {
		case 1:
			startGame();
			break;
		case 2:
			bob = load();
			startGame(bob);
			break;
		case 3: cout << "Hope you enjoyed the game!" << endl;
			number = 0;
			break;	
		}

	} while (number != 0);
		


	std::system("pause"); // system is a function call to windows, pause refers to the command on cmd meaning to "pause" the current output. a cheap and easy way to see whats going on with code.
	return 0; // return means to get out of a function, in this case its the main function meaning when this is called the program exits. The code 0 that we return means we exited correctly.
}