#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(void){

    char telefone[12];
    int idade;
    string nome;

    cin >> nome;
    Pessoa* p1 = new Pessoa(nome);

    cin >> nome;
    cin >> idade;
    cin >> telefone;
    Pessoa* p2 = new Pessoa(nome, idade, telefone);

    cout << "\nNome: " << p1->getNome() << endl << "Idade: " << p1->getIdade() << endl << "Telefone: " << p1->getTelefone() << endl << endl;
    cout << "\nNome: " << p2->getNome() << endl << "Idade: " << p2->getIdade() << endl << "Telefone: " << p2->getTelefone() << endl << endl;


    cin >> idade;
    cin >> telefone;
    p1->setIdade(idade);
    p1->setTelefone(telefone);

    cout << "Nome: " << p1->getNome() << endl << "Idade: " << p1->getIdade() << endl << "Telefone: " << p1->getTelefone() << endl << endl;

    cout << "Nome: " << p2->getNome() << endl << "Idade: " << p2->getIdade() << endl << "Telefone: " << p2->getTelefone() << endl << endl;

    return 0;
}
