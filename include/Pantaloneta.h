#ifndef PANTALONETA_H
#define PANTALONETA_H
#include "PantalonAbstr.h"

class Pantaloneta: public PantalonAbstr{
    public:
        Pantaloneta(){};
        virtual ~Pantaloneta(){};
        void setEstampada(bool);
        bool getEstampada();

    protected:

    private:
        bool estampada;
};

#endif // PANTALONETA_H
