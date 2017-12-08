/**
 * @since 30/11/2017
 * @file ave.h
 * @brief arquivo que contém as definições da classe Ave
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _AVE_H
#define _AVE_H
#include "animal.h"

class Ave: public Animal
{
protected:
	int tamanho_do_bico;
	int envergadura;
public:

	/*=====Construtores e Destrutor=====*/
	Ave(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,int _tamanho_do_bico,int _envergadura);
	Ave();
	~Ave();

	/*=====Setters=====*/
	void setTamanhoDoBico(int _tb);
	void setEnvergadura(int _enve);

	/*=====Getters=====*/
	int getTamanhoDoBico();
	int getEnvergadura();

	/*=====Método print=====*/
	std::ostream& print(std::ostream &o);
	
};

#endif