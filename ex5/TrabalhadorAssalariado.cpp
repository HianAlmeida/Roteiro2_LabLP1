#include"TrabalhadorAssalariado.h"

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horas){
    return salario/4;
}
TrabalhadorAssalariado::TrabalhadorAssalariado(){
    setNome("Sem nome");
    setSalario(0);
}
TrabalhadorAssalariado::TrabalhadorAssalariado(double salario, std::string nome){
    this->nome =nome;
    this->salario = salario;
}
