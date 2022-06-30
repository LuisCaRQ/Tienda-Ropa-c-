#ifndef CONCUADROS_H
#define CONCUADROS_H
#include "CamisAbstr.h"

class ConCuadros: public CamisAbstr{
    public:
        ConCuadros(){};
        virtual ~ConCuadros(){};
        bool getGrande();
        void setGrande(bool);

    private:
        bool grandes;
};

#endif // CONCUADROS_H
