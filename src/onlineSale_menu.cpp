#include "onlineSale_menu.h"

void onlineSale_menu::start_menu(){
    int option = 1;
    while(option) {
        system("cls");

        cout << " ------ Online Sale ------" << endl << endl;
        cout << "   1. Suits available" << endl << endl;
        cout << "   2. Tailor suit" << endl << endl;
        cout << "   3. Return" << endl << endl;

        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:

                break;
            case 2:

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
