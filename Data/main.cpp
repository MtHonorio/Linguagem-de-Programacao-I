#include <iostream>
#include <stdio.h>
#include "Data.h"

using namespace std;

int main(void){

    Data* d1 = new Data();

    d1->setDia(-1);
    d1->setMes(-5);
    d1->setAno(-10);

    printf("Data valida : %02d/%02d/%04d\n", d1->getDia(), d1->getMes(), d1->getAno());

    char c;
    int d, m, a;
    cout << "Qual o Dia de hoje?" << endl;
    cin >> d;
    d1->setDia(d);

    cout << "Qual o Mes?" << endl;
    cin >> m;
    d1->setMes(m);

    cout << "Qual o Ano?" << endl;
    cin >> a;
    d1->setAno(a);
    
    printf("Dia atual : %02d/%02d/%04d\n", d1->getDia(), d1->getMes(), d1->getAno());

    cout << "Deseja avancar dia? [S/n]" << endl;
    cin >> c;
    if (c == 'S' || c == 's'){
        d1->AvancarDia();
        printf("Data Avanca : %02d/%02d/%04d\n", d1->getDia(), d1->getMes(), d1->getAno());
        
    }
    else{
        return 0;}
    return 0;
}
