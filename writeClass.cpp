#include "writeClass.h"
#include <iostream>
#include <fstream>
#include <string>


void writeClass::writeFile() {
	std::cout << "Current books reading info...\n";
	std::cout << "Please introduce name, current page and total number of pages of each book\n\n";
	std::string names[12];
	int currentPage[12];
	int totalPages[12];
	int length = 12;
	for (int i = 0; i < length; i++) {
		std::cout << i + 1 << ".Name: ";
		getline(std::cin, names[i]);
		std::cout << i + 1 << ".current page: ";
		std::cin >> currentPage[i];
		std::cout << i + 1 << ".total pages: ";
		std::cin >> totalPages[i];
		getline(std::cin, filePath[i]);
		std::cin.ignore();
	}
	
	// Writing to file
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
