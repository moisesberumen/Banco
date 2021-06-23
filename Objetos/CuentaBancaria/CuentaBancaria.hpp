#ifndef CUENTABANCARIA_HPP
#define CUENTABANCARIA_HPP

#include "string"
#include "../Cliente/Cliente.hpp"

using namespace std;
class CuentaBancaria{

private:
   string tipocuenta;
   string numerocuenta;
   float saldo;
   Cliente cliente;
  // Historial historial;

public:
   CuentaBancaria();
   CuentaBancaria(string attTipoCuenta, string attNumeroCuenta, float attSaldo, Cliente cliente);

   void setTipoCuenta(string attTipoCuenta);
    string getTipoCuenta();

    void setNumeroCuenta(string attNumerocuenta);
    string getNumeroCuenta();

    void setSaldo(float attSaldo);
    float getSaldo();
  
};
#endif