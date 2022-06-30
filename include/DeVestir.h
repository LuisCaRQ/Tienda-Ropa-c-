#ifndef DEVESTIR_H
#define DEVESTIR_H
#include "PantalonAbstr.h"

class DeVestir: public PantalonAbstr{
    public:
        DeVestir(){};
        virtual ~DeVestir(){};
        void setCasimir(bool);
        bool getCasimir();

    protected:

    private:
        bool casimir;
};

#endif // DEVESTIR_H
