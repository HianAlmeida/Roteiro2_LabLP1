#ifndef MESADERESTAURANTE_H_INCLUDED
#define MESADERESTAURANTE_H_INCLUDED
#include"Pedido.h"
#include"Pedido.cpp"

class MesaDeRestaurante{
    private:
        int indice;
        Pedido pedidos[20];
    public:
        MesaDeRestaurante();
        void adicionarAoPedido(Pedido d);
        void zerarPedidos();
        double calculaTotal();
        void print();
};


#endif // MESADERESTAURANTE_H_INCLUDED
