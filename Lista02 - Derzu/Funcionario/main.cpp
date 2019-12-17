#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario *n1 = new Funcionario(01,"Cerbero", 50);
    cout << " Matricula: " << n1->getMatricula();
    cout << ", Nome: " << n1->getNome();
    cout << ", Salario: " << n1->getSalario() << endl;
    cout<<"\n";
    Consultor *n2 = new Consultor(02, "Luisianna", 100);

    cout << " Matricula: " << n2->getMatricula();
    cout << ", Nome: " << n2->getNome();
    cout<<"\n Salario normal: " << n2->getSalario()<<endl;
    cout<<" Salario com 10% acrescimo: "<< n2->getSalarioComAcrescimo()<<endl;
    cout<<" Salario com acrescimo escolhido: "<< n2->getSalarioComAcrescimo(50)<<endl;
    return 0;
}
