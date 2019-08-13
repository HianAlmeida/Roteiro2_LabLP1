#include"Triangulo.h"

Triangulo::Triangulo(){}
Triangulo::Triangulo(double base, double altura , std::string nome){
    setBase(base);
    setAltura(altura);
    this->nome = nome;
}
void Triangulo::setBase(double base){
    base>=0 ? this->base = base : this->base = 0;
}
void Triangulo::setAltura(double altura){
    altura>=0 ? this->altura = altura : this->altura = 0;
}
double Triangulo::getBase(){
    return base;
}
double Triangulo::getAltura(){
    return altura;
}
double Triangulo::calcularArea(){
    return base*altura;
}
std::string Triangulo::getNome(){
    return nome;
}
