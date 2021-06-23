
#ifndef TDEVITO_HPP
#define TDEVITO_HPP

using namespace std;
class Tdevito : public Tarjeta{

    public:
        Tdevito(string attBanco, string attNumeroPlastico, string attNip,string attCodigoSeguridad,
        Vigencia attVigencia);
};

#endif