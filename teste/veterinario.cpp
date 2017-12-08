/**
 * @since 30/11/2017
 * @file veterinario.cpp
 * @brief arquivo que contém as implementações da classe Veterinario
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "veterinario.h"

/*=====Construtores e Destrutor=====*/
Veterinario::Veterinario(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
				std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade,std::string _funcao):

				Funcionario(_id,_nome,_cpf,_idade,_tipo_sanguineo,_fatorRH,_especialidade,_funcao) {}

Veterinario::Veterinario(Veterinario &v):
	Funcionario(v.id,v.nome,v.cpf,v.idade,v.tipo_sanguineo,v.fatorRH,v.especialidade,v.funcao) {}
	
Veterinario::Veterinario() {}


Veterinario::~Veterinario() {}

/*=====Métodos de manipulação de arquivo=====*/
std::ostream& Veterinario::print(std::ostream &o)
{
	o << this->id << ";" << this->nome << ";" << this->cpf << ";" << this->idade
	  << ";" << this->tipo_sanguineo << ";" << this->fatorRH << ";" << this->especialidade
	  << ";" << this->funcao << ";" << std::endl;
	return o;
}

std::istream& Veterinario::scan(std::istream &i)
{
	if(std::getline(i,this->id,';'))
	{
		std::getline(i,this->nome,';');
		std::getline(i,this->cpf,';');
		std::getline(i,this->idade,';');
		std::getline(i,this->tipo_sanguineo,';');
		std::getline(i,this->fatorRH,';');
		std::getline(i,this->especialidade,';');
		std::getline(i,this->funcao,'\n');
	}

	return i;
}

/*=====Sobrecarga do operador "='=====*/
Veterinario& Veterinario::operator =(Veterinario &v)
{
	this->id = v.getID();
	this->nome = v.getNome();
	this->cpf = v.getCPF();
	this->idade = v.getIdade();
	this->tipo_sanguineo = v.getTipoSanguineo();
	this->fatorRH = v.getFatorRH();
	this->especialidade = v.getEspecialidade();
	this->funcao = v.getFuncao();

	return *this;
}

/*=====Sobrecarga do operador "<<" para poder dizer qual Veterinário está cuidando daquele animal.=====*/
std::ostream& operator <<(std::ostream &o,Veterinario &v)
{
	o << "Este animal esta sobre os cuidados do Veterinario: " << v.getID() << std::endl
	  << "Nome: " << v.getNome() << std::endl;
	return o;
}