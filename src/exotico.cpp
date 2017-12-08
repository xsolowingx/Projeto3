/**
 * @since 30/11/2017
 * @file exotico.cpp
 * @brief arquivo que contém as implementações da classe Exotico
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "exotico.h"

/*=====Construtores e Destrutor=====*/
Exotico::Exotico(std::string _permissao_ibama,std::string _pais_de_origem):
	AnimalSilvestre(_permissao_ibama), pais_de_origem(_pais_de_origem) {}

Exotico::Exotico() {}

Exotico::~Exotico() {}