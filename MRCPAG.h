#include <string>

class shelf {
	
	public:
		void chargeInfo();
		void printInfo();
		shelf(); //default constructor
		void actualizeCpage();
		void deleteBook(int);
		void renameBook(int);
	
	private:
		std::string names[12];
		int currentPage[12];
		int totalPages[12];
		std::string filePath[12];
		int length; //Same as previous arrays size
		void writeFfile();
		
};


class shelf2 : public shelf {
	public:
		shelf2();
		void printInfo();
		void chargeInfo();
		void actualizeCpage();
		void deleteBook(int);
		void renameBook(int);
	private:
		std::string subject[30];
		std::string names[30];
		int currentPage[30];
		int totalPages[30];
		std::string filePath[30];
		int length; //Same as previous arrays size
		void writeFfile();
};

