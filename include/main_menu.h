#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <manu_manteniment.h>
#include "user_menu.h"
#include "directSale_menu.h"

using namespace std;

class main_menu
{
    public:
        main_menu(){};
        virtual ~main_menu(){};
        start_menu();

    protected:

    private:
        user_menu user_menu;
        manu_manteniment menu_manteniment;
        directSale_menu direct_menu;
};

#endif // MAIN_MENU_H
