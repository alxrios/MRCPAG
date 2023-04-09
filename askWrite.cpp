#include "askWrite.h"
#include "writeClass.h"
#include <iostream>

void askWrite::ask() {
	std::cout << "Do you wanna write the file for the first time?: (y/n)\n";
	char option = 'n';
	std::cin >> option;
	std::cin.ignore();
	if (option == 'y') {
		writeClass::writeFile();
	}
}

void askWrite::ask2() {
	std::cout << "Do you wanna write the file 2 for the first time?: (y/n)\n";
	char option = 'n';
	std::cin >> option;
	std::cin.ignore();
	if (option == 'y') {
		writeClass::writeFile2();
	}
}
