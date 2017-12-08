/**
 * @since 30/11/2017
 * @file exotico.h
 * @brief arquivo que contém as definições da classe Exotico
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _EXOTICO_H
#define _EXOTICO_H
#include "animalSilvestre.h"

class Exotico: public AnimalSilvestre
{
protected:
	std::string pais_de_origem;

public:
	
	/*=====Construtores e Destrutor=====*/
	Exotico(std::string _permissao_ibama,std::string _pais_de_origem);
	Exotico();
	~Exotico();

	/*=====Getters=====*/
	virtual std::string getPaisDeOrigem() const = 0;
	virtual std::string getPermissao() const = 0;
	
};


#endif