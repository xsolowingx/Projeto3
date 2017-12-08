/**
 * @since 30/11/2017
 * @file excecoes.cpp
 * @brief arquivo que contém as implementações das classes de Exceções 
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "excecoes.h"

/*=====***Exceção ao tentar abrir um arquivo***=====*/

/*=====Construtor e Destrutor=====*/
ErroAoAbrirArquivo::ErroAoAbrirArquivo() {}

ErroAoAbrirArquivo::~ErroAoAbrirArquivo() {}

/*=====Método what=====*/
const char* ErroAoAbrirArquivo::what()
{
	return "Erro ao tentar abrir o arquivo ";
}

/*=====***Exceção ao tentar ler os dados de algum arquivo .csv***=====*/

/*=====Construtor e Destrutor=====*/
ErroAoTentarLerDados::ErroAoTentarLerDados() {}

ErroAoTentarLerDados::~ErroAoTentarLerDados() {}

/*=====Método what=====*/
const char* ErroAoTentarLerDados::what()
{
	return "Erro ao tentar ler dados dos ";
}