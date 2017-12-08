/**
 * @since 30/11/2017
 * @file reptil.h
 * @brief arquivo que contém as definições da classe Reptil
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _REPTIL_H
#define _REPTIL_H
#include "animal.h"

class Reptil: public Animal
{
protected:
	bool venenoso;
	std::string tipo_veneno;

public:

	/*=====Construtores e Destrutor=====*/
	Reptil(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,bool _venenoso,std::string _tipo_veneno);
	Reptil();
	~Reptil();
	
	/*=====Getters=====*/
	std::string getTipoVeneno();
	bool getVenenoso();

	/*=====Método print=====*/
	std::ostream& print(std::ostream &o);

};






#endif