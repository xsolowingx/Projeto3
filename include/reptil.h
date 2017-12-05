#ifndef _REPTIL_H
#define _REPTIL_H
#include "animal.h"

class Reptil: public Animal
{
protected:
	bool venenoso;
	std::string tipo_veneno;
public:
	Reptil(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho,std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo,bool _venenoso,std::string _tipo_veneno);
	Reptil();
	~Reptil();
	
	/*=====Getters=====*/
	std::string getTipoVeneno();
	bool getVenenoso();

	std::ostream& print(std::ostream &o);
};






#endif