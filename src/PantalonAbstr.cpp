#include "PantalonAbstr.h"


double PantalonAbstr::getPrice(){
    return price;
}
string PantalonAbstr::getColor(){
    return color;
}
string PantalonAbstr::getCode(){
    return code;
}

bool PantalonAbstr::getCondicion(){
    return condicion;
}

void PantalonAbstr::setCondicion(bool parametro){
    condicion = parametro;
}
void PantalonAbstr::setPrice(double priceAux){
    price = priceAux;
}
void PantalonAbstr::setColor(string colorAux){
    color = colorAux;
}
void PantalonAbstr::setCode(string codeAux){
    code = codeAux;
}
