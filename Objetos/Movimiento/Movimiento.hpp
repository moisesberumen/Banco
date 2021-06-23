#ifndef MOVIMIENTO_HPP
#define MOVIMIENTO_HPP

#include "string"
#include "../Cliente/Cliente.hpp"

using namespace std;
class Movimiento{

private:
   string numerocuenta;
   string fecha;
   Cliente cliente;

public:
   Movimiento();
   Movimiento(string attNumeroCuenta, string attFecha,Cliente attCliente);

   void setNumeroCuenta(string attNumeroCuenta);
   string getNumeroCuenta();

   void setFecha(string attFecha);
   string getFecha();

   void setCliente(Cliente attCliente);
   Cliente getCliente();
 
};
#endif