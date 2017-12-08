/**
 * @since 30/11/2017
 * @file nativo.h
 * @brief arquivo que contém as definições da classe Nativo
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _NATIVO_H
#define _NATIVO_H
#include "animalSilvestre.h"

class Nativo: public AnimalSilvestre
{
protected:
	std::string estado_de_origem;
	std::string autorizacao;

public:

	/*=====Construtores e Destrutor=====*/
	Nativo(std::string _permissao_ibama,std::string _estado_de_origem, std::string _autorizacao);
	Nativo();
	~Nativo();

	/*=====Setter=====*/
	void setAutorizacao(std::string _autorizacao);

	/*=====Getters=====*/
	virtual std::string getPermissao() const = 0;
	virtual std::string getEstadoDeOrigem() const = 0;
	virtual std::string getAutorizacao() const = 0;
	
};

#endif