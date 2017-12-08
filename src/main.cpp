/**
 * @since 30/11/2017
 * @file main.cpp
 * @brief arquivo principal do Petfera
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "classes.h"
#include "funcionario.h"
#include <iostream>
#include <memory>
#include <map>
#include <fstream>
#include <stdexcept>
#include <vector>

int main(void)
{
	std::ifstream ler_dados_animaisF;
	std::ifstream ler_dados_funcionariosF;

	try
	{
		ler_dados_animaisF.open("../csv/animais.csv");
		if(ler_dados_animaisF.is_open() == false) throw ErroAoAbrirArquivo();
	}
	catch(ErroAoAbrirArquivo &ex)
	{
		std::cout << ex.what() << "animais.csv" << std::endl;
		return -1;
	}

	try
	{
		ler_dados_funcionariosF.open("../csv/funcionarios.csv");
		if(ler_dados_funcionariosF.is_open() == false) throw ErroAoAbrirArquivo();
	}
	catch(ErroAoAbrirArquivo &ex)
	{
		std::cout << ex.what() << "funcionarios.csv" << std::endl;
		return -1;
	}

	std::vector<std::shared_ptr<Funcionario>> funcs;

	return 0;
}

bool lerFuncionarios(std::ifstream ifs, std::vector<std::shared_ptr<Funcionario>> funcs);
bool lerFuncionarios(std::ifstream ifs, std::vector<std::shared_ptr<Funcionario>> funcs)
{
	std::string _id,_nome,_cpf,_idade,_tipo_sanguineo,_fatorRH,_especialidade,_funcao;

	try
	{	
		if(std::getline(ifs,_id,';') )
		{
			std::getline(ifs,_cpf,';');
			std::getline(ifs,_idade,';');
			std::getline(ifs,_tipo_sanguineo,';');
			std::getline(ifs,_fatorRH,';');
			std::getline(ifs,_especialidade,';');
			std::getline(ifs,_funcao,'\n');
		}

		else
			throw ErroAoTentarLerDados();
	}
	catch(ErroAoTentarLerDados &ex)
	{
		std::cout << ex.what() << "funcionarios" << std::endl;
		return false;
	}

	if( (_funcao == "Tratador") || (_funcao == "tratador") )
	{
		funcs.push_back(std::make_shared<Tratador>(_id,_nome,_cpf,_idade,_tipo_sanguineo,_fatorRH,_especialidade,_funcao) );
		return true;
	}

	if( (_funcao == "Veterinario") || (_funcao == "veterinario") )
	{
		funcs.push_back(std::make_shared<Veterinario>(_id,_nome,_cpf,_idade,_tipo_sanguineo,_fatorRH,_especialidade,_funcao) );
		return true;
	}
	return false;
}