#include"Pessoa.h"

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}
void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}
void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}
std::string Pessoa::getNome(){
    return nome;
}
std::string Pessoa::getTelefone(){
    return telefone;
}
Endereco Pessoa::getEndereco(){
    return endereco;
}
