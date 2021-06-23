#ifndef CUENTAACCESO_HPP
#define CUENTAACCESO_HPP

#include "string"
#include "../Cliente/Cliente.hpp"
using namespace std;
class CuentaAcceso{

private:
    Cliente cliente;
    string password;

public:
    CuentaAcceso();
    CuentaAcceso(Cliente cliente, string attPassword);

    Cliente getCliente();
    string getPassword();
};
#endif
