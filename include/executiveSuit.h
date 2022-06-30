#ifndef EXECUTIVESUIT_H_
#define EXECUTIVESUIT_H_
#include <iostream>
#include <stdlib.h>
#include "AbstractSuit.h"
#include "MangaLarga.h"
#include "DeVestir.h"
#include "ejecutivo.h"

class executiveSuit: public AbstractSuit{
    public:
        executiveSuit(){};
        virtual ~executiveSuit(){};
        CamisAbstr* createTshirt();
        PantalonAbstr* createPants();
        ZapatoAbstr* createShoe();
    protected:

    private:
};

#endif // EXECUTIVESUIT_H_
