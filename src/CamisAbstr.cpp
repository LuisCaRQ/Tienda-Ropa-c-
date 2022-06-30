#include "CamisAbstr.h"

double CamisAbstr::getPrice(){
    return price;
}
string CamisAbstr::getColor(){
    return color;
}
string CamisAbstr::getCode(){
    return code;
}

bool CamisAbstr::getCondicion(){
    return condicion;
}

void CamisAbstr::setCondicion(bool parametro){
    condicion = parametro;
}
void CamisAbstr::setPrice(double priceAux){
    price = priceAux;
}
void CamisAbstr::setColor(string colorAux){
    color = colorAux;
}
void CamisAbstr::setCode(string codeAux){
    code = codeAux;
}
