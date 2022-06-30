#include "sportSuit.h"
#include "Camiseta.h"
#include "tenni.h"
#include "Pantaloneta.h"

CamisAbstr* sportSuit::createTshirt(){
    system("cls");
    string code;
    camisa = new Camiseta();
    camisa->setCondicion(selectOption("CuelloV","Tshirt"));
    cout << endl;
    camisa->setColor(selectColor("Tshirt"));
    cout << endl;
    int tshirtSize = selectSize("Tshirt");
    cout << endl;
    switch(tshirtSize) {
        case 1:
             if(camisa->getCondicion()){ camisa->setPrice(200.00); }else{ camisa->setPrice(150.00); }
        break;
        case 2:
             if(camisa->getCondicion()){ camisa->setPrice(150.00); }else{ camisa->setPrice(100.00); }
        break;
        case 3:
             if(camisa->getCondicion()){ camisa->setPrice(125.00); }else{ camisa->setPrice(75.00); }
        break;
        case 4:
            if(camisa->getCondicion()){ camisa->setPrice(75.00); }else{ camisa->setPrice(50.00); }
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

PantalonAbstr* sportSuit::createPants(){
    system("cls");
    string code;
    pantalon = new Pantaloneta();
    pantalon->setCondicion(selectOption("estampada","Pantaloneta"));
    cout << endl;
    pantalon->setColor(selectColor("Pantaloneta"));
    cout << endl;
    int pantsSize = selectSize("Pantaloneta");
    cout << endl;
    switch(pantsSize) {
        case 1:
             if(pantalon->getCondicion()){ pantalon->setPrice(150.00); }else{ pantalon->setPrice(110.00); }
        break;
        case 2:
             if(pantalon->getCondicion()){ pantalon->setPrice(130.00); }else{ pantalon->setPrice(85.00); }
        break;
        case 3:
             if(pantalon->getCondicion()){ pantalon->setPrice(260.00); }else{ pantalon->setPrice(50.00); }
        break;
        case 4:
            if(pantalon->getCondicion()){ pantalon->setPrice(200.00); }else{ pantalon->setPrice(45.00); }
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

ZapatoAbstr* sportSuit::createShoe(){
    system("cls");
    string code;
    zapato = new tenni();
    cout << endl;
    zapato->setCondicion(selectOption("adidas","tenni"));
    cout << endl;
    zapato->setColor(selectColor("tenni"));
    cout << endl;
    int shoeSize = selectSize("tenni");
    switch(shoeSize) {
        case 1:
             if(zapato->getCondicion()){ zapato->setPrice(335.00); }else{ zapato->setPrice(225.00); }
        break;
        case 2:
             if(zapato->getCondicion()){ zapato->setPrice(300.00); }else{ zapato->setPrice(200.00); }
        break;
        case 3:
             if(zapato->getCondicion()){ zapato->setPrice(200.00); }else{ zapato->setPrice(150.00); }
        break;
        case 4:
            if(zapato->getCondicion()){ zapato->setPrice(150.00); }else{ zapato->setPrice(75.00); }
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

