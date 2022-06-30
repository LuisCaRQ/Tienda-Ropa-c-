#ifndef MANGALARGA_H
#define MANGALARGA_H
#include "CamisAbstr.h"

class MangaLarga: public CamisAbstr{
    public:
        MangaLarga(){};
        virtual ~MangaLarga(){};
        bool getLisa();
        void setLisa(bool lisaAux);

    private:
        bool lisa;
};

#endif // MANGALARGA_H
