#include <iostream>
#include "Empregado.h"

using namespace std;

int main(void){

    Empregado* e1 = new Empregado();
    Empregado* e2 = new Empregado();

    char nome[100], sobrenome[100];
    float s;
    
    cin >> nome;
    e1->setNome(nome);
    cin >> sobrenome;
    e1->setSobrenome(sobrenome);
    cin >> s;
    e1->setSalario(s);

    cout << "Empregado 1\n" << "Nome : " << e1->getNome() << endl << "Sobrenome : " << 
    e1->getSobrenome() << endl << "Salario : " << e1->getSalario() << endl << endl; 

    cout << "\nSalario com aumento de 10% : " << e1->getSalario() * 1.1 << endl 
    << "Novo salario anual: " << e1->getSalario() * 1.1 * 12 << endl;

    cin >> nome;
    e2->setNome(nome);
    cin >> sobrenome;
    e2->setSobrenome(sobrenome);
    cin >> s;
    e2->setSalario(s);

    cout << "Empregado 2\n" << "Nome : " << e2->getNome() << endl << "Sobrenome : " << 
    e2->getSobrenome() << endl << "Salario mensal: " << e2->getSalario() << endl 
    << "Salario anual: " << e2->getSalario() * 12 << endl; 
    
    cout << "\nSalario com aumento de 10% : " << e2->getSalario() * 1.1 << endl 
    << "Novo salario anual: " << e2->getSalario() * 1.1 * 12 << endl;
    
    return 0;
}
