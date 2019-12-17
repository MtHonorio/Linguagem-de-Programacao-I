#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>
#include <iostream>

class Trabalhador
{
    public:
        Trabalhador();
        void setValorDaHora(double sl);
        Trabalhador(std::string nome, double salario);
        void setNome(std::string nome);
        void setSalario(double salario);
        std::string getNome();
        double getSalario();

    private:
        std::string nome;
        double salario;

};

#endif // TRABALHADOR_H
