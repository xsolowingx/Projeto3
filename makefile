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
OBJETOS_DYN = $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/tratador.o\
$(OBJ_DIR)/animal.o $(OBJ_DIR)/anfibio.o $(OBJ_DIR)/mamifero.o $(OBJ_DIR)/reptil.o\
$(OBJ_DIR)/ave.o $(OBJ_DIR)/animalSilvestre.o $(OBJ_DIR)/exotico.o

#$(OBJ_DIR)/ 

#Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy

Petfera.so: $(OBJETOS_DYN)
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	$(CC) -shared $(DYNAMIC) $(CFLAGS) $^ -o $(LIB_DIR)/$@
	@echo "+++ [Biblioteca dinamica $@ criada em $(LIB_DIR)] +++"
	@echo "=========*-*========="  

$(OBJ_DIR)/funcionario.o:	$(SRC_DIR)/funcionario.cpp $(INC_DIR)/funcionario.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/veterinario.o:	$(SRC_DIR)/veterinario.cpp $(INC_DIR)/veterinario.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/tratador.o:	$(SRC_DIR)/tratador.cpp $(INC_DIR)/tratador.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/animal.o:	$(SRC_DIR)/animal.cpp $(INC_DIR)/animal.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/anfibio.o:	$(SRC_DIR)/anfibio.cpp $(INC_DIR)/anfibio.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/mamifero.o:	$(SRC_DIR)/mamifero.cpp $(INC_DIR)/mamifero.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/reptil.o:	$(SRC_DIR)/reptil.cpp $(INC_DIR)/reptil.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/ave.o:	$(SRC_DIR)/ave.cpp $(INC_DIR)/ave.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/animalSilvestre.o:	$(SRC_DIR)/animalSilvestre.cpp $(INC_DIR)/animalSilvestre.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/exotico.o:	$(SRC_DIR)/exotico.cpp $(INC_DIR)/exotico.h
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR)/*.o