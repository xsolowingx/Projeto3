/**
 * @since 30/11/2017
 * @file excecoes.h
 * @brief arquivo que contém as definições das classes com as possíveis Exceções.
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _EXCECOES_H
#define _EXCECOES_H
#include <exception>
#include <stdexcept>
#include <string>

class ErroAoAbrirArquivo: public std::exception
{
public:

	/*=====Construtor e Destrutor=====*/
	ErroAoAbrirArquivo();
	~ErroAoAbrirArquivo();

	/*=====Método what=====*/
	const char* what();
	
};

class ErroAoTentarLerDados: public std::exception
{
public:

	/*=====Construtor e Destrutor=====*/
	ErroAoTentarLerDados();
	~ErroAoTentarLerDados();

	/*=====Método what=====*/
	const char* what();

};

#endif