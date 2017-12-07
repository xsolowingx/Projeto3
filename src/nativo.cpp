#include "nativo.h"

Nativo::Nativo(std::string _permissao_ibama,std::string _estado_de_origem, std::string _autorizacao):
	AnimalSilvestre(_permissao_ibama), estado_de_origem(_estado_de_origem), autorizacao(_autorizacao) {}

Nativo::Nativo() {}

Nativo::~Nativo() {}

void Nativo::setAutorizacao(std::string _autorizacao)
{
	this->autorizacao = _autorizacao;
}