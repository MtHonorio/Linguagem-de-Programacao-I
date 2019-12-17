#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor : public Funcionario
{
public:
    Consultor();
    Consultor(int m, std::string n, double s);
    double Acrescimo(double salario);
    double getSalario();
    double getSalarioComAcrescimo(double porc);
    double getSalarioComAcrescimo();
    std::string getNome();
    int getMatricula();

};


#endif // CONSULTOR_H
