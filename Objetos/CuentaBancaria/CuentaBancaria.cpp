#include"CuentaBancaria.hpp"

CuentaBancaria::CuentaBancaria(){}
CuentaBancaria::CuentaBancaria(string attTipoCuenta, string attNumeroCuenta, float attSaldo, Cliente attCliente){
    tipocuenta=attTipoCuenta;
    numerocuenta=attNumeroCuenta;
    saldo=attSaldo;
    cliente=attCliente;
}
void CuentaBancaria::setTipoCuenta(string attTipoCuenta){
    tipocuenta=attTipoCuenta;
}
string CuentaBancaria::getTipoCuenta(){
    return tipocuenta;
}
void CuentaBancaria::setNumeroCuenta(string attNumerocuenta){
    numerocuenta=attNumerocuenta;
}
string CuentaBancaria::getNumeroCuenta(){
    return numerocuenta;
}
void CuentaBancaria::setSaldo(float attSaldo){
    saldo=attSaldo;
}
float CuentaBancaria::getSaldo(){
    return saldo;
};
  
