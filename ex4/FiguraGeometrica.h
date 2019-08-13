#ifndef FIGURAGEOMETRICA_H_INCLUDED
#define FIGURAGEOMETRICA_H_INCLUDED
#include<string>

class FiguraGeometrica{
    protected:
        std::string nome;
    public:
        virtual double calcularArea() = 0;
        virtual std::string getNome() = 0;
};


#endif // FIGURAGEOMETRICA_H_INCLUDED
