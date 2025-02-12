# Variáveis
CC = gcc
CFLAGS = -Wall -g  # -Wall para habilitar todos os avisos, -g para informações de debug

# Arquivos de origem
SOURCES = main.c lex.yy.c parser.tab.c node.c
HEADER = node.h parser.tab.h
EXECUTABLE = compilador

# Regras
all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES) $(HEADER)
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE)

lex.yy.c: scanner.l
	flex scanner.l

parser.tab.c parser.tab.h: parser.y
	bison -d parser.y

clean:
	rm -f $(EXECUTABLE) lex.yy.c parser.tab.c parser.tab.h