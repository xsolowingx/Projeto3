/**
 * @since 30/11/2017
 * @file nativo.cpp
 * @brief arquivo que contém as implementações da classe Nativo
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "nativo.h"

/*=====Construtores e Destrutor=====*/
Nativo::Nativo(std::string _permissao_ibama,std::string _estado_de_origem, std::string _autorizacao):
	AnimalSilvestre(_permissao_ibama), estado_de_origem(_estado_de_origem), autorizacao(_autorizacao) {}

Nativo::Nativo() {}

Nativo::~Nativo() {}

/*=====Setter=====*/
void Nativo::setAutorizacao(std::string _autorizacao)
{
	this->autorizacao = _autorizacao;
}