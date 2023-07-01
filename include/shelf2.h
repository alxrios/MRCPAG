#ifndef SHELF2_H
#define SHELF2_H

#include <shelf.h>

class Shelf2 : public Shelf
{
    public:
        Shelf2();
        virtual ~Shelf2();
		void printInfo();
		void chargeInfo();
		void actualizeCpage();
		void deleteBook(int);
		void renameBook(int);
		static const int length = 30;

    protected:

    private:
		std::string subject[length];
		std::string names[length];
		int currentPage[length];
		int totalPages[length];
		std::string filePath[length];
		void writeFfile();
};

#endif // SHELF2_H