#ifndef MANU_MANTENIMENT_H
#define MANU_MANTENIMENT_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "factorySuit.h"
#include "report_menu.h"

using namespace std;

class manu_manteniment
{
    public:
        manu_manteniment(){};
        virtual ~manu_manteniment(){};
        void start_menu();
    protected:

    private:
        factorySuit factory;
        report_menu report;
};

#endif // MANU_MANTENIMENT_H
