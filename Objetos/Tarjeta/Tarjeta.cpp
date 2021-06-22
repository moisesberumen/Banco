#include"Tarjeta.hpp"

Tarjeta::Tarjeta(){}
Tarjeta::Tarjeta(string attBanco, string attNumeroPlastico, string attNip, string attCodigoSeguridad){

      banco=attBanco;
      numeroplastico=attNumeroPlastico;
      nip=attNip;
      codigoseguridad=attCodigoSeguridad;
}
string Tarjeta::getBanco(){
    return banco;
}
string Tarjeta::getNumeroPlastico(){
    return numeroplastico;
}
string Tarjeta::getNip(){
    return nip;
}
string Tarjeta::getCodigoSeguridad(){
    return codigoseguridad;
}
void Tarjeta::setBanco(string attBanco){
    banco=attBanco;
}
void Tarjeta::setNumeroPlastico(string attNumeroPlastico){
    numeroplastico=attNumeroPlastico;
}
void Tarjeta::setNip(string attNip){
    nip=attNip;
}
void Tarjeta::setCodigoSeguridad(string attCodigoSeguridad){
    codigoseguridad=attCodigoSeguridad;
}
