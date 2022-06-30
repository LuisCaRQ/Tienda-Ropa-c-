#ifndef EMPRESA_H
#define EMPRESA_H
#include "cliente.h"

class empresa: public cliente{
    public:
        empresa(){};
        virtual ~empresa(){};
        void update();

    protected:

    private:

};

#endif // EMPRESA_H

