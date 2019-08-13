#ifndef TRABALHADOR_H_INCLUDED
#define TRABALHADOR_H_INCLUDED
#include<string>

class Trabalhador{
    protected:
        std::string nome;
        double salario;
    public:
        Trabalhador();
        Trabalhador(std::string nome, double salario);
        void setNome(std::string nome);
        void setSalario(double salario);
        std::string getNome();
        double getSalario();
        virtual double calcularPagamentoSemanal(int horas);
};

#endif // TRABALHADOR_H_INCLUDED
