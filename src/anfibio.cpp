#include "anfibio.h"

/*=====Construtores e destrutor=====*/
Anfibio::Anfibio(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho, std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo, int _mudas_ja_realizadas, std::string _ultima_muda):
			Animal(_id,_classe,_nome_especie,_nome_cientifico,_sexo,_tamanho,_dieta,_veterinario,_tratador,_nome_de_batismo),
			mudas_ja_realizadas(_mudas_ja_realizadas), ultima_muda(_ultima_muda) {}

Anfibio::Anfibio() {}

Anfibio::~Anfibio() {}
	
/*=====Setter=====*/	
void Anfibio::setUltimaMuda(std::string _ultima_muda)
{
	this->ultima_muda = _ultima_muda;
	this->mudas_ja_realizadas++;
}	

/*=====Getters=====*/
int Anfibio::getMudasJaRealizadas()
{
	return this->mudas_ja_realizadas;
}

std::string Anfibio::getUltimaMuda()
{
	return this->ultima_muda;
}

/*=====Método print para "jogar"os dados da classe num arquivo=====*/
std::ostream& Anfibio::print(std::ostream &o) const
{
	o << this->id << ";" << this->classe << ";" << this->nome_especie << ";" << this->nome_cientifico
	  << ";" << this->sexo << ";" << this->tamanho << ";" << this->dieta << ";" << this->getVeterinario()
	  << ";" << this->getTratador() << ";" << this->nome_de_batismo << ";" << this->mudas_ja_realizadas 
	  << ";" << this->ultima_muda << std::endl;
	return o;
}