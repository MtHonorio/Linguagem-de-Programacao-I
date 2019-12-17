#include "Consultor.h"
#include <iostream>

Consultor::Consultor() : Funcionario() {}

Consultor::Consultor(int m, std::string n, double s) : Funcionario(m, n, s) {}

double Consultor::getSalario(){
    return salario;
}

double Consultor::getSalarioComAcrescimo(){
    return salario + (salario /10);
}

double Consultor::getSalarioComAcrescimo(double porc){
    return salario + (salario * porc /100);
}

std::string Consultor::getNome(){
    return nome;
}

int Consultor::getMatricula(){
    return matricula;
}
