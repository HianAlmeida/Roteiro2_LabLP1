#include"RestauranteCaseiro.h"
#include"RestauranteCaseiro.cpp"
#include"MesaDeRestaurante.cpp"
#include<iostream>
using namespace std;
int main(){
    RestauranteCaseiro restaurante = RestauranteCaseiro();
    Pedido p;

    p = Pedido(12, "pizza", 2, 40);

    restaurante.adicionarAoPedido(1, p);

    p = Pedido(13, "sorvete", 3, 15);

    restaurante.adicionarAoPedido(1, p);

    restaurante.print();

    cout << "Total: R$" <<restaurante.calcularTotalRestaurante()<< endl;

    return 0;



}
