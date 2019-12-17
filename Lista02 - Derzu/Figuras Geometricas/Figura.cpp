#include "Figura.h"
#define PI 3.1415
#include <iostream>

Figura::Figura()
{
   this->base = 0;
   this->raio = 0;
   this->area = 0;
}

Figura::Figura(double base, double altura, double raio){
   setBase(base);
   setAltura(altura);
   setRaio(raio);
}

void Figura::setBase(double base){
    this->base = base;
}

void Figura::setAltura(double altura){
    this->altura = altura;
}

void Figura::setRaio(double raio){
    this->raio = raio;
}

void Figura::Triangulo(){
    this->area = (base * altura) / 2;
}

void Figura::Quadrado(){
    this->area = (base * altura);
}

void Figura::Circulo(){
    this->area = (PI * raio * raio);
}

double Figura::Area(int x){
    if(x==1)
        Triangulo();
    else{
        if(x==2||x==4)
            Quadrado();
        else{
        if(x==3)
            Circulo();
        }
    }

    return this->area;
}
