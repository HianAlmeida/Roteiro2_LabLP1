#include"Quadrado.cpp"
#include"Circulo.cpp"
#include"Triangulo.cpp"
#include<iostream>
using namespace std;
int main(){
    Circulo circulo(10, "Circulo");
    cout << "Area do " << circulo.getNome() << ": " <<circulo.calcularArea() << "\n" << endl;

    Quadrado quadrado(20, "Quadrado");
    cout << "Area do " << quadrado.getNome() << ": " <<quadrado.calcularArea() << "\n" << endl;

    Triangulo triangulo(60, 20, "triangulo");
    cout << "Area do " << triangulo.getNome() << ": " <<triangulo.calcularArea() << "\n" << endl;

    return 0;
}
