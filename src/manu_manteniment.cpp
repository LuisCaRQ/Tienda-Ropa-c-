#include "manu_manteniment.h"

void manu_manteniment::start_menu(){
int option;
int condicion = 1 ;
    while(condicion) {
        system("cls");

        cout << " ------ Menu ------" << endl << endl;
        cout << "   1. New suit" << endl << endl;
        cout << "   2. Delete suit" << endl << endl;
        cout << "   3. Report " << endl << endl;
        cout << "   4. Back" << endl << endl;

        cout << "  Option: ";
        cin >> option;

        switch (option) {
            case 1:
                   factory.newSuit();
                break;
            case 2:

                break;
            case 3:
                    report.start_menu();
                break;
            case 4:
                condicion=0;
            	break;

            default:
                  cin.ignore();
                  cout << "\nOption no avaible\n"<<endl;
                  system("PAUSE");
                  system("cls");
        }
    };
}
