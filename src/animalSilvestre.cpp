#include "animalSilvestre.h"

AnimalSilvestre::AnimalSilvestre(std::string _permissao_ibama): permissao_ibama(_permissao_ibama) {}

AnimalSilvestre::AnimalSilvestre() {}

AnimalSilvestre::~AnimalSilvestre() {}

void AnimalSilvestre::setPermissao(std::string _permission)
{
	this->permissao_ibama = _permission;
}

std::string AnimalSilvestre::getPermissao()
{
	return this->permissao_ibama;
}