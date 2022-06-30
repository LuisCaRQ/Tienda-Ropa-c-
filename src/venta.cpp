#include "venta.h"

void venta::addVenta(string id_userP, string id_suit, string priceSuit){
    id_factura="";
    srand (time(NULL));
    int random = rand() % 1000 + 1;
    id_Cliente=id_userP;
    id_traje = id_suit;
    suitPrice = priceSuit;
    double suitP = stod(suitPrice);
    ganancia = suitP *  0.8;
    iva = (suitP + ganancia) * 0.15;
    totalPrice = suitP + ganancia + iva;
    id_factura.append(id_Cliente);
    id_factura.append(id_traje);
    stringstream ss;
    ss<<random;
    string s;
    ss>>s;
    id_factura.append(s);
    int option = 1;
    int select;


    while(option) {
        system("cls");

        cout << " ------ Select the area to send the suit ------" << endl << endl;
        cout << "   1. New York / EE-UU" << endl << endl;
        cout << "   2. Paris / Francia" << endl << endl;
        cout << "   3. Milán / Italia" << endl << endl;
        cout << "   4. Brasilia / Brasil" << endl << endl;
        cout << "   5. Buenos Aires / Argentina" << endl << endl;
        cout << "   6. Ontario / Canadá" << endl << endl;
        cout << "   7. Londres / Inglaterra" << endl << endl;
        cout << "   8. California / EE-UU" << endl << endl;
        cout << "   9. Local / CR" << endl << endl;

        cout << "  Option: ";
        cin >> select;

        switch (select) {
            case 1:
                index = 0;
                option = 0;
            break;
            case 2:
                index = 1;
                option = 0;
            break;
            case 3:
                index = 2;
                option = 0;
            break;
            case 4:
                index = 3;
                option = 0;
            break;
            case 5:
                index = 4;
                option = 0;
            break;
            case 6:
                index = 5;
                option = 0;
            break;
            case 7:
                index = 6;
                option = 0;
            break;
            case 8:
                index = 7;
                option = 0;
            break;
            case 9:
                index = 8;
                option = 0;
            break;
            default:
                cin.ignore();
                cout << "\nOption no avaible\n"<<endl;
                system("PAUSE");
                system("cls");
        }
    };
}

void venta::viewBill(AbstractSuit* parameter) {
    system("cls");
    cout << "\n\n---Datos de factura--- "<< endl;
    cout << "Id factura: " << getId_factura() << endl;
    cout << "Id suit: " << parameter->getCode() << endl;
    cout << "Precio traje: " << parameter->getPrice() << endl;
    cout << "tipo traje: " << parameter->getType() << endl;
    cout << "Id cliente: " << getId_Cliente() << endl;
    cout << "Id traje: " << getId_traje() << endl;
    cout << "Precio base: $" << getSuitPrice() << endl;
    cout << "Precio ganancia + iva: $" << getTotalPrice() << endl;
    cout << "Precio envio: $" << getTransportePrecio() << endl;
    cout << "Total con envio: $" << getTotalPrice() + stod(getTransportePrecio()) << endl;
    cout << getTransporteCodigo() << "->" << getTransportePais() << "//" << getTransporteCiudad() << endl;

    cout << "\n\n---Datos de camisa--- "<< endl;
    cout << "Camisa code: " << parameter->getCamisAbstr()->getCode() << endl;
    cout << "Camisa color: " << parameter->getCamisAbstr()->getColor() << endl;
    cout << "Camisa price: " << parameter->getCamisAbstr()->getPrice() << endl;

    cout << "\n\n---Datos de pantalon--- "<< endl;
    cout << "pantalon code: " << parameter->getPantalonAbstr()->getCode() << endl;
    cout << "pantalon color: " << parameter->getPantalonAbstr()->getColor() << endl;
    cout << "pantalon price: " << parameter->getPantalonAbstr()->getPrice() << endl;

    cout << "\n\n---Datos de zapato--- "<< endl;
    cout << "zapato code: " << parameter->getZapatoAbstr()->getCode() << endl;
    cout << "zapato color: "<< parameter->getZapatoAbstr()->getColor() << endl;
    cout << "zapato price: "<< parameter->getZapatoAbstr()->getPrice() << endl;


}

string venta::getTransporteCodigo() {return transporteCodigo[index];}
string venta::getTransportePrecio() {return transportePrecio[index];}
string venta::getTransportePais()   {return transportePais[index];}
string venta::getTransporteCiudad() {return transporteCiudad[index];}

string venta::getId_factura() {return id_factura;}
string venta::getId_Cliente() {return id_Cliente;}
string venta::getId_traje() {return id_traje;}
string venta::getSuitPrice() {return suitPrice;}
double venta::getIva() {return iva;}
double venta::getGanancia() {return ganancia;}
double venta::getTotalPrice() {return totalPrice;}
