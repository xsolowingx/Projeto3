#include "veterinario.h"

/*=====_=====*/

Veterinario::Veterinario(std::string _id, std::string _nome, std::string _cpf, int _idade, 
				std::string _tipo_sanguineo, char _fatorRH, std::string _especialidade,std::string _funcao):
				Funcionario(_id,_nome,_cpf,_idade,_tipo_sanguineo,_fatorRH,_especialidade,_funcao) {}

Veterinario::Veterinario(Veterinario &v):
	Funcionario(v.id,v.nome,v.cpf,v.idade,v.tipo_sanguineo,v.fatorRH,v.especialidade,v.funcao) {}
	
Veterinario::Veterinario() {}


Veterinario::~Veterinario() {}

/*=====_=====*/

std::ostream& Veterinario::print(std::ostream &o)
{
	o << this->id << ";" << this->nome << ";" << this->cpf << ";" << this->idade
	  << ";" << this->tipo_sanguineo << ";" << this->fatorRH << ";" << this->especialidade
	  << ";" << this->funcao << ";" << std::endl;
	return o;
}

/*=====_=====*/

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