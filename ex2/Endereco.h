#ifndef ENDERECO_H_INCLUDED
#define ENDERECO_H_INCLUDED
#include<string>
class Endereco{
    private:
        std::string rua;
        int numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
    public:
        Endereco();
        Endereco(std::string rua, int numero, std::string bairro,
                 std::string cidade, std::string estado, std::string cep);
        std::string toString();
};

#endif // ENDERECO_H_INCLUDED
