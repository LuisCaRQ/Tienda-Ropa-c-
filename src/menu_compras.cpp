#include "menu_compras.h"


void menu_compras::start_menu(){
    int option = 1;
    int optionSuit;
    while(option) {
        system("cls");
        cout << " ------ Suits available ------" << endl << endl;
        cout << "Select 0 to return" <<endl;

        if( file.getLenListSuit() != 0 ){
            string* listSuit = file.getListSuit();
            string* listSuitPrice = file.getListSuitPrice();
            AbstractSuit* suit;.

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

            cout << "  Select the suit you want: ";
            cin >> optionSuit;
            if (optionSuit == 0){
                option = 0;
            }else{
                if(optionSuit <= file.getLenListSuit()){
                        sell.addVenta(currentClient,listSuit[optionSuit-1],listSuitPrice[optionSuit-1]);
                        AbstractSuit* suit = file.getSuitFile(listSuit[optionSuit-1]);
                        file.addSellFile(&sell);
                        cout << "compra realizada\n"<<endl;
                        sell.viewBill(suit);

                        system("pause");
                }else{
                    cout << "compra no realizada"<<endl;
                    system("pause");
                }
            }
        }else{
            option = 0;
        }
    };
}

void menu_compras::setCurrentClient(string parameter){
    currentClient = parameter;
}

string menu_compras::getCurrentClient(){
    return currentClient;
}
void menu_compras::condicionCamisa(int condition, string type){
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

void menu_compras::condicionPantalon(int condition, string type){
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

void menu_compras::condicionZapato(int condition, string type){
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
