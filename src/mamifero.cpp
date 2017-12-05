#include "mamifero.h"

Mamifero::Mamifero(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,std::string _cor_do_pelo):
		Animal(_id,_classe,_nome_especie,_nome_cientifico,_sexo,_tamanho,_dieta,_veterinario,_tratador,_nome_de_batismo),
		cor_do_pelo(_cor_do_pelo) {}

Mamifero::Mamifero() {}

Mamifero::~Mamifero() {}


void Mamifero::setCorDoPelo(std::string _cor)
{
	this->cor_do_pelo = _cor;
}

std::string Mamifero::getCorDoPelo()
{
	return this->cor_do_pelo;
}


std::ostream& Mamifero::print(std::ostream &o)
{
	o << this->id << ";" << this->classe << ";" << this->nome_especie << ";" << this->nome_cientifico
	  << ";" << this->sexo << ";" << this->tamanho << ";" << this->dieta << ";" << this->getVeterinario()
	  << ";" << this->getTratador() << ";" << this->nome_de_batismo << ";" << this->cor_do_pelo << ";" << std::endl;
	 return o;
}