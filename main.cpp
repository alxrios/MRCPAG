#include "shelf.h"
#include "shelf2.h"
#include "menu.h"

int main()
{
    Shelf bookShelf;
	Shelf2 bookShelf2;
	
	bool end = false;
	while (!end) {
		Menu::display(end, bookShelf, bookShelf2);
	}
	
    return 0;
}

// Note 5: Add types control in each input by the user to make the program less breakable.

// Note 6: When ask (y/n) question add control of other letters other than y n.

// Note 7: Write a function to easy append a book to the end of shelf (no shelf2).
// outfile.open("test.txt", std::ios_base::app); // append instead of overwrite
// Put "\n" after "user input";