/**
 * @since 30/11/2017
 * @file tratador.h
 * @brief arquivo que contém as definições da classe Tratador
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _TRATADOR_H
#define _TRATADOR_H
#include "funcionario.h"

class Tratador: public Funcionario
{
public:

	/*=====Construtores e Destrutor=====*/
	Tratador(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
			std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade,std::string _funcao);

	Tratador(Tratador &t);
	Tratador();
	~Tratador();

	/*=====Métodos de manipulação de arquivos=====*/
	std::ostream& print(std::ostream &o);
	std::istream& scan(std::istream &i);

	/*=====Sobrecarga dos operadores=====*/
	Tratador& operator =(Tratador &t);
	friend std::ostream& operator <<(std::ostream &o,Tratador &t);

};


#endif