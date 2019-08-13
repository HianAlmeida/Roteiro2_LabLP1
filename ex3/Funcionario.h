#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED
#include<string>

class Funcionario{
    protected:
        std::string nome;
        int matricula;
        float salario;
    public:
        Funcionario();
        void setNome(std::string nome);
        void setMatricula(int matricula);
        void setSalario(float salario);
        std::string getNome();
        int getMatricula();
        virtual float getSalario();
        virtual float getSalario(float percentual);

};
#endif // FUNCIONARIO_H_INCLUDED
