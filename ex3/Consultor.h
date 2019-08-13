#ifndef CONSULTOR_H_INCLUDED
#define CONSULTOR_H_INCLUDED
#include"Funcionario.h"


class Consultor : public Funcionario{
    public:
        Consultor();
        float getSalario();
        float getSalario(float percentual);
};


#endif // CONSULTOR_H_INCLUDED
