#ifndef DR_HPP
#define DR_HPP

#include "string"
#include "../Cliente/Cliente.hpp"

using namespace std;
class Dr{

private:
   Cliente cliente;
   float importe;
   string tipoMovimiento;

public:
   Dr();
   Dr(Cliente attCliente, float attImporte,string attTipoMovimiento);

void setImporte(float attImporte);
float getImporte();

void setTipoMovimiento(string attTipoMovimiento);
string getTipoMovimiento();

};
#endif