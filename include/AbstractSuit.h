#ifndef ABSTRACTSUIT_H_
#define ABSTRACTSUIT_H_
#include <iostream>
#include "string"
#include "CamisAbstr.h"
#include "PantalonAbstr.h"
#include "ZapatoAbstr.h"

using namespace std;

class AbstractSuit{
    public:
        AbstractSuit(){};
        virtual ~AbstractSuit(){};
        virtual CamisAbstr*  createTshirt() = 0;
        virtual PantalonAbstr* createPants() = 0;
        virtual ZapatoAbstr* createShoe() = 0;
        bool selectOption(string condicion, string prenda);
        string selectColor(string);
        int selectSize(string);

        CamisAbstr* getCamisAbstr();
        PantalonAbstr* getPantalonAbstr();
        ZapatoAbstr* getZapatoAbstr();

        void setCamisAbstr(CamisAbstr*);
        void setPantalonAbstr(PantalonAbstr*);
        void setZapatoAbstr(ZapatoAbstr*);

        CamisAbstr* camisa;
        PantalonAbstr* pantalon;
        ZapatoAbstr* zapato;

        void setType(string);
        void setPrice(double);
        void setCode(string);
        string getType();
        double getPrice();
        string getCode();

    private:
        double price;
        string type;
        string code;

};

#endif // ABSTRACTSUIT_H_
