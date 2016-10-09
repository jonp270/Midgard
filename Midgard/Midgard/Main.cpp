// Main file, this is where everything gets ran from and more importantly where the exe will start from. also // means everything that follows is a comment. multi lines go like /* */
#include <iostream> // #include means to add code that would not otherwise be useable, in this case "iostream" so that we can print text to a cmd.
using namespace std; // This makes it so we dont have to type commands like "std::cout" and instead just use "cout" there are more than one and sometimes you can use this but for our purposes this is helpful.
/*
multi line comment,

Brief instructions on running. up top you will see something that says debug clicking on it you will find start debugging and start without debugging. until later you will always want without debugging. use that to start the program and run it, the shortcut is control + F5.

http://www.cplusplus.com/doc/tutorial/ is a link to basic programming tutorials in the syntax of the c++ language. this will not cover everthing we do but the important building blocks we will be going over.

//the following is a list of things that need done to continue code, im leaving and updating this so that at anytime we can come back and change thigns that we need to.
todo: create a char function, create first map, discuss tutorial or no tutorial, opening menu (start, load, exit).

following is int main, this is where the code will always start, its a special function that tells the computer hey this is where your starting. everything we do comes out of there.
*/
int main() {

	cout << "hello World" << endl; // cout refers to write text to cmd. << refers to the output flow (<< = out, >> = in) "" anything inside quotation marks refers to a string or text like your reading. endl means to end the line and the next output should be put on the next line.



	system("pause"); // system is a function call to windows, pause refers to the command on cmd meaning to "pause" the current output. a cheap and easy way to see whats going on with code.
	return 0; // return means to get out of a function, in this case its the main function meaning when this is called the program exits. The code 0 that we return means we exited correctly.
}