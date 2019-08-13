#include"RestauranteCaseiro.h"
#include"MesaDeRestaurante.h""
#include<iostream>

void RestauranteCaseiro::adicionarAoPedido(int indiceMesa, Pedido p){
    mesas[indiceMesa].adicionarAoPedido(p);
}
double RestauranteCaseiro::calcularTotalRestaurante(){
    double total = 0;
    for(int i=0; i<20; i++){
        total += mesas[i].calculaTotal();
    }
    return total;
}
void RestauranteCaseiro::print(){
    for(int i=0 ; i<20 ; i++){
        if(mesas[i].calculaTotal() > 0){
        std::cout << "Mesa " << i << ": \n";
        mesas[i].print();
        std::cout << "\n\n";
        }
    }
}
