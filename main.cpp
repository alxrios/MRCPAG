#include <iostream>
#include <fstream>
#include "writeClass.h"
#include "askWrite.h"
#include "Menu.h"

int main() {
	
	/*
	askWrite::ask();
	shelf test;
	test.chargeInfo();
	test.printInfo();
	*/
	
	//Test string lenght
	shelf testShelf;
	testShelf.chargeInfo();
	/*
	std::string test = "this is a test";
	std::cout << "The length obtained is: " << test.length();
	*/
	bool end = false;
	while (!end) {
		Menu::display(end, testShelf);
	}
	
	return 0;
}


//Notes add at the first of the file the 
//info with the number of rows in the table
// Example: number of items: 8 or current length
// Read funciton must skip this line


// Note 2: create a menu function in a class with static void


// Note 3: Add a new line which is going to be the path info of the file.


// Note 4: make a txt file which contains paths of .exe applications for
// Easy launch with PowerShell. Ex: firefox.exe path or dev-cpp.exe path.


