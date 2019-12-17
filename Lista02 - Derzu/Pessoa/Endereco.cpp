#include "Endereco.h"
#include <string>
#include <sstream>



Endereco::Endereco(){
	setNumero(0);
	setRua("");
	setBairro("");
	setCidade("");
	setEstado("");
	setCEP("");
}

Endereco::Endereco(int num, std::string rua, std::string bairro, std::string cidade, std::string estado, std::string CEP){
	setNumero(num);
	setRua(rua);
	setBairro(bairro);
	setCidade(cidade);
	setEstado(estado);
	setCEP(CEP);
}

void Endereco::setNumero(int x){
	numero = x;
}

void Endereco::setRua(std::string x){
	rua = x;
}

void Endereco::setBairro(std::string x){
	bairro = x;
}

void Endereco::setCidade(std::string x){
	cidade = x;
}

void Endereco::setEstado(std::string x){
	estado = x;
}

void Endereco::setCEP(std::string x){
	CEP = x;
}

std::string Endereco::toString(){

		std::stringstream ssNum;
		ssNum << numero;

	return "Numero: " + ssNum.str() + ", Rua: " + rua + ", Bairro: " + bairro + "\n"
	+ "Cidade: " + cidade + ", Estado: " + estado + ", CEP: " + CEP;
}
