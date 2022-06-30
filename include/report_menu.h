#ifndef REPORT_MENU_H
#define REPORT_MENU_H
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

class report_menu
{
    public:
        report_menu(){};
        virtual ~report_menu(){};
        void start_menu();
        void trajesStock();
        void condicionCamisa(int,string);
        void condicionPantalon(int,string);
        void condicionZapato(int,string);
        void clientesFisicos();
        void clientesEmpresa();
        void ventasSinGanancia();
        void ventasConGanancia();
        void ventaNeta();


    protected:

    private:
        archivos file;
};

#endif // REPORT_MENU_H
