#ifndef CLIENTE_H
#define CLIENTE_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;
class cliente{
    public:
        cliente(){};
        virtual ~cliente(){};
        virtual void update() = 0;
        void setPagoSuscrip(double);
        void setNombre(string parameter);
        void setCedula(string parameter);
        void setCorreo(string parameter);
        void setCiudad(string parameter);
        void setPais(string parameter);
        void setNacionalidad(string);
        void setClienteFrecuente(bool);

        string getNombre();
        string getCedula();
        string getCorreo();
        string getCiudad();
        string getPais();
        double getPago();
        string getNacionalidad();
        bool getClienteFrecuente();
    private:
        string nombre;
        string cedula;
        string corrElec;
        double pagoSuscrip;
        string ciudad;
        string pais;
        string nacionalidad;
        bool clienteFrecuente;
};

#endif // CLIENTE_H
