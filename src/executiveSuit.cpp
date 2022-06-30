#include "executiveSuit.h"



CamisAbstr* executiveSuit::createTshirt(){
    system("cls");
    string code;
    camisa = new MangaLarga();
    camisa->setCondicion(selectOption("lisa","Tshirt"));
    cout << endl;
    camisa->setColor(selectColor("Tshirt"));
    cout << endl;
    int tshirtSize = selectSize("Tshirt");
    cout << endl;
    switch(tshirtSize) {
        case 1:
             if(camisa->getCondicion()){ camisa->setPrice(375.00); }else{ camisa->setPrice(325.00); }
        break;
        case 2:
             if(camisa->getCondicion()){ camisa->setPrice(315.00); }else{ camisa->setPrice(280.00); }
        break;
        case 3:
             if(camisa->getCondicion()){ camisa->setPrice(175.00); }else{ camisa->setPrice(150.00); }
        break;
        case 4:
            if(camisa->getCondicion()){ camisa->setPrice(165.00); }else{ camisa->setPrice(125.00); }
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

PantalonAbstr* executiveSuit::createPants(){
    system("cls");
    string code;
    pantalon = new DeVestir();
    pantalon->setCondicion(selectOption("casimir","Pantalon"));
    cout << endl;
    pantalon->setColor(selectColor("Pantalon"));
    cout << endl;
    int pantsSize = selectSize("Pantalon");
    cout << endl;
    switch(pantsSize) {
        case 1:
             if(pantalon->getCondicion()){ pantalon->setPrice(500.00); }else{ pantalon->setPrice(300.00); }
        break;
        case 2:
             if(pantalon->getCondicion()){ pantalon->setPrice(450.00); }else{ pantalon->setPrice(250.00); }
        break;
        case 3:
             if(pantalon->getCondicion()){ pantalon->setPrice(260.00); }else{ pantalon->setPrice(125.00); }
        break;
        case 4:
            if(pantalon->getCondicion()){ pantalon->setPrice(200.00); }else{ pantalon->setPrice(100.00); }
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

ZapatoAbstr* executiveSuit::createShoe(){
    system("cls");
    string code;
    zapato = new ejecutivo();
    cout << endl;
    zapato->setCondicion(selectOption("fino","zapato"));
    cout << endl;
    zapato->setColor(selectColor("zapato"));
    cout << endl;
    int shoeSize = selectSize("zapato");
    switch(shoeSize) {
        case 1:
             if(zapato->getCondicion()){ zapato->setPrice(450.00); }else{ zapato->setPrice(400.00); }
        break;
        case 2:
             if(zapato->getCondicion()){ zapato->setPrice(400.00); }else{ zapato->setPrice(350.00); }
        break;
        case 3:
             if(zapato->getCondicion()){ zapato->setPrice(325.00); }else{ zapato->setPrice(250.00); }
        break;
        case 4:
            if(zapato->getCondicion()){ zapato->setPrice(200.00); }else{ zapato->setPrice(175.00); }
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
