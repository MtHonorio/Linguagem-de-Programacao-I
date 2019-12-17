#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <string>
#include <iostream>

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(std::string nome, double salario);
        double getSalarioSemanal();
        void setHorasTrabalhadas(float x);
        float getHorasTrabalhadas();
        double getSalarioMensal();

    private:
        float horasTrabalhadas;
};

#endif // TRABALHADORPORHORA_H
