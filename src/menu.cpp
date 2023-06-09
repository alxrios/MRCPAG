#include "menu.h"
#include <iostream>
#include "AskWrite.h"

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}

void Menu::displayText() {
	std::cout << "\nChoose an option:\n"
	"1. Write the file with input introduced by the console.\n"
	"2. Actualize current page of a book.\n"
	"3. Delete a book.\n"
	"4. Rename a book.\n"
	"5. Actualize the total number of pages of a book\n"
	"6. Print the info.\n"
	"9. End program.\n";
}

void Menu::display(bool & end, Shelf books, Shelf2 books2) {
	std::cout << "Which file do you want to use? (1/2): ";
	int fileOpt;
	std::cin >> fileOpt;
	if (fileOpt == 1) {
		displayText();
		int option;
		std::cin >> option;
		// std::cout << "Your option was: " << option;
		if (option == 9) {
			end = true;
		} else {
			if (option != 1) {
				books.chargeInfo();
			}
			switch(option) {
				case 1:
					AskWrite::ask();
					break;
				case 2:
					books.actualizeCpage();
					std::cout << "Actualized info:\n";
					books.printInfo();
					books.chargeInfo();
					break;
				case 3:
					std::cout << "Which book do you want to delete? (introduce book index)\n";
					int ind;
					std::cin >> ind;
					books.deleteBook(ind);
					books.chargeInfo();
					books.printInfo();
					break;
				case 4:
					std::cout << "Which book do you want to rename? (introduce book index)\n";
					int indfour;
					std::cin >> indfour;
					books.renameBook(indfour);
					books.chargeInfo();
					books.printInfo();
					break;
				case 5:
					std::cout << "From which book do you want to update the current number of total pages? "
						"(introduce book index)\n";
					break;
				case 6:
					books.printInfo();
					break;
			}
			
		}
		
		
	} else if (fileOpt == 2) {
		displayText();
		int option;
		std::cin >> option;
		// std::cout << "Your option was: " << option;
		if (option == 9) {
			end = true;
		} else {
			if (option != 1) {
				books2.chargeInfo();
			}
			switch(option) {
				case 1:
					AskWrite::ask2();
					break;
				case 2:
					books2.actualizeCpage();
					std::cout << "Actualized info:\n";
					books2.printInfo();
					books2.chargeInfo();
					break;
				case 3:
					std::cout << "Which book do you want to delete? (introduce book index)\n";
					int ind;
					std::cin >> ind;
					books2.deleteBook(ind);
					books2.chargeInfo();
					books2.printInfo();
					break;
				case 4:
					std::cout << "Which book do you want to rename? (introduce book index)\n";
					int indfour;
					std::cin >> indfour;
					books2.renameBook(indfour);
					books2.chargeInfo();
					books2.printInfo();
					break;
				case 5:
					std::cout << "From which book do you want to update the current number of total pages? "
						"(introduce book index)\n";
					break;
				case 6:
					books2.printInfo();
					break;
			}
			
		}
	}
}
