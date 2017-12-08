/**
 * @since 30/11/2017
 * @file reptil.cpp
 * @brief arquivo que contém as implementações da classe Reptil
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "reptil.h"

/*=====Construtores e Destrutor=====*/
Reptil::Reptil(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo, bool _venenoso, std::string _tipo_veneno):
		Animal(_id,_classe,_nome_especie,_nome_cientifico,_sexo,_tamanho,_dieta,_veterinario,_tratador,_nome_de_batismo),
		venenoso(_venenoso), tipo_veneno(_tipo_veneno) {}

Reptil::Reptil() {}

Reptil::~Reptil() {}

/*=====Getters=====*/
std::string Reptil::getTipoVeneno()
{
	return this->tipo_veneno;
}

bool Reptil::getVenenoso()
{
	return this->venenoso;
}

/*=====Método print=====*/
std::ostream& Reptil::print(std::ostream &o)
{
	o << this->id << ";" << this->classe << ";" << this->nome_especie << ";" << this->nome_cientifico
	  << ";" << this->sexo << ";" << this->tamanho << ";" << this->dieta << ";" << this->getVeterinario()
	  << ";" << this->getTratador() << ";" << this->nome_de_batismo << ";" << this->venenoso
	  << ";" << this->tipo_veneno << ";" << std::endl;
	return o;
}