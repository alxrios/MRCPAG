#include "AskWrite.h"
#include "WriteClass.h"
#include <iostream>

AskWrite::AskWrite()
{
    //ctor
}

AskWrite::~AskWrite()
{
    //dtor
}

void AskWrite::ask() {
	std::cout << "Do you wanna write the file for the first time?: (y/n)\n";
	char option = 'n';
	std::cin >> option;
	std::cin.ignore();
	if (option == 'y') {
		WriteClass::writeFile();
	}
}

void AskWrite::ask2() {
	std::cout << "Do you wanna write the file 2 for the first time?: (y/n)\n";
	char option = 'n';
	std::cin >> option;
	std::cin.ignore();
	if (option == 'y') {
		WriteClass::writeFile2();
	}
}