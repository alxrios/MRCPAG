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
	std::string filePath[12];
	for (int i = 0; i < length; i++) {
		std::cout << i + 1 << ".Name: ";
		getline(std::cin, names[i]);
		std::cout << i + 1 << ".current page: ";
		std::cin >> currentPage[i];
		std::cout << i + 1 << ".total pages: ";
		std::cin >> totalPages[i];
		std::cin.ignore();
		std::cout << i + 1 << ".File path: ";
		getline(std::cin, filePath[i]);
		// std::cin.ignore();
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

void writeClass::writeFile2() {
	std::cout << "Current books reading info...\n";
	std::cout << "Please introduce subject, name, current page and total number of pages of each book\n\n";
	std::string subject[12];
	std::string names[12];
	int currentPage[12];
	int totalPages[12];
	int length = 12;
	std::string filePath[12];
	for (int i = 0; i < length; i++) {
		std::cout << i + 1 << ".Subject: ";
		getline(std::cin, subject[i]);
		std::cout << i + 1 << ".Name: ";
		getline(std::cin, names[i]);
		std::cout << i + 1 << ".current page: ";
		std::cin >> currentPage[i];
		std::cout << i + 1 << ".total pages: ";
		std::cin >> totalPages[i];
		std::cin.ignore();
		std::cout << i + 1 << ".File path: ";
		getline(std::cin, filePath[i]);
		// std::cin.ignore();
	}
	
	// Writing to file
	std::ofstream outfile;
	outfile.open("MRCPAG2.txt");
	for (int i = 0; i < length; i++) {
		outfile << subject[i] << "\n";
		outfile << names[i] << "\n";
		outfile << currentPage[i] << "\n";
		outfile << totalPages[i] << "\n";
		outfile << filePath[i] << "\n";
	}
	outfile.close();
}
