#include "TrabalhadorAssalariado.h"
#include <string>
#include <iostream>


TrabalhadorAssalariado::TrabalhadorAssalariado() : Trabalhador()
{

}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, double salario) : Trabalhador(nome, salario){

}

double TrabalhadorAssalariado::getSalarioSemanal(){
    double salario;
    salario = getSalario() / 4;
    return salario;
}
