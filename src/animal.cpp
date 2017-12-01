#include "animal.h"

/*=====Construtores e destrutor=====*/
Animal::Animal(std::string _id, std::string _classe, std::string _nome_especie, std::string _nome_cientifico, char _sexo, 
	float _tamanho,	std::string _dieta, Veterinario &_veterinario, Tratador &_tratador, std::string _nome_de_batismo):
	id(_id), classe(_classe), nome_especie(_nome_especie), nome_cientifico(_nome_cientifico), sexo(_sexo), tamanho(_tamanho),
	dieta(_dieta), veterinario(_veterinario), tratador(_tratador), nome_de_batismo(_nome_de_batismo) {}

Animal::Animal() {}

Animal::~Animal() {}

/*=====Setters=====*/
void Animal::setVeterinario(Veterinario &_veterinario)
{
	veterinario = _veterinario;
}

void Animal::setTratador(Tratador &_tratador)
{
	tratador = _tratador;
}

void Animal::setTamanho(float _tamanho)
{
	this->tamanho = _tamanho;
}

/*=====Getters=====*/
std::string Animal::getVeterinario()
{
	return this->veterinario.getNome();
}

std::string Animal::getTratador()
{
	return this->tratador.getNome();
}

std::string Animal::getClasse()
{
	return this->classe;
}

std::ostream& operator <<(std::ostream &o,Animal &a)
{
	return a.print(o);
}