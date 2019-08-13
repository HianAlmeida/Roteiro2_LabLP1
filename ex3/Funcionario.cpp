#include"Funcionario.h"
#include<iostream>

Funcionario::Funcionario(){}
void Funcionario::setNome(std::string nome){
    this->nome = nome;
}
void Funcionario::setMatricula(int matricula){
    this-> matricula = matricula;
}
std::string Funcionario::getNome(){
    return nome;
}
void Funcionario::setSalario(float salario){
    this->salario = salario;
}
int Funcionario::getMatricula(){
    return matricula;
}

float Funcionario::getSalario(){
    return salario;
}
float Funcionario::getSalario(float percentual){}

