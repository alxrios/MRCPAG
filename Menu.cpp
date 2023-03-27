#include "Menu.h"
#include <iostream>
#include "askWrite.h"


void Menu::display(bool & end, shelf books) {
	std::cout << "\nChoose an option:\n";
	std::cout << "1. Write the file with input introduced by the console.\n";
	std::cout << "2. Actualize current page of a book.\n";
	std::cout << "3. Delete a book.\n";
	std::cout << "4. Rename a book.\n";
	std::cout << "5. Actualize the total number of pages of a book\n";
	std::cout << "6. Print the into.\n";
	std::cout << "9. End program.\n";
	int option;
	std::cin >> option;
	// std::cout << "Your option was: " << option;
	if (option == 9) {
		end = true;
	}
	switch(option) {
		case 1:
			askWrite::ask();
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
			books.printInfo();
			books.chargeInfo();
			break;
		case 6:
			books.printInfo();
			break;
	}
}