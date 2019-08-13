#include"Funcionario.cpp"
#include"Consultor.cpp"
#include<iostream>
using namespace std;

int main(){

    Funcionario f1 = Consultor();
    Funcionario *c1 = new Consultor();

    f1.setNome("Hian Almeida");
    f1.setMatricula(333);
    f1.setSalario(1500);
    cout << f1.getSalario() << endl;

    c1->setSalario(1500);
    cout << c1->getSalario(25) << endl;


    return 0;
}
