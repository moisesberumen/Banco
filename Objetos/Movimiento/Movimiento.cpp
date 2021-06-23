#include"Movimiento.hpp"

Movimiento::Movimiento(){}
Movimiento::Movimiento(string attNumeroCuenta, string attFecha,Cliente attCliente ){
   numerocuenta=attNumeroCuenta;
   fecha=attFecha;
   cliente=attCliente;
}
void Movimiento::setNumeroCuenta(string attNumeroCuenta){
    numerocuenta=attNumeroCuenta;
}
string Movimiento::getNumeroCuenta(){
    return numerocuenta;
}
void Movimiento::setFecha(string attFecha){
    fecha=attFecha;
}
string Movimiento::getFecha(){
    return fecha;
}
 void Movimiento::setCliente(Cliente attCliente){
    cliente=attCliente;
}

Cliente Movimiento::getCliente(){
      return cliente;

}