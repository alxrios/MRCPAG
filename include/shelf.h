#ifndef SHELF_H
#define SHELF_H

#include <string>

class Shelf
{
    public:
        Shelf();
        virtual ~Shelf();
		void chargeInfo();
		void printInfo();
		shelf(); //default constructor
		void actualizeCpage();
		void deleteBook(int);
		void renameBook(int);
		static const int length = 14;

    protected:

    private:
		std::string names[length];
		int currentPage[length];
		int totalPages[length];
		std::string filePath[length];
		void writeFfile();
};

#endif // SHELF_H