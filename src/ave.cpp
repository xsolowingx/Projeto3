#include "ave.h"

Ave::Ave(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,int _tamanho_do_bico,int _envergadura):
		Animal(_id,_classe,_nome_especie,_nome_cientifico,_sexo,_tamanho,_dieta,_veterinario,_tratador,_nome_de_batismo),
		tamanho_do_bico(_tamanho_do_bico), envergadura(_envergadura) {}

Ave::Ave() {}

Ave::~Ave() {}

void Ave::setTamanhoDoBico(int _tb)
{
	this->tamanho_do_bico = _tb;
}

void Ave::setEnvergadura(int _enve)
{
	this->envergadura = _enve;
}

int Ave::getTamanhoDoBico()
{
	return this->tamanho_do_bico;
}

int Ave::getEnvergadura()
{
	return this->envergadura;
}

std::ostream& Ave::print(std::ostream &o)
{
	o << this->id << ";" << this->classe << ";" << this->nome_especie << ";" << this->nome_cientifico
	  << ";" << this->sexo << ";" << this->tamanho << ";" << this->dieta << ";" << this->getVeterinario()
	  << ";" << this->getTratador() << ";" << this->nome_de_batismo << ";" << this->tamanho_do_bico
	  << ";" << this->envergadura << ";" << std::endl;
	return o;
}