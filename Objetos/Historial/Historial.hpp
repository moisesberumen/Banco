#ifndef HISTORIAL_HPP
#define HISTORIAL_HPP
#include"string"
#include "../Movimiento/Movimiento.hpp"

using namespace std;
class Historial{

    private:
        Movimiento movimientos[0];
   
    public:
        Historial();
        Historial(Movimiento movimientos[]);


};
#endif