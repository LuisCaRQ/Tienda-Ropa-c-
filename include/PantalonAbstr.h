#ifndef PANTALONABSTR_H
#define PANTALONABSTR_H
#include <string>

using namespace std;

class PantalonAbstr
{
    public:
        PantalonAbstr(){};
        virtual ~PantalonAbstr(){};
        double getPrice();
        string getColor();
        string getCode();
        bool getCondicion();
        void setCondicion(bool parametro);
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

#endif // PANTALONABSTR_H
