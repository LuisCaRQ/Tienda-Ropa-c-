#include "workSuit.h"
#include "bota.h"
#include "Jeams.h"
#include "ConCuadros.h"

CamisAbstr* workSuit::createTshirt(){
    system("cls");
    string code;
    camisa = new ConCuadros();
    camisa->setCondicion(selectOption("con cuadros","Tshirt"));
    cout << endl;
    camisa->setColor(selectColor("Tshirt"));
    cout << endl;
    int tshirtSize = selectSize("Tshirt");
    cout << endl;
    switch(tshirtSize) {
        case 1:
             if(camisa->getCondicion()){ camisa->setPrice(300.00); }else{ camisa->setPrice(250.00); }
        break;
        case 2:
             if(camisa->getCondicion()){ camisa->setPrice(250.00); }else{ camisa->setPrice(200.00); }
        break;
        case 3:
             if(camisa->getCondicion()){ camisa->setPrice(175.00); }else{ camisa->setPrice(150.00); }
        break;
        case 4:
            if(camisa->getCondicion()){ camisa->setPrice(150.00); }else{ camisa->setPrice(100.00); }
        break;

        default:
            cout << "Debe estar en la lista de opciones" << endl;
    }
    cin.ignore();
    cout<< "Enter code: ";
    getline(cin,code);
    camisa->setCode( code );
    return camisa;
};

PantalonAbstr* workSuit::createPants(){
    system("cls");
    string code;
    pantalon = new Jeams();
    pantalon->setCondicion(selectOption("ajustados","Jeams"));
    cout << endl;
    pantalon->setColor(selectColor("Pantalon"));
    cout << endl;
    int pantsSize = selectSize("Pantalon");
    cout << endl;
    switch(pantsSize) {
        case 1:
             if(pantalon->getCondicion()){ pantalon->setPrice(200.00); }else{ pantalon->setPrice(150.00); }
        break;
        case 2:
             if(pantalon->getCondicion()){ pantalon->setPrice(150.00); }else{ pantalon->setPrice(100.00); }
        break;
        case 3:
             if(pantalon->getCondicion()){ pantalon->setPrice(75.00); }else{ pantalon->setPrice(50.00); }
        break;
        case 4:
            if(pantalon->getCondicion()){ pantalon->setPrice(90.00); }else{ pantalon->setPrice(25.00); }
        break;

        default:
            cout << "Debe estar en la lista de opciones" << endl;
    }

    cin.ignore();
    cout<< "Enter code: ";
    getline(cin,code);
    pantalon->setCode( code );
    return pantalon;
};

ZapatoAbstr* workSuit::createShoe(){
    system("cls");
    string code;
    zapato = new bota();
    cout << endl;
    zapato->setCondicion(selectOption("alta","bota"));
    cout << endl;
    zapato->setColor(selectColor("alta"));
    cout << endl;
    int shoeSize = selectSize("alta");
    switch(shoeSize) {
        case 1:
             if(zapato->getCondicion()){ zapato->setPrice(250.00); }else{ zapato->setPrice(220.00); }
        break;
        case 2:
             if(zapato->getCondicion()){ zapato->setPrice(225.00); }else{ zapato->setPrice(200.00); }
        break;
        case 3:
             if(zapato->getCondicion()){ zapato->setPrice(175.00); }else{ zapato->setPrice(150.00); }
        break;
        case 4:
            if(zapato->getCondicion()){ zapato->setPrice(90.00); }else{ zapato->setPrice(75.00); }
        break;

        default:
            cout << "Debe estar en la lista de opciones" << endl;
    }
    cin.ignore();
    cout<< "Enter code: ";
    getline(cin,code);
    zapato->setCode( code );
    return zapato;
};

