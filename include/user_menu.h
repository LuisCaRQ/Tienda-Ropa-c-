#ifndef USER_MENU_H
#define USER_MENU_H
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

class user_menu
{
    public:
        user_menu(){};
        virtual ~user_menu(){};
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

#endif // USER_MENU_H
