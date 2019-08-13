#include"Trabalhador.h"
Trabalhador::Trabalhador(){
    setNome("Sem nome");
    setSalario(0);
}
Trabalhador::Trabalhador(std::string nome, double salario){
    setNome(nome);
    setSalario(salario);
}
void Trabalhador::setNome(std::string nome){
    this->nome = nome;
}
void Trabalhador::setSalario(double salario){
    this->salario = salario;
}
std::string Trabalhador::getNome(){
    return nome;
}
double Trabalhador::getSalario(){
    return salario;
}
double Trabalhador::calcularPagamentoSemanal(int horas){
}

