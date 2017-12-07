#include "excecoes.h"

ErroAoAbrirArquivo::ErroAoAbrirArquivo() {}

ErroAoAbrirArquivo::~ErroAoAbrirArquivo() {}

const char* ErroAoAbrirArquivo::what()
{
	return "Erro ao tentar abrir o arquivo ";
}