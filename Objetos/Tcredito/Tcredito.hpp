#ifndef TCREDITO_HPP
#define TCREDITO_HPP

#include<string>
#include"../Tarjeta/Tarjeta.hpp"

using namespace std;
class Tcredito : public Tarjeta{
    
    private:
       float balanceAlCorte;
       int limiteDeCredito;

    public:
       Tcredito(float attBalanceAlCorte,int attlimiteDeCredito, string attBanco, 
       string attNumeroPlastico, string attNip,string attCodigoSeguridad, Vigencia attVigencia);

        void setbalanceAlCorte(float attBalanceAlCorte);
        float getbalanceAlCorte();

        void setlimiteDeCredito(int attlimiteDeCredito);
        int getlimitedeCredito();

};     

#endif