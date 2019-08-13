#include "Pedido.h"
#include <iostream>
Pedido::Pedido(){
    numero = 0;
    descricao = "Sem Descricao";
    quantidadeComprada = 0;
    preco = 0;
}
Pedido::Pedido(int numero, std::string descricao, int quantidadeComprada, double preco){
    setNumero(numero);
    setDescricao(descricao);
    setQuantidadeComprada(quantidadeComprada);
    setPreco(preco);
}
void Pedido::setNumero(int numero){
    numero>=0 ? this->numero = numero :  this->numero = 0;
}
void Pedido::setDescricao (std::string descricao){
    this->descricao = descricao;
}
void Pedido::setQuantidadeComprada(int quantidadeComprada){
    quantidadeComprada>=0 ? this->quantidadeComprada = quantidadeComprada : this->quantidadeComprada = 0;
}
void Pedido::setPreco(double preco){
    preco>=0 ? this->preco = preco : this->preco = 0;
}
int Pedido::getNumero(){
    return 0;
}
std::string Pedido::getDescricao(){
    return descricao;
}
int Pedido::getQuantidadeComprada(){
        return quantidadeComprada;
}
double Pedido::getPreco(){
    return preco;
}
void Pedido::print(){
    std::cout<<"Descricao: "<<getDescricao()<<"\nQuantidade: "<<getQuantidadeComprada()<<"\nPreco: "<<getPreco()<<
    "\nTotal: "<<getPreco()*getQuantidadeComprada()<<std::endl;
}
