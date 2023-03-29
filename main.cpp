#include <iostream>
#include <fstream>
#include "writeClass.h"
#include "askWrite.h"
#include "Menu.h"
#include "ProgressBar.h"

int main() {
	
	
	shelf bookShelf;
	shelf2 bookShelf2;
	
	
	bool end = false;
	while (!end) {
		Menu::display(end, bookShelf, bookShelf2);
	}
	
	
	
	return 0;
}


//Notes add at the first of the file the 
//info with the number of rows in the table
// Example: number of items: 8 or current length
// Read funciton must skip this line


// Note 4: make a txt file which contains paths of .exe applications for
// Easy launch with PowerShell. Ex: firefox.exe path.


// Note 5: Add types control in each input by the user to make the program less breakable.



