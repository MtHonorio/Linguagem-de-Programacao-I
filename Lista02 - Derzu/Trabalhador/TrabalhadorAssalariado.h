#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"
#include <string>
#include <iostream>

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(std::string nome, double salario);
        double getSalarioSemanal();
    private:
};

#endif // TRABALHADORASSALARIADO_H
