#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED
#include<string>

class Pedido{
    private:
        int numero;
        std::string descricao;
        int quantidadeComprada;
        double preco;
    public:
        Pedido();
        Pedido(int numero, std::string descricao, int quantidadeComprada, double preco);
        void setNumero(int numero);
        void setDescricao (std::string descricao);
        void setQuantidadeComprada(int quantidadeComprada);
        void setPreco(double preco);
        int getNumero();
        std::string getDescricao();
        int getQuantidadeComprada();
        double getPreco();
        void print();
};

#endif // PEDIDO_H_INCLUDED
