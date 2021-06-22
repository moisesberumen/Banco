#include"Tcredito.hpp"

Tcredito::Tcredito(float attBalanceAlCorte,int attlimiteDeCredito, string attBanco, 
string attNumeroPlastico, string attNip,string attCodigoSeguridad, Vigencia attVigencia)
:Tarjeta(attBanco, attNumeroPlastico, attNip, attCodigoSeguridad, attVigencia)
{
    balanceAlCorte=attBalanceAlCorte;
    limiteDeCredito=attlimiteDeCredito;
}   
 float Tcredito::getbalanceAlCorte(){
     return balanceAlCorte;
}
 int Tcredito::getlimitedeCredito(){
     return limiteDeCredito; 
}
void Tcredito::setbalanceAlCorte(float attBalanceAlCorte){
    balanceAlCorte=attBalanceAlCorte;
}
void Tcredito::setlimiteDeCredito(int attlimiteDeCredito){
    limiteDeCredito=attlimiteDeCredito;
}




 
