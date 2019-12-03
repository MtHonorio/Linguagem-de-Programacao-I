#include <iostream>
#include "Invoice.h"

using namespace std;

int main(void){
    Invoice* i1 = new Invoice();

    i1->setNumero(-1);
    i1->setDescricao("");
    i1->setQuantidade(-5);
    i1->setPreco(-2);

    int n, q, ni = 1;
    double p;
    char stringD[100];

    cout << "Item 1 \n" << "Numero : " << i1->getNumero() << endl << "Descricao : " <<  i1->getDescricao() << endl 
    << "Preco : " << i1->getPreco() << endl << endl;
    
    ni++;
    cin >> n;
    i1->setNumero(n);
    cin >> stringD;
    i1->setDescricao(stringD);
    cin >> q;
    i1->setQuantidade(q);
    cin >> p;
    i1->setPreco(p);


    cout << "Item " << ni << "\nNumero : " << i1->getNumero() << endl << "Descricao : " <<  i1->getDescricao() << endl 
    << "Preco : " << i1->getPreco() << endl << "Valor total : " << i1->getInvoiceAmount();

    return 0;
}
