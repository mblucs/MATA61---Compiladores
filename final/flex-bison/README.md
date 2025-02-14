# Syntactic Tree

Este projeto implementa um analisador sintático para uma linguagem específica, utilizando ferramentas como Lex e Yacc.

## Estrutura do Diretório

### Código-Fonte
- `main` - Arquivo principal que executa o analisador.
- `input.c` - Arquivo de entrada utilizado para testes do analisador.
- `node.h` - Definições de estruturas de dados usadas na árvore sintática.
- `output.txt` - Árvore sintática gerada após execução. 

### Analisador Léxico
- `scanner.l` - Definição das regras do analisador léxico no Lex.
- `lex.yy.c` - Código gerado pelo Lex para o analisador léxico.

### Analisador Sintático
- `parser.y` - Definição das regras da gramática no Yacc.
- `parser copy.y` - Cópia de segurança do arquivo `parser.y`.
- `parser.output` - Arquivo gerado pelo Bison contendo detalhes da análise da gramática, incluindo a tabela de estados do parser LR, regras reduzidas e conflitos detectados.
- `parser.tab.c` - Código gerado pelo Yacc para o analisador sintático.
- `parser.tab.h` - Cabeçalho gerado pelo Yacc contendo definições auxiliares.
## Requisitos

Para compilar e executar o analisador, é necessário ter as seguintes ferramentas instaladas:
- Flex (Lex)
- Bison (Yacc)
- Compilador C (gcc ou equivalente)

## Como Compilar

1. Gere o analisador léxico com Flex:
   ```sh
   flex scanner.l
   ```
2. Gere o analisador sintático com Bison:
   ```sh
   bison -d parser.y
   ```
3. Compile os arquivos gerados junto com o código C:
   ```sh
   gcc parser.tab.c lex.yy.c -o main
   ```

## Como Executar

Após a compilação, execute o analisador passando um arquivo de entrada:
```sh
./main < input.c
```

