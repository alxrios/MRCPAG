#include <string>

class shelf {
	
	public:
		void chargeInfo();
		void printInfo();
		shelf(); //default constructor
		void actualizeCpage();
		void deleteBook(int);
		void renameBook(int);
		static const int length = 14;
	
	private:
		std::string names[length];
		int currentPage[length];
		int totalPages[length];
		std::string filePath[length];
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
		static const int length = 30;
	private:
		std::string subject[length];
		std::string names[length];
		int currentPage[length];
		int totalPages[length];
		std::string filePath[length];
		void writeFfile();
};
