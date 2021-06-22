#include "Cliente.hpp"

Cliente::Cliente(){}
Cliente::Cliente(string attNombre, string attRfc, string attDomicilio){

    nombre=attNombre;
    RFC=attRfc;
    domicilio=attDomicilio;

}
void Cliente::setNombre(string attNombre){
    nombre=attNombre;
}
string Cliente::getNombre(){
    return nombre;
}
void Cliente::setRFC(string attRFC){
    RFC=attRFC;
}
string Cliente::getRFC(){
    return RFC;
}
void Cliente::setDomicilio(string attDomicilio){
    domicilio=attDomicilio;
}
string Cliente::getDomicilio(){
    return domicilio;
}
