#ifndef CAMISABSTR_H
#define CAMISABSTR_H
#include <string>

using namespace std;

class CamisAbstr{
    public:
        CamisAbstr(){};
        virtual ~CamisAbstr(){};
        double getPrice();
        string getColor();
        string getCode();
        bool getCondicion();
        void setCondicion(bool);
        void setPrice(double price);
        void setColor(string color);
        void setCode(string code);

    private:
        double price;
        string color;
        string code;
        bool condicion;
};

#endif // CAMISABSTR_H
