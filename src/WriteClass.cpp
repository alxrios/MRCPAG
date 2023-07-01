#include "WriteClass.h"
#include <iostream>
#include <fstream>
#include <string>
#include "shelf.h"
#include "shelf2.h"

WriteClass::WriteClass()
{
    //ctor
}

WriteClass::~WriteClass()
{
    //dtor
}

void WriteClass::writeFile() {
	std::cout << "Current books reading info...\n";
	std::cout << "Please introduce name, current page and total number of pages of each book\n\n";
	std::string names[Shelf::length];
	int currentPage[Shelf::length];
	int totalPages[Shelf::length];
	std::string filePath[Shelf::length];
	for (int i = 0; i < Shelf::length; i++) {
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
	for (int i = 0; i < Shelf::length; i++) {
		outfile << names[i] << "\n";
		outfile << currentPage[i] << "\n";
		outfile << totalPages[i] << "\n";
		outfile << filePath[i] << "\n";
	}
	outfile.close();
}

void WriteClass::writeFile2() {
	std::cout << "Current books reading info...\n";
	std::cout << "Please introduce subject, name, current page and total "
		"number of pages of each book\n\n";
	std::string subject[Shelf2::length];
	std::string names[Shelf2::length];
	int currentPage[Shelf2::length];
	int totalPages[Shelf2::length];
	std::string filePath[Shelf2::length];
	for (int i = 0; i < Shelf2::length; i++) {
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
	for (int i = 0; i < Shelf2::length; i++) {
		outfile << subject[i] << "\n";
		outfile << names[i] << "\n";
		outfile << currentPage[i] << "\n";
		outfile << totalPages[i] << "\n";
		outfile << filePath[i] << "\n";
	}
	outfile.close();
}