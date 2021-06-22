
using namespace std;
class Tarjeta{

    private:
        string banco;
        string numeroplastico;
        string nip;
        string codigoseguridad;
        

    public:
        Vigencia vigencia;

        Tarjeta();
        Tarjeta(string attBanco, string attNumeroPlastico, string attNip,
        string attCodigoSeguridad,Vigencia attVigencia);

        void setBanco(string attBanco);
        string getBanco();

        void setNumeroPlastico(string attNumeroPlastico);
        string getNumeroPlastico();

        void setNip(string attNip);
        string getNip();

        void setCodigoSeguridad(string attCodigoSeguridad);
        string getCodigoSeguridad();
};

 
