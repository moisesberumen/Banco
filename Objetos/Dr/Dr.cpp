#include"Dr.hpp"

Dr::Dr(){}
Dr::Dr(Cliente attCliente, float attImporte, string attTipoMovimiento){
    importe=attImporte;
    tipoMovimiento=attTipoMovimiento;
}
void Dr::setImporte(float attImporte){
    importe=attImporte;
}
float Dr::getImporte(){
    return importe;
}
void Dr::setTipoMovimiento(string attTipoMovimiento){
     tipoMovimiento=attTipoMovimiento;
}
string Dr::getTipoMovimiento(){
    return tipoMovimiento;
}