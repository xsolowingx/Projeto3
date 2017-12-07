/**
 * @since 30/11/2017
 * @file funcionario.cpp
 * @brief arquivo que contém as implementações da classe Funcionario
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 01/12/17
 */
#include "funcionario.h"

/*=====Construtores e Destrutor=====*/
	Funcionario::Funcionario() {}

	Funcionario::Funcionario(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
	std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade, std::string _funcao) : id(_id), nome(_nome),
	cpf(_cpf), idade(_idade), tipo_sanguineo(_tipo_sanguineo), fatorRH(_fatorRH), especialidade(_especialidade), funcao(_funcao) {}
	
	Funcionario::~Funcionario() {}

/*=====Setters=====*/
void Funcionario::setID(std::string _id)
{
	this->id = _id;
}

void Funcionario::setNome(std::string _nome)
{
	this->nome = _nome;
}

void Funcionario::setCPF(std::string _cpf)
{
	this->cpf = _cpf;
}

void Funcionario::setIdade(std::string _idade)
{
	this->idade = _idade;
}

void Funcionario::setTipoSanguineo(std::string _tipo_sanguineo)
{
	this->tipo_sanguineo = _tipo_sanguineo;
}

void Funcionario::setFatorRH(std::string _fatorRH)
{
	this->fatorRH = _fatorRH;
}

void Funcionario::setEspecialidade(std::string _especialidade)
{
	this->especialidade = _especialidade;
}

/*=====Getters=====*/
std::string Funcionario::getID()
{
	return this->id;
}

std::string Funcionario::getNome()
{
	return this->nome;
}

std::string Funcionario::getCPF()
{
	return this->cpf;
}

std::string Funcionario::getIdade()
{
	return this->idade;
}

std::string Funcionario::getTipoSanguineo()
{
	return this->tipo_sanguineo;
}

std::string Funcionario::getFatorRH()
{
	return this->fatorRH;
}

std::string Funcionario::getEspecialidade()
{
	return this->especialidade;
}

std::string Funcionario::getFuncao()
{
	return this->funcao;
}

std::istream& operator>>(std::istream &i,Funcionario &f)
{
	return f.scan(i);
}

std::ostream& operator<<(std::ostream &o,Funcionario &f)
{
	return f.print(o);
}
