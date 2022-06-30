#ifndef FACTORY_H_
#define FACTORY_H_
#include "sportSuit.h"
#include "workSuit.h"
#include "executiveSuit.h"
#include <iostream>
#include <stdlib.h>
#include "string"
#include "CamisAbstr.h"
#include "PantalonAbstr.h"
#include "ZapatoAbstr.h"
#include "archivos.h"

class factorySuit
{
    public:
        factorySuit(){};
        virtual ~factorySuit(){};
        void newSuit();
    private:
        AbstractSuit* suit;
        archivos file;
};

#endif // FACTORY_H_
