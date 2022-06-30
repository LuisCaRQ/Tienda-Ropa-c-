#include "cliente.h"


///////////////////////////SET'S//////////////////////////
void cliente::setPagoSuscrip(double pago){
    pagoSuscrip = pago;
}

void cliente::setNombre(string parameter){
    nombre = parameter;
}

void cliente::setCedula(string parameter){
    cedula = parameter;
}

void cliente::setCorreo(string parameter){
    corrElec = parameter;
}

void cliente::setCiudad(string parameter){
    ciudad = parameter;
}

void cliente::setPais(string parameter){
    pais = parameter;
}

void cliente::setNacionalidad(string parameter){
    nacionalidad = parameter;
}

void cliente::setClienteFrecuente(bool parameter){
    clienteFrecuente = parameter;
}
///////////////////////////GET'S//////////////////////////
string cliente::getNombre(){
    return nombre;
}

string cliente::getCedula(){
    return cedula;
}

string cliente::getCorreo(){
    return corrElec;
}

string cliente::getCiudad(){
    return ciudad;
}

string cliente::getPais(){
    return pais;
}

double cliente::getPago(){
    return pagoSuscrip;
}

string cliente::getNacionalidad(){
    return nacionalidad;
}

bool cliente::getClienteFrecuente(){
    return clienteFrecuente;
}

