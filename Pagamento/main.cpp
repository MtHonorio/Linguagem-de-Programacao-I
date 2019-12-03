#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamento.h"

using namespace std;

int main(void){

    Pagamento* p1 = new Pagamento();
    Pagamento* p2 = new Pagamento();

    string nome;
    float pag;

    cin >> pag;
    p1->setValorPagamento(pag);
    cin >> nome;
    p1->setNomeDoFuncionario(nome);

    cin >> pag;
    p2->setValorPagamento(pag);
    cin >> nome;
    p2->setNomeDoFuncionario(nome);


    cout << "\nNome: " << p1->getNomeDoFuncionario() << endl << "Pagamento: " << p1->getValorPagamento() << endl;
    cout << "\nNome: " << p2->getNomeDoFuncionario() << endl << "Pagamento: " << p2->getValorPagamento() << endl;

    ControleDePagamento* c1 = new ControleDePagamento();

    c1->setPagamentos(*p1, 1);
    c1->setPagamentos(*p2, 2);

    cout << "\nTotal de Pagamentos efetuados: " << c1->calculaTotalDePagamentos() << endl;

    cin >> nome;
    if(c1->exitePagamentoParaFuncionario(nome)){
        cout << "Pagamento realizado.\n";
    }else{
        cout << "Pagamento nao existente.\n";
    }

    return 0;
}