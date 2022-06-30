#include "factorySuit.h"
#include "MangaLarga.h"
using namespace std;

void factorySuit::newSuit(){
    string code;
    system("cls");
    cout << " ------ Menu ------" << endl << endl;
    cout << "   1. executiveSuit" << endl << endl;
    cout << "   2. sportSuit" << endl << endl;
    cout << "   3. workSuit" << endl << endl;
    cout << "   4. Return" << endl << endl;
    cout << "Select the type of suit: " << endl;

    int option;
    cin >> option;
    switch(option) {
        case 1:
            suit = new executiveSuit();
            suit->setType("executive suit");
            suit->createTshirt();
            suit->createPants();
            suit->createShoe();
            system("cls");
            cin.ignore();
            cout<< "Enter suit code: ";
            getline(cin,code);
            suit->setCode( code );
            cout << suit->getCamisAbstr()->getPrice() << endl;
            cout << suit->getPantalonAbstr()->getPrice() << endl;
            cout << suit->getZapatoAbstr()->getPrice() << endl;
            suit->setPrice(suit->getCamisAbstr()->getPrice() + suit->getPantalonAbstr()->getPrice() + suit->getZapatoAbstr()->getPrice()) ;
            file.addSuitFile(suit);
            cout<< "Suit added successfully" <<endl;
            system("PAUSE");

        break;
        case 2:
            suit = new sportSuit();
            suit->setType("Sport Suit");
            suit->createTshirt();
            suit->createPants();
            suit->createShoe();
            system("cls");
            cin.ignore();
            cout<< "Enter suit code: ";
            getline(cin,code);
            suit->setCode( code );
            cout << suit->getCamisAbstr()->getPrice() << endl;
            cout << suit->getPantalonAbstr()->getPrice() << endl;
            cout << suit->getZapatoAbstr()->getPrice() << endl;
            suit->setPrice(suit->getCamisAbstr()->getPrice() + suit->getPantalonAbstr()->getPrice() + suit->getZapatoAbstr()->getPrice()) ;
            file.addSuitFile(suit);
            cout<< "Suit added successfully" <<endl;
            system("PAUSE");

        break;
        case 3:
            suit = new workSuit();
            suit->setType("Work Suit");
            suit->createTshirt();
            suit->createPants();
            suit->createShoe();
            system("cls");
            cin.ignore();
            cout<< "Enter suit code: ";
            getline(cin,code);
            suit->setCode( code );
            cout << suit->getCamisAbstr()->getPrice() << endl;
            cout << suit->getPantalonAbstr()->getPrice() << endl;
            cout << suit->getZapatoAbstr()->getPrice() << endl;
            suit->setPrice(suit->getCamisAbstr()->getPrice() + suit->getPantalonAbstr()->getPrice() + suit->getZapatoAbstr()->getPrice()) ;
            file.addSuitFile(suit);
            cout<< "Suit added successfully" <<endl;
            system("PAUSE");

        break;

        case 4:

        break;

        default:
                cin.ignore();
                cout << "\nOption no avaible\n"<<endl;
                system("PAUSE");
                system("cls");
    }
}

