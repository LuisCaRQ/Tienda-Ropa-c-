#include "directSale_menu.h"

void directSale_menu::start_menu(){
    int option = 1;
    while(option) {
        system("cls");

        cout << " ------ User menu ------" << endl << endl;
        cout << "   1. New client" << endl << endl;
        cout << "   2. Pre-existing user" << endl << endl;
        cout << "   3. Return" << endl << endl;

        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:
                    newUser();
                break;
            case 2:
                    login();
                break;
            case 3:
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

void directSale_menu::newUser(){
    int option = 1;
    system("cls");
    while(option) {
        system("cls");

        cout << " ------ User menu ------" << endl << endl;
        cout << "   1. Person" << endl << endl;
        cout << "   2. Business" << endl << endl;
        cout << "   3. Return" << endl << endl;

        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:
                    do{
                        system("cls");
                        cout << "-----Register User-----" <<endl;
                        client = new persona();
                        client->update();
                        string* dataList = file.getListPerson();
                        int good = 1;
                        for(int i = 0; i < file.getLenListPerson(); i++){
                            if(client->getCedula() == dataList[i]){
                                good = 0;
                            }
                        }
                        if(good){
                            file.addPersonFile(client);
                            cout << "Successfully registered user " <<endl;
                            system("pause");
                            break;
                        }else{
                            cout << "User Id already registered, please enter the data again " <<endl;
                            system("pause");
                        }
                    }while(true);
                break;
            case 2:
                    do{
                        system("cls");
                        cout << "-----Register Business-----" <<endl;
                        client = new empresa();
                        client->update();
                        string* dataList = file.getListBusiness();
                        int good = 1;
                        for(int i = 0; i < file.getLenListBusiness(); i++){
                            if(client->getCedula() == dataList[i]){
                                good = 0;
                            }
                        }
                        if(good){
                            file.addBusinessFile(client);
                            cout << "Successfully registered user " <<endl;
                            system("pause");
                            break;
                        }else{
                            cout << "Business Id already registered, please enter the data again " <<endl;
                            system("pause");
                        }
                    }while(true);
                break;
            case 3:
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

void directSale_menu::login(){
    int option = 1;


    while(option) {
        system("cls");

        cout << " ------ Select user menu ------" << endl << endl;
        cout << "   1. Person" << endl << endl;
        cout << "   2. Business" << endl << endl;
        cout << "   3. Return" << endl << endl;
        int cont = 0;
        int id;
        int good = 0;
        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:
                {
                    system("cls");
                    cin.ignore();
                    cout << "-----List User-----" <<endl;
                    string* dataList = file.getListPerson();
                    for(int i = 0; i < file.getLenListPerson(); i++){
                        cout << i+1 << ". "<< dataList[i] <<endl;
                        cont++;
                    }
                    cout << "Enter id person: " ;
                    cin >> id;
                    cout << id-1 << endl;
                    cout << cont << endl;
                    if( 0 <= id-1 && id-1 < cont){
                        good = 1;
                    }
                    if(good){
                        cout << "User found" <<endl;
                        menuCompras.setCurrentClient("Trabajador");
                        menuCompras.start_menu();
                        system("pause");
                    }else{
                        cout << "User not found" <<endl;
                        system("pause");
                    }
                    break;
                }

            case 2:
                {
                    system("cls");
                    cin.ignore();
                    cout << "-----List Business-----" <<endl;
                    string* dataList = file.getListBusiness();
                    for(int i = 0; i < file.getLenListBusiness(); i++){
                        cout << i+1 << ". "<< dataList[i] <<endl;
                        cont++;
                    }
                    cout << "Enter id person: " ;
                    cin >> id;
                    if( 0 <= id-1 && id-1 < cont){
                        good = 1;
                    }
                    if(good){
                        cout << "User found" <<endl;
                        menuCompras.setCurrentClient("Trabajador");
                        menuCompras.start_menu();
                        system("pause");
                    }else{
                        cout << "User not found" <<endl;
                        system("pause");
                    }
                    break;
                }
            case 3:
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
