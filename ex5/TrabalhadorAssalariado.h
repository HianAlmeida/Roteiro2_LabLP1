#ifndef TRABALHADORASSALARIADO_H_INCLUDED
#define TRABALHADORASSALARIADO_H_INCLUDED
#include"Trabalhador.h"
class TrabalhadorAssalariado : public Trabalhador{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(double salario, std::string nome);
        double calcularPagamentoSemanal(int horas);
};

#endif // TRABALHADORASSALARIADO_H_INCLUDED
