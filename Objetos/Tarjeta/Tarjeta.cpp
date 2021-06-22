#include"Tarjeta.hpp"

Tarjeta::Tarjeta(){}
Tarjeta::Tarjeta(string attBanco, string attNumeroPlastico, string attNip){

      banco=attBanco;
      numeroplastico=attNumeroPlastico;
      nip=attNip;
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
void Tarjeta::setBanco(string attBanco){
    banco=attBanco;
}
void Tarjeta::setNumeroPlastico(string attNumeroPlastico){
    numeroplastico=attNumeroPlastico;
}
void Tarjeta::setNip(string attNip){
    nip=attNip;
}
