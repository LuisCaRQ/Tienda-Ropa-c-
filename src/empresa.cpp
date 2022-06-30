#include "empresa.h"

void empresa::update(){
    string input;
    setPagoSuscrip(400.00);
    cin.ignore();
    cout << "   Name: " ;          getline(cin,input); setNombre(input);
    cout << "   Id: " ;             getline(cin,input); setCedula(input);
    cout << "   Email: ";           getline(cin,input); setCorreo(input);
    cout << "   City: ";           getline(cin,input); setCiudad(input);
    cout << "   Country: ";        getline(cin,input); setPais(input);


    do{
        cout << "   Regular client(S/N): ";
        getline(cin,input);
        if(input == "S" || input == "s"){
            setClienteFrecuente(true);
            break;
        }
        if(input == "N" || input == "n"){
            setClienteFrecuente(false);
            break;
        }else{
            cout << "   Invalid option" << endl;
        }

    }while(true);

    cout << "\n\n";

}


