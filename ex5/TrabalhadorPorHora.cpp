#include"TrabalhadorPorHora.h"

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    int h;
    if(horas<=40)
        return horas*valorDaHora;
    else{
        h = horas - 40;
        return valorDaHora*40 + h*1,5*valorDaHora;
    }
}
void TrabalhadorPorHora::setValorDaHora(double valorDaHora){
    valorDaHora>=0 ? this->valorDaHora = valorDaHora : this->valorDaHora = 0;
}
