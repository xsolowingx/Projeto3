/**
 * @since 30/11/2017
 * @file aveExotica.cpp
 * @brief arquivo que contém as implementações da classe AveExotica
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "aveExotica.h"

/*=====Construtores e Destrutor=====*/
AveExotica::AveExotica(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
	char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
	std::string _nome_de_batismo,int _tamanho_do_bico,int _envergadura,
	std::string _permissao_ibama, std::string _pais_de_origem):

	Ave(_id,_classe,_nome_especie,_nome_cientifico,_sexo,_tamanho,
		_dieta,_veterinario,_tratador,_nome_de_batismo,_tamanho_do_bico,_envergadura),
	Exotico(_permissao_ibama,_pais_de_origem) {}

AveExotica::AveExotica() {}

AveExotica::~AveExotica() {}

/*=====Getters=====*/
std::string AveExotica::getPaisDeOrigem() const
{
	return this->pais_de_origem;
}

std::string AveExotica::getPermissao() const
{
	return this->permissao_ibama;
}