#ifndef _VETERINARIO_H
#define _VETERINARIO_H
#include "funcionario.h"


class Veterinario: public Funcionario
{
public:
	Veterinario(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
				std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade,std::string _Funcao);
	Veterinario(Veterinario &v);
	Veterinario();
	~Veterinario();

	std::ostream& print(std::ostream &o);
	std::istream& scan(std::istream &i);

	Veterinario& operator =(Veterinario &v);
	friend std::ostream& operator <<(std::ostream &o,Veterinario &v);
};


#endif