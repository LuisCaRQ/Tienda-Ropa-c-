#ifndef EJECUTIVO_H
#define EJECUTIVO_H
#include "ZapatoAbstr.h"

class ejecutivo: public ZapatoAbstr
{
    public:
        ejecutivo(){};
        virtual ~ejecutivo(){};
        void setEjecutivo(bool);
        bool getEjecutivo();

    private:
        bool fino;
};

#endif // EJECUTIVO_H
