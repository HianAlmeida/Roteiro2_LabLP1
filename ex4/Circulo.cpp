#include"Circulo.h"
#include<math.h>

Circulo::Circulo(){}
Circulo::Circulo(double raio, std::string nome){
    setRaio(raio);
    this->nome = nome;
}
double Circulo::getRaio(){
    return raio;
}
void Circulo::setRaio(double raio){
    raio>=0 ? this->raio = raio : this-> raio = 0;
}
double Circulo::calcularArea(){
   return 3,14 *pow(raio, 2);
}
std::string Circulo::getNome(){
    return nome;
}
