#include"MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    indice = 0;
}
void MesaDeRestaurante::adicionarAoPedido(Pedido d){
    for(int i=0; i<20; i++){
        if(pedidos[i].getDescricao() == d.getDescricao()){
            pedidos[i].setQuantidadeComprada( pedidos[i].getQuantidadeComprada() + d.getQuantidadeComprada() );
            return;
        }
    }
    pedidos[indice] = d;
    indice++;
}
void MesaDeRestaurante::zerarPedidos(){
    for(int i=0; i<20; i++)
        pedidos[i].setQuantidadeComprada(0);
}
double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    for(int i=0; i<20; i++)
        total += pedidos[i].getPreco() * pedidos[i].getQuantidadeComprada();
    return total;
}
void MesaDeRestaurante::print(){
    for(int i=0; i<20; i++){
        if(pedidos[i].getQuantidadeComprada()>0)
            pedidos[i].print();
    }
}
