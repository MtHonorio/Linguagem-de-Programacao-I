#pragma once
#define CONTROLEDEGASTOS_H
#include <iostream>
#include "Despesa.h"

using namespace std;

class ControleDeGastos{
    public:
        ControleDeGastos();

        void setDespesas(Despesa d, int pos);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(string tip);

    private:
        Despesa despesas[10];
};