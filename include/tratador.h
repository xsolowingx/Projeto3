#ifndef _TRATADOR_H
#define _TRATADOR_H
#include "funcionario.h"

class Tratador: public Funcionario
{
public:
	Tratador(std::string _id, std::string _nome, std::string _cpf, int _idade, 
				std::string _tipo_sanguineo, char _fatorRH, std::string _especialidade,std::string _funcao);
	Tratador(Tratador &t);
	Tratador();
	~Tratador();
	std::ostream &print(std::ostream &o) const;
	Tratador& operator =(Tratador &t);
	friend std::ostream& operator <<(std::ostream &o,Tratador &t);
};


#endif