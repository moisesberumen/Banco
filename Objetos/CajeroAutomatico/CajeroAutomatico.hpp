#ifndef CAJEROAUTOMATICO_HPP
#define CAJEROAUTOMATICO_HPP
#include "string"

using namespace std;
class CajeroAutomatico{

private:
   string codigo;
   string numerosucursal;
   string banco;

public:
   CajeroAutomatico();
   CajeroAutomatico(string attCodigo, string attNumeroSucursal, string attBanco);

   void setCodigo(string attCodigo);
   string getCodigo();

   void setNumeroSucursal(string attNumeroSucursal);
   string getNumeroSucursal ();

   void setBanco(string attBanco);
   string getBanco();
};
#endif
