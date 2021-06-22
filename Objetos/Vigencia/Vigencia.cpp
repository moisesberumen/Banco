#include"Vigencia.hpp"

Vigencia::Vigencia(){}
Vigencia::Vigencia(string attMes, string attAnio){
    mes=attMes;
    anio=attAnio;
}
string Vigencia::getMes(){
    return mes;
}
void Vigencia::setMes(string attMes){
    mes=attMes;
}
string Vigencia::getAnio(){
    return anio;
}
void Vigencia::setAnio(string attAnio){
  anio=attAnio;
};