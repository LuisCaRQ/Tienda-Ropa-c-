#ifndef MENU_COMPRAS_H
#define MENU_COMPRAS_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <archivos.h>
#include <venta.h>


class menu_compras
{
    public:
        menu_compras(){};
        virtual ~menu_compras(){};
        void start_menu();
        void setCurrentClient(string);
        string getCurrentClient();
        void condicionCamisa(int,string);
        void condicionPantalon(int,string);
        void condicionZapato(int,string);
    protected:

    private:
        archivos file;
        string currentClient;
        venta sell;
};

#endif // MENU_COMPRAS_H
