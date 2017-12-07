#ifndef _EXCECOES_H
#define _EXCECOES_H
#include <exception>
#include <stdexcept>
#include <string>

class ErroAoAbrirArquivo: public std::exception
{
public:
	ErroAoAbrirArquivo();
	~ErroAoAbrirArquivo();
	const char* what();
	
};

#endif