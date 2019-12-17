#include "TrabalhadorPorHora.h"
#include "Trabalhador.h"
#include <string>
#include <iostream>

TrabalhadorPorHora::TrabalhadorPorHora() : Trabalhador()
{

}

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, double salario) : Trabalhador(nome, salario){
    setHorasTrabalhadas(0);
}

double TrabalhadorPorHora::getSalarioSemanal(){
    double salario;
    salario = getSalario();
	
	if(horasTrabalhadas <=40)
		salario *= horasTrabalhadas;
	else{
		float exc;
		exc = horasTrabalhadas - 40;
		exc = exc * 1.5;
		salario *= (horasTrabalhadas + exc);
	}
		
    return salario;
}


void TrabalhadorPorHora::setHorasTrabalhadas(float x){
    horasTrabalhadas = x;
}

float TrabalhadorPorHora::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

double TrabalhadorPorHora::getSalarioMensal(){
  double salario;
  salario = getSalarioSemanal() * 4;
  return salario;
}

