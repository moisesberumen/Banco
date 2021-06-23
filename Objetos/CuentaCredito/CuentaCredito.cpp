#include"CuentaCredito.hpp"

CuentaCredito::CuentaCredito(){}
CuentaCredito::CuentaCredito(float attNumeroCuenta, float attBalance, Cliente attCliente){
    numeroCuenta=attNumeroCuenta;
    balance=attBalance;
    cliente=attCliente;
}
void CuentaCredito::setBalance(float attBalance){
    balance=attBalance;
}
float CuentaCredito::getBalance(){
    return balance;
}