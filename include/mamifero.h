/**
 * @since 30/11/2017
 * @file mamifero.h
 * @brief arquivo que contém as definições da classe Mamifero
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _MAMIFERO_H
#define _MAMIFERO_H
#include "animal.h"

class Mamifero: public Animal
{
protected:
	std::string cor_do_pelo;

public:
	
	/*=====Construtores e Destrutor=====*/
	Mamifero(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,std::string _cor_do_pelo);
	Mamifero();
	~Mamifero();
	
	/*=====Setter=====*/
	void setCorDoPelo(std::string _cor);

	/*=====Getter=====*/
	std::string getCorDoPelo();

	/*=====Método print=====*/
	std::ostream& print(std::ostream &o);
	
};




#endif