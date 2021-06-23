#ifndef SISTEMA_HPP
#define SISTEMA_HPP

#include"string"

using namespace std;
class Sistema{

   private:
   string version;

   public:
   Sistema();
   Sistema(string attVersion);
   bool validaCliente();
   void consultaSaldo();
   void retiroEfectivo();
   void depositoEfectivo();
   void almacenaMovimiento();
   void consultaMovimiento();


}


