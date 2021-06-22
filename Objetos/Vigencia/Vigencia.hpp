#include<string>

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
