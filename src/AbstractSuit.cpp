#include "AbstractSuit.h"


bool AbstractSuit::selectOption(string condicion, string prenda){
    int option;
    cout << "Quiere la "<< prenda << " " << condicion << "?" <<endl;
    cout << "0- No: " << endl;
    cout << "1- Si: " << endl;
    cout << "Select option: " << endl;
    cin >> option;
    switch(option) {
        case 0:
            return false;
        break;
        case 1:
            return true;
        break;
        default:
            cout << "Debe estar en la lista de opciones" << endl;
    }
    return false;
}


string AbstractSuit::selectColor(string prenda){
    int option;
    cout << "Seleccione el color de " << prenda << endl;
    cout << "1- Negro " << endl;
    cout << "2- Blanco " << endl;
    cout << "3- Azul: " << endl;
    cout << "Select color: " << endl;
    cin >> option;
    switch(option) {
        case 1:
            return "Negro";
        break;
        case 2:
            return "Blanco";
        break;
        case 3:
            return "Azul";
        break;

        default:
            cout << "Debe estar en la lista de opciones" << endl;
    }
    return 0;
}


int AbstractSuit::selectSize(string prenda){
    int option;
    cout << "Seleccione el size de " << prenda << ":" <<endl;
    cout << "1- Grande " << endl;
    cout << "2- mediana " << endl;
    cout << "3- Small: " << endl;
    cout << "4- kid: " << endl;
    cout << "Select size: " << endl;
    cin >> option;
    switch(option) {
        case 1:
            return 1;
        break;
        case 2:
            return 2;
        break;
        case 3:
            return 3;
        break;
        case 4:
            return 4;
        break;

        default:
            cout << "Debe estar en la lista de opciones" << endl;
    }
    return 0;
}

CamisAbstr*  AbstractSuit::getCamisAbstr(){
    return camisa;
}
PantalonAbstr*  AbstractSuit::getPantalonAbstr(){
    return pantalon;
}
ZapatoAbstr*  AbstractSuit::getZapatoAbstr(){
    return zapato;
}

void  AbstractSuit::setType(string parameter){
    type = parameter;
}
void  AbstractSuit::setPrice(double parameter){
    price = parameter;
}
void  AbstractSuit::setCode(string parameter){
    code = parameter;
}
string  AbstractSuit::getType(){
    return type;
}
double  AbstractSuit::getPrice(){
    return price;
}
string  AbstractSuit::getCode(){
    return code;
}

void AbstractSuit::setCamisAbstr(CamisAbstr* parameter){
    camisa = parameter;
}
void AbstractSuit::setPantalonAbstr(PantalonAbstr* parameter){
    pantalon = parameter;
}
void AbstractSuit::setZapatoAbstr(ZapatoAbstr* parameter){
    zapato = parameter;
}

