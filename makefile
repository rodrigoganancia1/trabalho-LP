CC = gcc
CFLAGS = -Wall -Wextra -g -std=c11
LDFLAGS = -lm

EXEC = projeto_final
SRCS = main-team-G5FC2C.c functions-team-G5FC2C.c
HEADERS = functions-team-G5FC2C.h
OBJS = $(SRCS:.c=.o)

.PHONY: all clean run doc

all: $(EXEC) 

$(EXEC): $(OBJS)
	@echo "A compilar o programa final..."
	$(CC) -o $(EXEC) $(OBJS) $(CFLAGS) $(LDFLAGS)
	@echo "Programa '$(EXEC)' compilado com sucesso!"

%.o: %.c $(HEADERS)
	@echo "A compilar $<..."
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC) *.gch
	rm -rf docs
	@echo "Ficheiros compilados e documentos removidos."

doc:
	@echo "A gerar documentação Doxygen..."
	doxygen Doxyfile
	@echo "Documentação gerada na pasta 'docs/html'!" 
run: all
	./$(EXEC)

