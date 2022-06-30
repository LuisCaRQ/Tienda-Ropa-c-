#ifndef PERSONA_H
#define PERSONA_H
#include "cliente.h"

class persona: public cliente{
    public:
        persona(){};
        virtual ~persona(){};
        void update();

    protected:

    private:

};

#endif // PERSONA_H
