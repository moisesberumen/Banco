#include"CuentaBancaria.hpp"

CuentaBancaria::CuentaBancaria(){}
CuentaBancaria::CuentaBancaria(string attTipoCuenta, string attNumeroCuenta, float attSaldo){

tipocuenta=attTipoCuenta;
numerocuenta=attNumeroCuenta;
saldo=attSaldo;
}
void tipocuenta::setTipoCuenta(string attTipoCuenta){
    tipocuenta=attTipoCuenta;
}
string tipocuenta::getTipoCuenta(){
    return tipocuenta;
}
void numerocuenta::setNumeroCuenta(){
    numerocuenta=attNumeroCuenta;
}
string numerocuenta::getnumerocuenta(){
    return numerocuenta;
}
void setSaldo(float attSaldo){
    saldo=attsaldo;
}
float Saldo::getSaldo(){
    return saldo;
};
  
