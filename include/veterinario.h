/**
 * @since 30/11/2017
 * @file veterinario.h
 * @brief arquivo que contém as definições da classe Veterinario
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _VETERINARIO_H
#define _VETERINARIO_H
#include "funcionario.h"


class Veterinario: public Funcionario
{
public:

	/*=====Construtores e Destrutor=====*/
	Veterinario(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
			std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade,std::string _funcao);
	
	Veterinario(Veterinario &v);
	Veterinario();
	~Veterinario();

	/*=====Métodos de manipulação de arquivos=====*/
	std::ostream& print(std::ostream &o);
	std::istream& scan(std::istream &i);

	/*=====Sobrecarga de operadores=====*/
	Veterinario& operator =(Veterinario &v);
	friend std::ostream& operator <<(std::ostream &o,Veterinario &v);
};


#endif