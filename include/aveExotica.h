#ifndef _AVEEXOTICA_H
#define _AVEEXOTICA_H
#include "ave.h"
#include "exotico.h"

class AveExotica: public Ave,Exotico
{
public:
	AveExotica(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,int _tamanho_do_bico,int _envergadura,
		std::string _permissao_ibama, std::string _pais_de_origem);
	AveExotica();
	~AveExotica();

	std::string getPaisDeOrigem() const;
	
	std::string getPermissao() const;
};


#endif