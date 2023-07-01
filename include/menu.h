#ifndef MENU_H
#define MENU_H

#include "shelf.h"
#include "shelf2.h"

class Menu
{
    public:
        Menu();
        virtual ~Menu();
		static void display(bool &, Shelf, Shelf2);

    protected:

    private:
		static void displayText();
};

#endif // MENU_H
