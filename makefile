#Algumas variaveis sao usadas com significado especial:
#$@ nome do alvo (target)
#$^ lista com os nomes de todos os pre-requisitos sem duplicatas
#$< nome do primeiro pre-requisito
# Comandos do sistema operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf
#variáveis de compilação.
CC = g++
CFLAGS = -W -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)
DYNAMIC = -fPIC
#variáveis de diretórios.
INC_DIR = ./include
BIN_DIR = ./bin
SRC_DIR = ./src
OBJ_DIR = ./build
DOC_DIR = ./doc
LIB_DIR = ./lib
#variável objeto

#Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy