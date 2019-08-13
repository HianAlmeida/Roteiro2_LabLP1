#ifndef TRABALHADORPORHORA_H_INCLUDED
#define TRABALHADORPORHORA_H_INCLUDED
#include"Trabalhador.h"
class TrabalhadorPorHora : public Trabalhador{
    private:
        double valorDaHora;
    public:
        double calcularPagamentoSemanal(int horas);
        void setValorDaHora(double valorDaHora);

};


#endif // TRABALHADORPORHORA_H_INCLUDED
