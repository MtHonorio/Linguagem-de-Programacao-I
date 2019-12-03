#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main(){
    
    Despesa* d1 = new Despesa();
    Despesa* d2 = new Despesa();

    string item;
    double valor;

    cin >> item;
    cin >> valor;    
    d1->setTipoDeGasto(item);
    d1->setValor(valor);

    cin >> item;
    cin >> valor; 
    d2->setTipoDeGasto(item);
    d2->setValor(valor);

    ControleDeGastos* c1 = new ControleDeGastos();

    c1->setDespesas(*d1, 1);
    c1->setDespesas(*d2, 2);


    cout << "Nome do produto: " << d1->getTipoDeGasto() << endl 
    << "Valor: " << d1->getValor() << endl;

    cout << "Nome do produto: " << d2->getTipoDeGasto() << endl 
    << "Valor: " << d2->getValor() << endl;

    cout << "Total de despesas: " << c1->calculaTotalDeDespesas() << endl;

    cin >> item;
    if(c1->existeDespesaDoTipo(item)){
        cout << "Produto existente";
    }else{
        cout << "Produto nao existe";
    }

    return 0;
}
