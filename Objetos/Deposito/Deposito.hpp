#ifndef DEPOSITO_HPP
#define DEPOSITO_HPP

#include "string"
#include "../Cliente/Cliente.hpp"

using namespace std;
class Deposito{

private:
   Cliente cliente;
   int numeroCuenta;
   string fecha;
   float importe;

public:
   Deposito();
   Deposito(Cliente attCliente, int attnumeroCuenta, string attFecha, float attImporte);

   void setNumeroCuenta(int attnumeroCuenta);
   int getNumeroCuenta();

   void setFecha( string attFecha);
   string getFecha();

   void setImporte(float attImporte);
   float getImporte();
};
#endif