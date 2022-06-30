#ifndef TENNI_H
#define TENNI_H
#include "ZapatoAbstr.h"

class tenni: public ZapatoAbstr
{
    public:
        tenni(){};
        virtual ~tenni(){};
        void setTenni(bool);
        bool getTenni();

    private:
        bool adidas;
};

#endif // TENNI_H
