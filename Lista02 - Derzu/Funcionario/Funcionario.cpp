#include "Funcionario.h"

Funcionario::Funcionario()
{
    setNome("");
    setSalario(0.0);
    setMatricula(0);
}

Funcionario::Funcionario(int matricula, std::string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
    setMatricula(matricula);
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setSalario(double salario){
    this->salario = salario;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}

std::string Funcionario::getNome(){
    return nome;
}

double Funcionario::getSalario(){
    return salario;
}

int Funcionario::getMatricula(){
    return matricula;
}

