#ifndef _VETERINARIO_H
#define _VETERINARIO_H
#include "funcionario.h"


class Veterinario: public Funcionario
{
public:
	Veterinario(std::string _id, std::string _nome, std::string _cpf, int _idade, 
				std::string _tipo_sanguineo, char _fatorRH, std::string _especialidade,std::string _Funcao);
	Veterinario(Veterinario &v);
	Veterinario();
	~Veterinario();
	std::ostream& print(std::ostream &o);
	Veterinario& operator =(Veterinario &v);
	friend std::ostream& operator <<(std::ostream &o,Veterinario &v);
};


#endif