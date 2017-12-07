#ifndef _AVENATIVA_H
#define _AVENATIVA_H

#include "ave.h"
#include "nativo.h"

class AveNativa: public Ave,Nativo
{
public:
	AveNativa(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,int _tamanho_do_bico,int _envergadura, std::string _permissao_ibama,
		std::string _estado_de_origem, std::string _autorizacao);
	AveNativa();
	~AveNativa();

	std::string getPermissao() const;
	std::string getEstadoDeOrigem() const;
	std::string getAutorizacao() const;

};

#endif