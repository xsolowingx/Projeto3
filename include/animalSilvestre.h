/**
 * @since 30/11/2017
 * @file animalSilvestre.h
 * @brief arquivo que contém as definições da classe AnimalSilvestre
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _ANIMALSILVESTRE_H
#define _ANIMALSILVESTRE_H
#include <string>

class AnimalSilvestre
{
protected:
	std::string permissao_ibama;

public:

	/*=====Construtores e Destrutor=====*/
	AnimalSilvestre(std::string _permissao_ibama);
	AnimalSilvestre();
	~AnimalSilvestre();

	/*=====Setter=====*/
	void setPermissao(std::string _permission);

	/*=====Getter=====*/
	virtual std::string getPermissao() const = 0;

};


#endif