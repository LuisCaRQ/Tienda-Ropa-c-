#ifndef ZAPATOABSTR_H
#define ZAPATOABSTR_H
#include <string>

using namespace std;

class ZapatoAbstr
{
    public:
        ZapatoAbstr(){};
        virtual ~ZapatoAbstr(){};
        double getPrice();
        string getColor();
        string getCode();
        bool getCondicion();
        void setCondicion(bool);
        void setPrice(double price);
        void setColor(string color);
        void setCode(string code);

    protected:

    private:
        double price;
        string color;
        string code;
        bool condicion;
};

#endif // ZAPATOABSTR_H
