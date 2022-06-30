#ifndef JEAMS_H
#define JEAMS_H
#include "PantalonAbstr.h"

class Jeams: public PantalonAbstr{
    public:
        Jeams(){};
        virtual ~Jeams(){};
        void setAjustado(bool);
        bool getAjustado();

    protected:

    private:
        bool ajustado;
};

#endif // JEAMS_H
