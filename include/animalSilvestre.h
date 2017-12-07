#ifndef _ANIMALSILVESTRE_H
#define _ANIMALSILVESTRE_H
#include <string>

class AnimalSilvestre
{
protected:
	std::string permissao_ibama;

public:
	AnimalSilvestre(std::string _permissao_ibama);
	AnimalSilvestre();
	~AnimalSilvestre();


	void setPermissao(std::string _permission);


	virtual std::string getPermissao() const = 0;

};


#endif