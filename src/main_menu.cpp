#include "main_menu.h"

main_menu::start_menu(){
    int option;
    while(1) {
        system("cls");

        cout << " ------ Menu ------" << endl << endl;
        cout << "   1. Direct sale" << endl << endl;
        cout << "   2. Online sale" << endl << endl;
        cout << "   3. Mantaiment" << endl << endl;
        cout << "   4. Out" << endl << endl;

        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:
                    direct_menu.start_menu();
                break;
            case 2:
                    user_menu.start_menu();
                break;
            case 3:
                    menu_manteniment.start_menu();
                break;
            case 4:
                cout << "\n  Thanks" << endl;
                exit(1);
            	break;

            default:
                  cin.ignore();
                  cout << "\nOption no avaible\n"<<endl;
                  system("PAUSE");
                  system("cls");
        }
    };
}
