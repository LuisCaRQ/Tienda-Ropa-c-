#ifndef SPORTSUIT_H
#define SPORTSUIT_H
#include "AbstractSuit.h"

class sportSuit: public AbstractSuit
{
    public:
        sportSuit(){};
        virtual ~sportSuit(){};
        CamisAbstr* createTshirt();
        PantalonAbstr* createPants();
        ZapatoAbstr* createShoe();
    protected:

    private:
};

#endif // SPORTSUIT_H
