#ifndef _ANIMAL_H
#define _ANIMAL_H
#include "veterinario.h"
#include "tratador.h"

class Animal
{
protected:
	std::string id;
	std::string classe;
	std::string nome_especie;
	std::string nome_cientifico;
	char sexo;
	float tamanho;
	std::string dieta;
	Veterinario veterinario;
	Tratador tratador;
	std::string nome_de_batismo;

public:
	Animal(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico, char _sexo, float _tamanho,
			std::string _dieta, Veterinario &_veterinario, Tratador &_tratador, std::string _nome_de_batismo);
	Animal();
	~Animal();

	/*=====Setters=====*/
	void setVeterinario(Veterinario &_veterinario);
	void setTratador(Tratador &_tratador);
	void setTamanho(float _tamanho);

	/*=====Getters=====*/
	std::string getVeterinario();
	std::string getTratador();
	std::string getClasse();

	virtual std::ostream& print(std::ostream &o) const = 0;

	friend std::ostream& operator <<(std::ostream &o,Animal &a);
};


#endif