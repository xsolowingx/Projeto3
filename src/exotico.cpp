#include "exotico.h"

Exotico::Exotico(std::string _permissao_ibama,std::string _pais_de_origem):
	AnimalSilvestre(_permissao_ibama), pais_de_origem(_pais_de_origem) {}

Exotico::Exotico() {}

Exotico::~Exotico() {}

std::string Exotico::getPaisDeOrigem()
{
	return this->pais_de_origem;
}