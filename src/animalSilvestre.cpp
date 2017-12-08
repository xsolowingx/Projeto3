/**
 * @since 30/11/2017
 * @file animalSilvestre.cpp
 * @brief arquivo que contém as implementações da classe AnimalSilvestre
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "animalSilvestre.h"

/*=====Construtores e Destrutor=====*/
AnimalSilvestre::AnimalSilvestre(std::string _permissao_ibama): permissao_ibama(_permissao_ibama) {}

AnimalSilvestre::AnimalSilvestre() {}

AnimalSilvestre::~AnimalSilvestre() {}

/*=====Setter=====*/
void AnimalSilvestre::setPermissao(std::string _permission)
{
	this->permissao_ibama = _permission;
}