#include "report_menu.h"

void report_menu::start_menu(){
    int option;
    int ciclo = 1;
    while(ciclo) {
        system("cls");

        cout << " ------ Report menu ------" << endl << endl;
        cout << "   1. Trajes en stock" << endl << endl;
        cout << "   2. Clientes tipo fisicos" << endl << endl;
        cout << "   3. Clientes  tipo empresa" << endl << endl;
        cout << "   4. Ventas totales sin ganancia" << endl << endl;
        cout << "   5. Ventas totales con ganancia" << endl << endl;
        cout << "   6. Ganancia neta de la tienda" << endl << endl;
        cout << "   7. Codigo mas vendido" << endl << endl;
        cout << "   8. Out" << endl << endl;

        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:
                    trajesStock();
                break;
            case 2:
                    clientesFisicos();
                break;
            case 3:
                    clientesEmpresa();
                break;
            case 4:
                   ventasSinGanancia();
            	break;
            case 5:
                   ventasConGanancia();
                break;
            case 6:
                    ventaNeta();
                break;
            case 7:

                break;
            case 8:
                    ciclo = 0;
            	break;

            default:
                  cin.ignore();
                  cout << "\nOption no avaible\n"<<endl;
                  system("PAUSE");
                  system("cls");
        }
    };
}


void report_menu::trajesStock(){
    system("cls");
    AbstractSuit* suit;
    cout << " ------ Report Suits ------" << endl << endl;
    for(int i = 0; i < file.getLenListSuit(); i++){
        suit = file.getSuitFile(file.getListSuit()[i]);
        cout << "\n---Suit #" << i+1 <<"--- " << endl;
        cout << "Code suit: " << suit->getCode() << endl;
        cout << "Suit type: " << suit->getType() << endl;
        cout << "Price: " << suit->getPrice() << endl;

        cout << "\n---Tshirt--- " << endl;
        cout << "Code shirt: " << suit->getCamisAbstr()->getCode() << endl;
        cout << "Color: " << suit->getCamisAbstr()->getColor() << endl;
        condicionCamisa(suit->getCamisAbstr()->getCondicion(), suit->getType());
        cout << "Price: " << suit->getCamisAbstr()->getPrice() << endl;

        cout << "\n---Pant--- " << endl;
        cout << "Code Pant: " << suit->getPantalonAbstr()->getCode() << endl;
        cout << "Color: " << suit->getPantalonAbstr()->getColor() << endl;
        condicionPantalon(suit->getPantalonAbstr()->getCondicion(), suit->getType());
        cout << "Price: " << suit->getPantalonAbstr()->getPrice() << endl;

        cout << "\n---Shoe--- " << endl;
        cout << "Code Shoe: " << suit->getZapatoAbstr()->getCode() << endl;
        cout << "Color: " << suit->getZapatoAbstr()->getColor() << endl;
        condicionZapato(suit->getZapatoAbstr()->getCondicion(), suit->getType());
        cout << "Price: " << suit->getZapatoAbstr()->getPrice() << endl;

        cout << endl << endl;

    }
    system("PAUSE");
}

void report_menu::condicionCamisa(int condition, string type){
     switch (condition) {
        case 0:
            if(type == "executive suit"){
                cout << "No lisa" << endl;
            }
            if(type == "Sport Suit"){
                cout << "Sin cuello V" << endl;
            }
            if(type == "Work Suit"){
                cout << "Pequenos" << endl;
            }
            break;
        case 1:
            if(type == "executive suit"){
                cout << "Lisa" << endl;
            }
            if(type == "Sport Suit"){
                cout << "Cuello V" << endl;
            }
            if(type == "Work Suit"){
                cout << "Grandes" << endl;
            }
            break;
     }
}

