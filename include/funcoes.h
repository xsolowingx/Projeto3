/**
 * @since 30/11/2017
 * @file funcoes.h
 * @brief arquivo onde contém as definições das funções auxiliares do programa Petfera
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 08/12/17
 */
#ifndef _FUNCOES_H
#define _FUNCOES_H
#include <fstream>
#include <memory>
#include <vector>
#include "classes.h"

bool lerFuncionarios(std::ifstream &ifs, std::vector<std::shared_ptr<Funcionario>> funcs);

#endif