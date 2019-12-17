#pragma once
#include <string>
#include <iostream>
#include "Endereco.h"

class Pessoa{
	public:
		Pessoa();
		Pessoa(std::string nome, std::string telefone, Endereco endereco);
		void setNome(std::string x);
		void setTelefone(std::string x);
		std::string getNome();
		std::string getTelefone();
		void setEnd(Endereco end);
		std::string getEnd();
		std::string ListAll();

	private:
		std::string nome;
		Endereco endereco;
		std::string telefone;









};
