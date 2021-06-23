#include<string>

#ifndef VIGENCIA_HPP
#define VIGENCIA_HPP

using namespace std;
class Vigencia{

    private:
    string mes;
    string anio;

    public:
    Vigencia();
    Vigencia(string attMes, string attAnio);

    void setMes(string attMes);
    string getMes();

    void setAnio(string attAnio);
    string getAnio();

};

#endif