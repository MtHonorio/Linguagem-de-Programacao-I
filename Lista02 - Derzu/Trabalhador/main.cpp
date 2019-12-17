#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <string>


using namespace std;

int main()
{
    Trabalhador *n1 = new Trabalhador();

    n1->setNome("Pedro");
    n1->setSalario(1300);

    cout << "Nome: "<< n1->getNome() << " " ;
    cout << "\nSalario mensal: RS"<< n1->getSalario() << endl;

    TrabalhadorAssalariado *n2 = new TrabalhadorAssalariado();

    n2->setNome("Stella");
    n2->setSalario(1500);

    cout << "\nNome: "<< n2->getNome() ;
    cout << "\nSalario semanal: RS"<< n2->getSalarioSemanal();
    cout << ", Salario mensal: RS"<< n2->getSalario()<< endl;

    TrabalhadorPorHora *n3 = new TrabalhadorPorHora();

    n3->setNome("Zion");
    n3->setValorDaHora(95.7);
    n3->setHorasTrabalhadas(5);

    cout << "\nNome: "<< n3->getNome();
    cout<< "\nHoras trabalhadas por semana: "<< n3->getHorasTrabalhadas();
    cout << ", Salario por hora: RS"<< n3->getSalario();
    cout << "\nSalario semanal: RS"<< n3->getSalarioSemanal();
    cout << ", Salario mensal: RS"<< n3->getSalarioMensal()<< endl;



    return 0;
}
