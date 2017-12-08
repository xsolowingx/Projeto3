/**
 * @since 30/11/2017
 * @file funcionario.h
 * @brief arquivo que contém as definições da classe Funcionario
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H
#include <string>
#include <ostream>
#include <istream>

class Funcionario
{
protected:
	std::string id;
	std::string nome;
	std::string cpf;
	std::string idade;
	std::string tipo_sanguineo;
	std::string fatorRH;
	std::string especialidade;
	std::string funcao;

public:
	/*=====Construtores e Destrutor=====*/
	Funcionario();
	Funcionario(std::string _id, std::string _nome, std::string _cpf, std::string _idade, 
				std::string _tipo_sanguineo, std::string _fatorRH, std::string _especialidade,std::string _funcao);
	~Funcionario();
	
	/*=====Setters=====*/
	void setID(std::string _id);
	void setNome(std::string _nome);
	void setCPF(std::string _cpf);
	void setIdade(std::string _idade);
	void setTipoSanguineo(std::string _tipo_sanguineo);
	void setFatorRH(std::string _fatorRH);
	void setEspecialidade(std::string _especialidade);

	/*=====Getters=====*/
	std::string getID();
	std::string getNome();
	std::string getCPF();
	std::string getIdade();
	std::string getTipoSanguineo();
	std::string getFatorRH();
	std::string getEspecialidade();
	std::string getFuncao();

	/*=====Métodos de manipulação de arquivo=====*/
	virtual std::ostream& print(std::ostream &o) = 0;
	virtual std::istream& scan(std::istream &i) = 0;

	/*=====Sobrecarga dos Operadores =====*/
	friend std::istream& operator >>(std::istream &i,Funcionario &f);
	
	friend std::ostream& operator <<(std::ostream &o,Funcionario &f);
};

#endif