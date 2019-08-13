#include"Endereco.h"
#include <sstream>
Endereco::Endereco(){
    rua = "Sem Rua";
    numero = 0;
    bairro = "Sem Bairro";
    cidade = "Sem Cidade";
    estado = "Sem estado";
    cep = "Sem CEP";
}
Endereco::Endereco(std::string rua, int numero, std::string bairro,
         std::string cidade, std::string estado, std::string cep):Endereco(){
    this->rua = rua;
    numero>=0 ? this->numero = numero : this->numero = 0;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}
std::string Endereco::toString(){
    std::stringstream all;

    all << "Numero: " << numero << "\nRua: " << rua <<
    "\nBairro: " << bairro << "\nEstado: " << estado <<
    "\nCidade: " << cidade << "\nCep: " << cep << std::endl;

    return all.str();

}
