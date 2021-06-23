#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include<string>

using namespace std;
class Cliente{
    private:
       string nombre;
       string RFC;
       string domicilio;

    public:
       Cliente();
       Cliente(string attNombre, string attRfC, string attDomicilio);
       
       void setNombre(string attNombre);
       string getNombre();
       
       void setRFC(string attRFC);
       string getRFC();

       void setDomicilio(string attDomicilio);
       string getDomicilio();
};
#endif