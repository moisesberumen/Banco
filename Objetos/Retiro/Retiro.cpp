#include"Retiro.hpp"

Retiro::Retiro(){}
Retiro::Retiro(Cliente attCliente, string attNumeroCuenta, string attFecha, float attImporte, 
float attRestaBalance){
 numeroCuenta=attNumeroCuenta;
   fecha=attFecha;
   cliente=attCliente;
   importe=attImporte;
   restaBalance=attRestaBalance;

}
void Retiro::setNumeroCuenta(string attNumeroCuenta){
    numeroCuenta=attNumeroCuenta;
}
string Retiro::getNumeroCuenta(){
    return numeroCuenta;
}
void Retiro::setFecha(string attFecha){
    fecha=attFecha;
}
string Retiro::getFecha(){
    return fecha;
}
void Retiro::setImporte(float attIporte){
    importe=attIporte;
}
float Retiro::getImporte(){
    return importe;
} 
void Retiro::setRestaBalance(float attRestaBalance){
    restaBalance=attRestaBalance;
}