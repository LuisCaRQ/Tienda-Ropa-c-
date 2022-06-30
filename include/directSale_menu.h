#ifndef DIRECTSALE_MENU_H
#define DIRECTSALE_MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "onlineSale_menu.h"
#include "menu_compras.h"
#include <cliente.h>
#include <persona.h>
#include <empresa.h>
#include <archivos.h>

using namespace std;
class directSale_menu
{
    public:
        directSale_menu(){};
        virtual ~directSale_menu(){};
        void start_menu();
        void newUser();
        void login();

    protected:

    private:
        onlineSale_menu online_sale;
        menu_compras menuCompras;
        cliente* client;
        archivos file;
        string currentClient;
};

#endif // DIRECTSALE_MENU_H
