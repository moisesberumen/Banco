#include <iostream>
#include <stdlib.h>
#include <string>
#include"Objetos/Cliente/Cliente.cpp"
#include"Objetos/Vigencia/Vigencia.cpp"
#include"Objetos/Tarjeta/Tarjeta.cpp"
#include"Objetos/Tdevito/Tdevito.cpp"

using namespace std;
int main() {
	cout<<"\n\n\n\n\n\n";
	Cliente cliente1("juan","hatb141516hhcc","av.tonala");
    Vigencia vigencia("06", "2010");
    Tdevito Tdevito("banorte", "9876543219876543", "9876", "123", vigencia);


	cout<<Tdevito.getBanco();
	cout<<Tdevito.vigencia.getMes();

	
	cout<<endl<<endl<<endl<<endl;
	return 0;
}
