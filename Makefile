INCLUDE = ./include
LIB = ./lib
SRC = ./src
TEST = ./test
BIN = ./bin
SRC = ./src
FLAGS = -O3 -Wall -g


all: lib app

lib: $(LIB)/Imagem.o

app: \
	$(BIN)/main \
	$(TEST)/cunit_main

$(LIB)/%.o: $(LIB)/%.c $(INCLUDE)/%.h
	gcc -c $< -I $(INCLUDE) $(FLAGS) -o $@

$(BIN)/%: $(SRC)/%.c
	gcc $< $(LIB)/*.o -I $(INCLUDE) $(FLAGS) -o $@

$(TEST)/%: $(TEST)/%.c
	gcc $< -lcunit $(LIB)/*.o -I $(INCLUDE) $(FLAGS) -o $@

run:
	$(BIN)/main

test:
	$(TEST)/cunit_main

clean:
	rm $(LIB)/*.o
	rm $(BIN)/*
	rm $(TEST)/cunit_main
