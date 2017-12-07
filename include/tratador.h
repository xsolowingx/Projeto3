#ifndef _TRATADOR_H
#define _TRATADOR_H
#include "funcionario.h"

class Tratador: public Funcionario
{
public:
	Tratador(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
			std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade,std::string _funcao);

	Tratador(Tratador &t);
	Tratador();
	~Tratador();

	std::ostream& print(std::ostream &o);
	std::istream& scan(std::istream &i);

	Tratador& operator =(Tratador &t);
	friend std::ostream& operator <<(std::ostream &o,Tratador &t);
};


#endif