#ifndef _EXOTICO_H
#define _EXOTICO_H
#include "animalSilvestre.h"

class Exotico: public AnimalSilvestre
{
protected:
	std::string pais_de_origem;
public:
	Exotico(std::string _permissao_ibama,std::string _pais_de_origem);
	Exotico();
	~Exotico();

	virtual std::string getPaisDeOrigem() const = 0;

	virtual std::string getPermissao() const = 0;
};


#endif