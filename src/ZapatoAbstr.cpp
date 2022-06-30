#include "ZapatoAbstr.h"


double ZapatoAbstr::getPrice(){
    return price;
}
string ZapatoAbstr::getColor(){
    return color;
}
string ZapatoAbstr::getCode(){
    return code;
}
bool ZapatoAbstr::getCondicion(){
    return condicion;
}

void ZapatoAbstr::setCondicion(bool parametro){
    condicion = parametro;
}
void ZapatoAbstr::setPrice(double priceAux){
    price = priceAux;
}
void ZapatoAbstr::setColor(string colorAux){
    color = colorAux;
}
void ZapatoAbstr::setCode(string codeAux){
    code = codeAux;
}
