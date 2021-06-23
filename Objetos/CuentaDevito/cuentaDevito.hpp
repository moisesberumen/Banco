#ifndef CUENTADEVITO_HPP
#define CUENTADEVITO_HPP

#include "string"
#include "../Cliente/Cliente.hpp"
using namespace std;
class CuentaDevito{

private:
   float numeroCuenta;
   float balance;
   Cliente cliente;

public:
   CuentaDevito();
   CuentaDevito(float attNumeroCuenta, float attBalance, Cliente cliente);

   void setBalance(float attBalance);
   float getBalance();
};
#endif