#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include"FiguraGeometrica.h"

class Circulo: public FiguraGeometrica{
    private:
        double raio;
    public:
        Circulo();
        Circulo(double raio, std::string nome);
        void setRaio(double raio);
        double getRaio();
        double calcularArea();
        std::string getNome();
};



#endif // CIRCULO_H_INCLUDED
