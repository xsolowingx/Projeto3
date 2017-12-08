/**
 * @since 30/11/2017
 * @file funcoes.cpp
 * @brief  arquivo onde contém as implementações das  funções auxiliares do programa Petfera
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#include "funcoes.h"
#include <iostream>

/*=====Função para ler os funcionários=====*/
/**
 * @param      ifs    um arquivo de leitura
 * @param  	   funcs  vector de shared_ptrs
 * 
 * @details função que lê os dados dos funcionários no arquivo funcionarios.csv, inicialmente
 * ela adiciona um objeto da classe Tratador ou Veterinario à um vetor de Funcionários, mas a
 * posteriori, ela iria adicionar à um "map".
 * 
 * @return     { true ou false }
 */

bool lerFuncionarios(std::ifstream &ifs, std::vector<std::shared_ptr<Funcionario>> funcs)
{
	std::string _id,_nome,_cpf,_idade,_tipo_sanguineo,_fatorRH,_especialidade,_funcao;

	try
	{	
		if(std::getline(ifs,_id,';') )
		{
			std::getline(ifs,_nome,';');
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