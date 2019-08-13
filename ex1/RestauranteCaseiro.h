#ifndef RESTAURANTECASEIRO_H_INCLUDED
#define RESTAURANTECASEIRO_H_INCLUDED
#include "MesaDeRestaurante.h"

class RestauranteCaseiro{
    private:
        MesaDeRestaurante mesas[20];
    public:
        void adicionarAoPedido(int indiceMesa, Pedido p);
        double calcularTotalRestaurante();
        void print();
};

#endif // RESTAURANTECASEIRO_H_INCLUDED
