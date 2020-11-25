INC = inc
SRC = src
LIB = lib
OBJ = obj
BIN = bin
DOC = doc

all:	vector	cola

vector: $(BIN)/main_vd
$(BIN)/main_vd:	$(OBJ)/main_vd.o $(LIB)/cola_vd.a
	g++ $(OBJ)/main_vd.o -lcola_vd -L$(LIB)  -o bin/main_vd
$(OBJ)/main_vd.o:	
	g++ -g -c -I$(INC) $(SRC)/main_vd.cpp -o $(OBJ)/main_vd.o
$(LIB)/cola_vd.a:	$(OBJ)/Pila_max_VD.o
	ar rvs $(LIB)/libcola_vd.a $(OBJ)/Pila_max_VD.o
$(OBJ)/Pila_max_VD.o:	
	g++ -g -c -I$(INC) $(SRC)/Pila_max_VD.cpp -o $(OBJ)/Pila_max_VD.o

# cola:	$(BIN)/main_cola
# $(BIN)/main_cola:	$(OBJ)/main_cola.o $(OBJ)/Pila_max_Cola.o
# 	g++ -o $(BIN)/main_vd $(OBJ)/main_vd.o $(OBJ)/Pila_max_Cola.o
# $(OBJ)/main_vd.o:	
# 	g++ -g -c -I$(INC) $(SRC)/main_vd.cpp -o $(OBJ)/main_vd.o
# $(OBJ)/Pila_max_Cola.o:	
# 	g++ -g -c -I$(INC) $(SRC)/Pila_max_Cola.cpp -o $(OBJ)/Pila_max_Cola.o
clean:
	echo "Limpiando"
	-rm $(OBJ)/* $(BIN)/* $(LIB)/*
documentacion:
	echo "Creando documentacion"
	doxygen Doxyfile