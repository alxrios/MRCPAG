#include <iostream>
#include <fstream>
#include "MRCPAG.h"


shelf::shelf() {
	length = 12;
	for (int i = 0; i < length; i++) {
		names[i] = "";
		currentPage[i] = 0;
		totalPages[i] = 0;
		filePath[i] = "";
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
		getline(infile, filePath[i]);
		// infile.ignore();
	}
	infile.close();
	
	
}

void shelf::printInfo() {
	std::cout << "BOOK SHELF INFO:(book name, current page, total pages):\n________________________________________________________\n\n";
	float percent;
	for (int i = 0; i < length; i++) {
		std::cout.precision(3);
		percent = (static_cast<float>(currentPage[i])/static_cast<float>(totalPages[i]))*100.0;
		std::cout << i + 1 << ". " << names[i] << " " << currentPage[i] << " " << totalPages[i] << " " << percent << "%\n";
		std::cout << filePath[i];
		std::cout << "\n---------------------------------------------------------------\n";
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
		outfile << filePath[i] << "\n";
	}
	outfile.close();
}

void shelf::deleteBook(int index) {
	for (int i = index - 1; i < length - 1; i++) {
		names[i] = names[i + 1];
		currentPage[i] = currentPage[i + 1];
		totalPages[i] = totalPages[i + 1];
		filePath[i] = filePath[i + 1];
	}
	names[length - 1] = "";
	currentPage[length - 1] = 0;
	totalPages[length - 1] = 0;
	filePath[length - 1] = "";
	writeFfile();
}


void shelf::renameBook(int index) {
	std::cout << "Introduce the new name: ";
	std::string newName;
	std::cin.ignore();
	getline(std::cin, newName);
	names[index - 1] = newName;
	writeFfile();
}

















