#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(int matricula, std::string nome, double salario);
        void setNome(std::string nome);
        void setSalario(double salario);
        void setMatricula(int matricula);

        std::string getNome();
        double getSalario();
        int getMatricula();


        std::string nome;
        int matricula;
        double salario;
};


#endif // FUNCIONARIO_H
