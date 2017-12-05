#ifndef _MAMIFERO_H
#define _MAMIFERO_H
#include "animal.h"

class Mamifero: public Animal
{
protected:
	std::string cor_do_pelo;

public:
	Mamifero(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,std::string _cor_do_pelo);
	Mamifero();
	~Mamifero();
	
	/*=====Setter=====*/
	void setCorDoPelo(std::string _cor);

	/*=====Getter=====*/
	std::string getCorDoPelo();

	std::ostream& print(std::ostream &o);
};




#endif