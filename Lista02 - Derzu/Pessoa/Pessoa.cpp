#include "Pessoa.h"
#include <sstream>
#include <iostream>

void Pessoa::setNome(std::string x){
	nome = x;
}

void Pessoa::setTelefone(std::string x){
	telefone = x;
}

void Pessoa::setEnd(Endereco end) {
	endereco = end;
}

std::string Pessoa::getNome(){
	return nome;
}

std::string Pessoa::getTelefone(){
	return telefone;
}

Pessoa::Pessoa(std::string nome, std::string telefone, Endereco end){
	setNome(nome);
	setTelefone(telefone);
	setEnd(end);

}

Pessoa::Pessoa(){
	setNome("");
	setTelefone("");
	setEnd(Endereco());
}

std::string Pessoa::getEnd()
{
    std::string a = endereco.toString();
    return a;
}

std::string Pessoa::ListAll(){
    return ( "Nome: " + getNome() + ", " + getEnd() + ", Telefone: " + getTelefone() + "\n\n" );
}


