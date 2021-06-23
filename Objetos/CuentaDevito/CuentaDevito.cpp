#include"Cuentadevito.hpp"

CuentaDevito::CuentaDevito(){}
CuentaDevito::CuentaDevito(float attNumeroCuenta, float attBalance, Cliente attCliente){
    numeroCuenta=attNumeroCuenta;
    balance=attBalance;
    cliente=attCliente;
}
void CuentaDevito::setBalance(float attBalance){
    balance=attBalance;
}
float CuentaDevito::getBalance(){
    return balance;
}