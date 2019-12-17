#pragma once
#include <string>
#include <iostream>

class Endereco{
	public:
		Endereco();
		Endereco(int num, std::string rua, std::string bairro, std::string cidade, std::string estado, std::string CEP);

		std::string toString();
		void setNumero(int x);
		void setRua(std::string x);
		void setBairro(std::string x);
		void setCidade(std::string x);
		void setEstado(std::string x);
		void setCEP(std::string x);
	private:
		int numero;
		std::string rua;
		std::string bairro;
		std::string cidade;
		std::string estado;
		std::string CEP;
};
