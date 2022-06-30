#ifndef VENTA_H
#define VENTA_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <AbstractSuit.h>
#include <time.h>
#include <sstream >
using namespace std;
class venta
{
    public:

        venta(){};
        virtual ~venta(){};
        void addVenta(string,string,string);
        void viewBill(AbstractSuit*);

        string getId_factura();
        string getId_Cliente();
        string getId_traje();
        string getSuitPrice();
        double getIva();
        double getGanancia();
        double getTotalPrice();

        string getTransporteCodigo();
        string getTransportePrecio();
        string getTransportePais();
        string getTransporteCiudad();


    protected:

    private:
        string id_factura = "";
        string id_Cliente;
        string id_traje;
        string suitPrice;
        double iva;
        double ganancia;
        double totalPrice;
        int index;
        string transporteCodigo[9] = {"0001","0002","0003","0004","0005","0006","0007","0008","0009"};
        string transportePrecio[9] = {"100.00","200.00","250.00","150.00","175.00","160.00","200.00","150.00","50.00"};
        string transportePais[9]   = {"EE-UU","Francia","Italia","Brasil","Argentina","Canada","Inglaterra","EE-UU","CR"};
        string transporteCiudad[9] = {"New York","Paris","Milan","Brasilia","Buenos Aires","Ontario","Londres","California","San Jose"};

};

#endif // VENTA_H
