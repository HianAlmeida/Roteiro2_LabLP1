#include"pessoa.cpp"
#include"endereco.cpp"
#include<iostream>
using namespace std;

int main(){
    Endereco ender = Endereco("Professora Carmem Moreira Coutinho", 429, "Jardim Cidade Universitaria", "João Pessoa",
                              "PB", "5888888888");
    Pessoa pessoa1;
    pessoa1.setEndereco(ender);
    pessoa1.setNome("Hian");
    pessoa1.setTelefone("(83) 9 9615 6363");

    cout << "Nome: " << pessoa1.getNome() << "\n" <<
    "Telefone: "<<pessoa1.getTelefone() << "\n"
    "Endereco: " << ender.toString() << "\n" <<
    endl;

    return 0;
}
