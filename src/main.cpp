/**
 * @since 30/11/2017
 * @file main.cpp
 * @brief arquivo principal do Petfera
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "classes.h"
#include "funcoes.h"
#include <iostream>
#include <map>
#include <stdexcept>

int main(void)
{
	std::ifstream ler_dados_animaisF;
	std::ifstream ler_dados_funcionariosF;

	try
	{
		ler_dados_animaisF.open("animais.csv");
		if(ler_dados_animaisF.is_open() == false) throw ErroAoAbrirArquivo();
	}
	catch(ErroAoAbrirArquivo &ex)
	{
		std::cout << ex.what() << "animais.csv" << std::endl;
		return -1;
	}

	try
	{
		ler_dados_funcionariosF.open("funcionarios.csv");
		if(ler_dados_funcionariosF.is_open() == false) throw ErroAoAbrirArquivo();
	}
	catch(ErroAoAbrirArquivo &ex)
	{
		std::cout << ex.what() << "funcionarios.csv" << std::endl;
		return -1;
	}

	std::vector<std::shared_ptr<Funcionario>> funcs;

	while(lerFuncionarios(ler_dados_funcionariosF,funcs))
	{
		if(ler_dados_funcionariosF.eof())
		{
		 	std::cout << "Dados dos Funcionarios lidos com sucesso!" << std::endl;
		 	break;
		}	
	}	

	return 0;
}