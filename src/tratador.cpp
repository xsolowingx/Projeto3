#include "tratador.h"

Tratador::Tratador(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
				std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade,std::string _funcao):
				Funcionario(_id,_nome,_cpf,_idade,_tipo_sanguineo,_fatorRH,_especialidade,_funcao) {}

Tratador::Tratador(Tratador &t):
	Funcionario(t.id,t.nome,t.cpf,t.idade,t.tipo_sanguineo,t.fatorRH,t.especialidade,t.funcao) {}

Tratador::Tratador() {}

Tratador::~Tratador() {}

std::ostream &Tratador::print(std::ostream &o)
{
	o << this->id << ";" << this->nome << ";" << this->cpf << ";" << this->idade
	  << ";" << this->tipo_sanguineo << ";" << this->fatorRH << ";" << this->especialidade
	  << ";" << this->funcao << ";" << std::endl;
	return o;
}

/*=====_=====*/

Tratador& Tratador::operator =(Tratador &t)
{
	this->id = t.getID();
	this->nome = t.getNome();
	this->cpf = t.getCPF();
	this->idade = t.getIdade();
	this->tipo_sanguineo = t.getTipoSanguineo();
	this->fatorRH = t.getFatorRH();
	this->especialidade = t.getEspecialidade();
	this->funcao = t.getFuncao();

	return *this;
}

std::istream& Tratador::scan(std::istream &i)
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

/*=====Sobrecarga do operador "<<" para poder dizer qual Tratador está cuidando daquele animal.=====*/

std::ostream& operator <<(std::ostream &o,Tratador &t)
{
	o << "Este animal esta sobre os cuidados do Tratador: " << t.getID() << std::endl
	  << "Nome: " << t.getNome() << std::endl;
	return o;
}