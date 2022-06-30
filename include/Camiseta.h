#ifndef CAMISETA_H
#define CAMISETA_H
#include "CamisAbstr.h"

class Camiseta: public CamisAbstr{
    public:
        Camiseta(){};
        virtual ~Camiseta(){};
        bool getCuelloV();
        void setCuelloV(bool);

    private:
        bool cuelloV;
};

#endif // CAMISETA_H
