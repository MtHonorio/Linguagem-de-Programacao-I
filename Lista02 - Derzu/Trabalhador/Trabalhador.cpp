#include "Trabalhador.h"
#include <string>
#include <iostream>


Trabalhador::Trabalhador()
{
    setNome("-");
    setSalario(0);
}


Trabalhador::Trabalhador(std::string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
}

void Trabalhador::setNome(std::string nm){
    nome = nm;
}

void Trabalhador::setSalario(double sl){
    salario = sl;
}

void Trabalhador::setValorDaHora(double sl){
    salario = sl;
}

std::string Trabalhador::getNome(){
    return nome;
}

double Trabalhador::getSalario(){
    return salario;
}

