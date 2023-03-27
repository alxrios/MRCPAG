#include <string>

class shelf {
	
	public:
		void chargeInfo();
		void printInfo();
		shelf(); //default constructor
		void actualizeCpage();
		void deleteBook(int);
	
	private:
		std::string names[12];
		int currentPage[12];
		int totalPages[12];
		std::string filePath[12];
		int length; //Same as previous arrays size
		void writeFfile();
		
};
