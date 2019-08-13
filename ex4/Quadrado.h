#ifndef QUADRADO_H_INCLUDED
#define QUADRADO_H_INCLUDED
#include"FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{
    private:
        double lado;
    public:
        Quadrado();
        Quadrado(double lado, std::string nome);
        void setLado(double lado);
        double getLado();
        double calcularArea();
        std::string getNome();
};



#endif // QUADRADO_H_INCLUDED
