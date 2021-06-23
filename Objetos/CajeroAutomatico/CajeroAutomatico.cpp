#include"CajeroAutomatico.hpp"

CajeroAutomatico::CajeroAutomatico(){}
CajeroAutomatico::CajeroAutomatico(string attCodigo, string attNumeroSucursal, string attBanco){
    codigo=attCodigo;
    numerosucursal=attNumeroSucursal;
    banco=attBanco;
}
void CajeroAutomatico::setCodigo(string attcodigo){
    codigo=attcodigo;
}
string CajeroAutomatico::getCodigo(){
    return codigo;
}
void CajeroAutomatico::setNumeroSucursal(string attNumeroSucursal){
    numerosucursal=attNumeroSucursal;
}
string CajeroAutomatico::getNumeroSucursal(){
    return numerosucursal;
}
void CajeroAutomatico::setBanco(string attBanco){
    banco=attBanco;
}
string CajeroAutomatico::getBanco(){
    return banco;
}
