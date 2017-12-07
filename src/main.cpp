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
	}

	try
	{
		ler_dados_funcionariosF.open("../csv/funcionarios.csv");
		if(ler_dados_funcionariosF.is_open() == false) throw ErroAoAbrirArquivo();
	}
	catch(ErroAoAbrirArquivo &ex)
	{
		std::cout << ex.what() << "funcionarios.csv" << std::endl;
	}

	Tratador funcs;	
/*
	std::string asb;

	while(std::getline(ler_dados_funcionariosF,asb))
	{	
		funcs.setNome(asb);
		std::cout << funcs.getNome() << std::endl;
		std::cout << asb << std::endl;
	}
*/
	return 0;
}