#include "user_menu.h"

void user_menu::start_menu(){
    int option = 1;
    while(option) {
        system("cls");

        cout << " ------ User menu ------" << endl << endl;
        cout << "   1. New user" << endl << endl;
        cout << "   2. Login" << endl << endl;
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

void user_menu::newUser(){
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

void user_menu::login(){
    int option = 1;
    string id;
    while(option) {
        system("cls");

        cout << " ------ User menu Login ------" << endl << endl;
        cout << "   1. Person" << endl << endl;
        cout << "   2. Business" << endl << endl;
        cout << "   3. Return" << endl << endl;

        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:
                {
                    system("cls");
                    cin.ignore();
                    cout << "-----Login User-----" <<endl;
                    cout << "Enter id person: " ;
                    getline(cin,id);
                    string* dataList = file.getListPerson();
                    int good = 1;
                    for(int i = 0; i < file.getLenListPerson(); i++){
                        if(id == dataList[i]){
                            good = 0;
                        }
                    }
                    if(!good){
                        cout << "User found" <<endl;
                        menuCompras.setCurrentClient(id);
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
                    cout << "-----Login User-----" <<endl;
                    cout << "Enter id business: " ;
                    getline(cin,id);
                    string* dataList = file.getListBusiness();
                    int good = 1;
                    for(int i = 0; i < file.getLenListBusiness(); i++){
                        if(id == dataList[i]){
                            good = 0;
                        }
                    }
                    if(!good){
                        cout << "User found" <<endl;
                        menuCompras.setCurrentClient(id);
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
