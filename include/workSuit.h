#ifndef WORKSUIT_H
#define WORKSUIT_H
#include "AbstractSuit.h"

class workSuit: public AbstractSuit
{
    public:
        workSuit(){};
        virtual ~workSuit(){};
        CamisAbstr* createTshirt();
        PantalonAbstr* createPants();
        ZapatoAbstr* createShoe();
    protected:

    private:
};

#endif // WORKSUIT_H
