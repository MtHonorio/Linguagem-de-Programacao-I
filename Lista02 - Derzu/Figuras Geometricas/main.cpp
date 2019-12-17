#include <iostream>
#include "Figura.h"
#include "Figura.h"
#include "Retangulo.h"

using namespace std;
#include <vector>
int main()
{
    int x;
    double bs=0, alt=0, ra=0;

    Figura *n1 = new Figura();

   vector<Figura *> formas;

    cout<<"Tipo de figura: 1-Triangulo 2-Quadrado 3-Circulo 4-Retangulo\n";
    cin>>x;
    if(x==1||x==2||x==4){
        cout<<"Digite a base ";
        cin>>bs;
        cout<<"Digite a altura ";
        cin>>alt;
    }else{
        if(x==3){
            cout<<"Digite o raio ";
        cin>>ra;
        }
    }

    formas.push_back(new Retangulo(bs, alt, 0));

    n1->setBase(bs);
    n1->setAltura(alt);
    n1->setRaio(ra);



    cout<<"Area da figura:" << n1->Area(x);

    return 0;
}
