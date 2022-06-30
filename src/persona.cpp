#include "persona.h"

void persona::update(){
    string input;
    setPagoSuscrip(200.00);
    cin.ignore();
    cout << "   Name: " ;          getline(cin,input); setNombre(input);
    cout << "   Id: " ;             getline(cin,input); setCedula(input);
    cout << "   Email: ";           getline(cin,input); setCorreo(input);
    cout << "   City: ";           getline(cin,input); setCiudad(input);
    cout << "   Country: ";        getline(cin,input); setPais(input);
    cout << "   Nationality: ";    getline(cin,input); setNacionalidad(input);
    cout << "\n\n";
}


