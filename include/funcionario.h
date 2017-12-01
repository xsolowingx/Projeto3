/**
 * @since 30/11/2017
 * @file funcionario.h
 * @brief arquivo que contém as definições da classe Funcionario
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 01/12/17
 */
#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H
#include <string>
#include <ostream>

class Funcionario
{
protected:
	std::string id;
	std::string nome;
	std::string cpf;
	int idade;
	std::string tipo_sanguineo;
	char fatorRH;
	std::string especialidade;
	std::string funcao;

public:
	/*=====Construtores e Destrutor=====*/
	Funcionario();
	Funcionario(std::string _id, std::string _nome, std::string _cpf, int _idade, 
				std::string _tipo_sanguineo, char _fatorRH, std::string _especialidade,std::string _funcao);
	~Funcionario();
	/*=====Setters=====*/
	void setID(std::string _id);
	void setNome(std::string _nome);
	void setCPF(std::string _cpf);
	void setIdade(int _idade);
	void setTipoSanguineo(std::string _tipo_sanguineo);
	void setFatorRH(char _fatorRH);
	void setEspecialidade(std::string _especialidade);

	/*=====Getters=====*/
	std::string getID();
	std::string getNome();
	std::string getCPF();
	int getIdade();
	std::string getTipoSanguineo();
	char getFatorRH();
	std::string getEspecialidade();
	std::string getFuncao();

	/*=====Método print=====*/
	virtual std::ostream &print(std::ostream &o) const = 0;

	/*=====Sobrecarga do Operador "<<"=====*/
	friend std::ostream &operator<<(std::ostream &o,Funcionario &f);
};


#endif