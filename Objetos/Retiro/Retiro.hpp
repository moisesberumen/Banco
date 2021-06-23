#ifndef RETIRO_HPP
#define RETIRO_HPP

#include "string"
#include "../Cliente/Cliente.hpp"

using namespace std;
class Retiro{

private:
    Cliente cliente;
    string numeroCuenta;
    string fecha;
    float importe;
    float restaBalance;

public:
    Retiro();
    Retiro(Cliente attCliente, string attNumeroCuenta, string attFecha, float attImporte, float attRestaBalance);

    void setNumeroCuenta(string attNumeroCuenta);
   string getNumeroCuenta();

   void setFecha(string attFecha);
   string getFecha();

   void setImporte(float attImporte);
   float getImporte();

   void setRestaBalance(float attRestaBalance);
   float getRestaBalance();
};
#endif