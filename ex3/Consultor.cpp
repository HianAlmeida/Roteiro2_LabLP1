#include"Consultor.h"

Consultor::Consultor():Funcionario(){}
float Consultor::getSalario(){
   return salario + salario*0.1;
}
float Consultor::getSalario(float percentual){
    return salario + salario * percentual/100;
}
