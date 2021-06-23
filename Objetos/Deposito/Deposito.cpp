#include"Deposito.hpp"

Deposito::Deposito(){}
Deposito::Deposito(Cliente attCliente, int attNumeroCuenta, string attFecha, float attImporte){
    cliente=attCliente;
    numeroCuenta=attNumeroCuenta;
    fecha=attFecha;
    importe=attImporte;
}
void Deposito::setNumeroCuenta(int attNumeroCuenta){
    numeroCuenta=attNumeroCuenta;
}
int Deposito::getNumeroCuenta(){
    return numeroCuenta;
}
void Deposito::setFecha(string attFecha){
    fecha=attFecha;
}
string Deposito::getFecha(){
    return fecha;
}
void Deposito::setImporte(float attImporte){
   importe=attImporte;
}
float Deposito::getImporte(){
    return importe;
}