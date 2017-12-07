#ifndef _NATIVO_H
#define _NATIVO_H
#include "animalSilvestre.h"

class Nativo: public AnimalSilvestre
{
protected:
	std::string estado_de_origem;
	std::string autorizacao;
public:
	Nativo(std::string _permissao_ibama,std::string _estado_de_origem, std::string _autorizacao);
	Nativo();
	~Nativo();

	void setAutorizacao(std::string _autorizacao);

	virtual std::string getPermissao() const = 0;
	virtual std::string getEstadoDeOrigem() const = 0;
	virtual std::string getAutorizacao() const = 0;
	
};

#endif