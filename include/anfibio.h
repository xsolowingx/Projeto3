#ifndef _ANFIBIO_H
#define _ANFIBIO_H
#include "animal.h"

class Anfibio: public Animal
{
private:
	int mudas_ja_realizadas;
	std::string ultima_muda;

public:
	Anfibio(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico,
		char _sexo, float _tamanho, std::string _dieta, Veterinario &_veterinario, Tratador &_tratador,
		std::string _nome_de_batismo, int _mudas_ja_realizadas, std::string _ultima_muda);
	Anfibio();
	~Anfibio();

	/*=====Setter=====*/
	void setUltimaMuda(std::string _ultima_muda);

	/*=====Getters=====*/
	int getMudasJaRealizadas();
	std::string getUltimaMuda();
	
	std::ostream& print(std::ostream &o) const;
	
};


#endif