#include<string>

using namespace std;
class Tarjeta{

    private:
        string banco;
        string numeroplastico;
        string nip;

    public:
        Tarjeta();
        Tarjeta(string attBanco, string attNumeroPlastico, string attNip);

        void setBanco(string attBanco);
        string getBanco();

        void setNumeroPlastico(string attNumeroPlastico);
        string getNumeroPlastico();

        void setNip(string attNip);
        string getNip();
};

 