#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
    public:
        Figura();
        Figura(double base, double altura, double raio);
        double Area(int x);
        void Triangulo();
        void Quadrado();
        void Circulo();
        void setBase(double base);
        void setAltura(double altura);
        void setRaio(double raio);
        double getArea();

    //private:
        double base;
        double altura;
        double raio;
        double area;
};















#endif // FIGURA_H
