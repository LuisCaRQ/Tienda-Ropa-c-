#ifndef ARCHIVOS_H
#define ARCHIVOS_H
#include "venta.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>

#include <persona.h>
#include <cliente.h>
#include <empresa.h>
#include <AbstractSuit.h>
#include <executiveSuit.h>
#include <bota.h>
#include <ConCuadros.h>
#include <Jeams.h>


using namespace std;

class archivos
{
    public:
        archivos(){};
        virtual ~archivos(){};

        void updatePersonFile();
        void updateBusinessFile();
        void updateSuitFile();
        void updateSellFile();

        void addSuitFile(AbstractSuit*);
        void addPersonFile(cliente*);
        void addBusinessFile(cliente*);
        void addSellFile(venta*);

        AbstractSuit* getSuitFile(string);
        persona* getPersonFile(string parameter);
        empresa* getBusinessFile(string parameter);


        string* getListPerson();
        string* getListBusiness();
        string* getListSuit();
        string* getListSuitPrice();
        string* getListSell();

        string* getListSell_Price();
        string* getListSell_Stonk();
        string* getListSell_idSuit();

        int getLenListSuit();
        int getLenListPerson();
        int getLenListBusiness();
        int getLenListSell();
    protected:

    private:
        string textFilePerson;
        string textFileBusiness;
        string textFileSuit;
        string textFileSell;

        string listPerson[1000];
        string listBusiness[1000];
        string listSuit[1000];
        string listSuitPrice[1000];
        string listSell[1000];
        string listSell_Price[1000];
        string listSell_Stonk[1000];
        string listSell_idSuit[1000];

        int lenListPerson;
        int lenlistBusiness;
        int lenListSuit;
        int lenListSell;


};

#endif // ARCHIVOS_H
