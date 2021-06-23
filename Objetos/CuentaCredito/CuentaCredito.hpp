#ifndef CUENTACREDITO_HPP
#define CUENTACREDITO_HPP

#include "string"
#include "../Cliente/Cliente.hpp"
using namespace std;
class CuentaCredito{

private:
   float numeroCuenta;
   float balance;
   Cliente cliente;

public:
   CuentaCredito();
   CuentaCredito(float attNumeroCuenta, float attBalance, Cliente cliente);

   void setBalance(float attBalance);
   float getBalance();
};
#endif