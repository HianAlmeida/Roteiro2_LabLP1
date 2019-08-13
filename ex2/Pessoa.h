#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include"Endereco.h"

class Pessoa{
    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;
    public:
        void setNome(std::string nome);
        void setTelefone(std::string telefone);
        void setEndereco(Endereco endereco);
        std::string getNome();
        std::string getTelefone();
        Endereco getEndereco();
};

#endif // PESSOA_H_INCLUDED
