#include <iostream>
#include <fstream>
#include "MRCPAG.h"


shelf::shelf() {
	length = 12;
	for (int i = 0; i < length; i++) {
		names[i] = "";
		currentPage[i] = 0;
		totalPages[i] = 0;
	}
}

void shelf::chargeInfo() {
	//First approach to charge info from file
	//Lets charge info from the user
	std::ifstream infile;
	infile.open("MRCPAG.txt");
	//skip first line here
	for (int i = 0; i < length; i++) {
		getline(infile, names[i]);
		infile >> currentPage[i];
		infile >> totalPages[i];
		infile.ignore();
	}
	infile.close();
	
	
}

void shelf::printInfo() {
	std::cout << "BOOK SHELF INFO:(book name, current page, total pages):\n________________________________________________________\n\n";
	for (int i = 0; i < length; i++) {
		std::cout << i + 1 << ". " << names[i] << " " << currentPage[i] << " " << totalPages[i] << "\n";
		std::cout << "---------------------------------------------------------------\n";
	}
}


void shelf::actualizeCpage() {
	std::cout << "Wich book do you want to actualize? (Introduce index): ";
	int index;
	std::cin >> index;
	std::cout << "Introduce the current page: ";
	int cpage;
	std::cin >> cpage;
	currentPage[index - 1] = cpage;
	writeFfile();
}


void shelf::writeFfile() {
	std::ofstream outfile;
	outfile.open("MRCPAG.txt");
	for (int i = 0; i < length; i++) {
		outfile << names[i] << "\n";
		outfile << currentPage[i] << "\n";
		outfile << totalPages[i] << "\n";
	}
	outfile.close();
}

void shelf::deleteBook(int index) {
	for (int i = index - 1; i < length - 1; i++) {
		names[i] = names[i + 1];
		currentPage[i] = currentPage[i + 1];
		totalPages[i] = totalPages[i + 1];
	}
	names[length - 1] = "";
	currentPage[length - 1] = 0;
	totalPages[length - 1] = 0;
	writeFfile();
}




















