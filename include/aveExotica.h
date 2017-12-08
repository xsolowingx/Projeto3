/**
 * @since 30/11/2017
 * @file aveExotica.h
 * @brief arquivo que contém as definições da classe AveExotica
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _AVEEXOTICA_H
#define _AVEEXOTICA_H
#include "ave.h"
#include "exotico.h"

class AveExotica: public Ave,Exotico
{
public:

	/*=====Construtores e Destrutor=====*/
	AveExotica(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,int _tamanho_do_bico,int _envergadura,
		std::string _permissao_ibama, std::string _pais_de_origem);
	AveExotica();
	~AveExotica();

	/*=====Getters=====*/
	std::string getPaisDeOrigem() const;
	std::string getPermissao() const;
	
};


#endif