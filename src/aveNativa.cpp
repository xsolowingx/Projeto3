/**
 * @since 30/11/2017
 * @file aveNativa.cpp
 * @brief arquivo que contém as implementações da classe AveNativa
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "aveNativa.h"

/*=====Construtores e Destrutor=====*/
AveNativa::AveNativa(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
	char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
	std::string _nome_de_batismo,int _tamanho_do_bico,int _envergadura, std::string _permissao_ibama,
	std::string _estado_de_origem, std::string _autorizacao):

	Ave(_id,_classe,_nome_especie,_nome_cientifico,_sexo,_tamanho,
		_dieta,_veterinario,_tratador,_nome_de_batismo,_tamanho_do_bico,_envergadura), 
	Nativo(_permissao_ibama,_estado_de_origem,_autorizacao) {}

AveNativa::AveNativa() {}

AveNativa::~AveNativa() {}

/*=====Getters=====*/
std::string AveNativa::getPermissao() const
{
	return this->permissao_ibama;
}

std::string AveNativa::getEstadoDeOrigem() const
{
	return this->estado_de_origem;
}

std::string AveNativa::getAutorizacao() const
{
	return this->autorizacao;
}