#ifndef BOTA_H
#define BOTA_H
#include "ZapatoAbstr.h"

class bota: public ZapatoAbstr
{
    public:
        bota(){};
        virtual ~bota(){};
        void setBota(bool);
        bool getBota();

    private:
        bool alta;
};

#endif // BOTA_H
