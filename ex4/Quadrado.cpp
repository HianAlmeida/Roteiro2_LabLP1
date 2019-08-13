#include"Quadrado.h"

void Quadrado::setLado(double lado){
    lado>=0 ? this->lado = lado : this->lado = 0;
}
double Quadrado::getLado(){
    return lado;
}
double Quadrado::calcularArea(){
    return lado*lado;
}
Quadrado::Quadrado(){};
Quadrado::Quadrado(double lado, std::string nome){
    setLado(lado);
    this->nome = nome;
}
std::string Quadrado::getNome(){
    return nome;
}