void report_menu::condicionPantalon(int condition, string type){
     switch (condition) {
        case 0:
            if(type == "executive suit"){
                cout << "No casimir" << endl;
            }
            if(type == "Sport Suit"){
                cout << "Sin Estampar" << endl;
            }
            if(type == "Work Suit"){
                cout << "Sin ajustar" << endl;
            }
            break;
        case 1:
            if(type == "executive suit"){
                cout << "Casimir" << endl;
            }
            if(type == "Sport Suit"){
                cout << "Estampada" << endl;
            }
            if(type == "Work Suit"){
                cout << "Ajustado" << endl;
            }
            break;
     }
}

void report_menu::condicionZapato(int condition, string type){
     switch (condition) {
        case 0:
            if(type == "executive suit"){
                cout << "No fino" << endl;
            }
            if(type == "Sport Suit"){
                cout << "No adidas V" << endl;
            }
            if(type == "Work Suit"){
                cout << "No Alto" << endl;
            }
            break;
        case 1:
            if(type == "executive suit"){
                cout << "Fino" << endl;
            }
            if(type == "Sport Suit"){
                cout << "Adidas" << endl;
            }
            if(type == "Work Suit"){
                cout << "Alto" << endl;
            }
            break;
     }
}


void report_menu::clientesFisicos(){
    system("cls");
    persona* person;
    cout << " ------ Report Person ------" << endl << endl;
    for(int i = 0; i < file.getLenListPerson(); i++){
        person = file.getPersonFile(file.getListPerson()[i]);
        cout << "\n---Person #" << i+1 <<"--- " << endl;
        cout << "ID: "          << person->getCedula() << endl;
        cout << "Name: "        << person->getNombre() << endl;
        cout << "Email: "       << person->getCorreo() << endl;
        cout << "City: "        << person->getCiudad() << endl;
        cout << "Country: "     << person->getPais() << endl;
        cout << "Suscription: " << person->getPago() << endl;
        cout << "Nacionality: " << person->getNacionalidad() << endl;
        cout << endl << endl;
    }
    system("PAUSE");
}

void report_menu::clientesEmpresa(){
    system("cls");
    empresa* person;
    cout << " ------ Report Business ------" << endl << endl;
    for(int i = 0; i < file.getLenListBusiness(); i++){
        person = file.getBusinessFile(file.getListBusiness()[i]);
        cout << "\n---Person #" << i+1 <<"--- " << endl;
        cout << "ID: "          << person->getCedula() << endl;
        cout << "Name: "        << person->getNombre() << endl;
        cout << "Email: "       << person->getCorreo() << endl;
        cout << "City: "        << person->getCiudad() << endl;
        cout << "Country: "     << person->getPais() << endl;
        cout << "Suscription: " << person->getPago() << endl;
        if(person->getClienteFrecuente()){
            cout << "Frecuent client: Si" << endl;
        }else {
            cout << "Frecuent client: No" << endl;
        }

        cout << endl << endl;
    }
    system("PAUSE");
}

void report_menu::ventasSinGanancia(){
    system("cls");
    int total=0;
    cout << " ------ Report Sin Ganancia ------" << endl << endl;
    for(int i = 0; i < file.getLenListSell(); i++){
        total += stoi(file.getListSell_Price()[i]);
    }
    cout << "Sales without profit: $" << total << endl << endl;
    system("PAUSE");
}

void report_menu::ventasConGanancia(){
    system("cls");
    int total = 0;
    int ganancia=0;
    cout << " ------ Report con Ganancia ------" << endl << endl;
    for(int i = 0; i < file.getLenListSell(); i++){
        total    += stoi(file.getListSell_Price()[i]);
        ganancia += stoi(file.getListSell_Stonk()[i]);
    }
    cout << "Sales profit: $" << total+ganancia << endl << endl;
    system("PAUSE");
}

void report_menu::ventaNeta(){
    system("cls");
    int total = 0;
    int ganancia=0;
    cout << " ------ Report con Ganancia ------" << endl << endl;
    for(int i = 0; i < file.getLenListSell(); i++){
        total    += stoi(file.getListSell_Price()[i]);
        ganancia += stoi(file.getListSell_Stonk()[i]);
    }
    cout << "Sales profit: $" << (total+ganancia)-total << endl << endl;
    system("PAUSE");
}





