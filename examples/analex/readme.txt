README - Instruções para Executar o Analisador Léxico e Sintático

Este README descreve como compilar e executar o analisador léxico e sintático para a linguagem definida.

1. Pré-requisitos:
   - Flex (Fast Lexical Analyzer Generator): Necessário para gerar o analisador léxico (scanner).
   - Bison (GNU Parser Generator): Necessário para gerar o analisador sintático (parser).
   - Compilador C (ex: GCC): Necessário para compilar os arquivos C.

2. Arquivos Necessários:
   - input.c: Arquivo de entrada de exemplo (código fonte a ser analisado).
   - lex.yy.c: Código do analisador léxico, gerado pelo Flex a partir do arquivo scanner.l.
   - parser.tab.c: Código do analisador sintático, gerado pelo Bison a partir do arquivo parser.y.
   - parser.tab.h: Arquivo de cabeçalho gerado pelo Bison, contendo as definições dos tokens.
   - node.h: Arquivo de cabeçalho contendo a definição da estrutura da árvore sintática.
   - main.c: Arquivo contendo a função main, que orquestra a análise e gera a saída.
   - scanner.l: Arquivo com as regras léxicas para o Flex
   - parser.y: Arquivo com as regras sintáticas para o Bison
   - README.txt: este arquivo com as instruções.

3. Geração dos Analisadores:

   * Execute o Flex para gerar o analisador léxico (scanner.l -> lex.yy.c):
        flex scanner.l

   * Execute o Bison para gerar o analisador sintático (parser.y -> parser.tab.c e parser.tab.h):
        bison -d parser.y

4. Compilação:

   * Compile todos os arquivos C (lex.yy.c, parser.tab.c, main.c e node.c) utilizando um compilador C (ex: GCC):

        gcc main.c lex.yy.c parser.tab.c node.c -o compilador

5. Execução:

   * Execute o programa compilado:

        ./compilador

6. Saída:

   * O programa irá gerar um arquivo chamado tree_out.txt com a representação da árvore sintática do código de entrada.
   * Se o processo de análise léxica e sintática falhar, o programa irá exibir mensagens de erro no terminal.


Observações Importantes:

1. Este arquivo assume que você tem o Flex, Bison e GCC instalados no seu sistema. Caso contrário, você precisará instalá-los antes de prosseguir.
2. É importante que você execute os comandos na ordem correta: primeiro o Flex, depois o Bison e, por último, o GCC.
3. Se você tiver algum problema durante a compilação ou execução do programa, verifique se todos os arquivos estão no mesmo diretório e se os caminhos estão corretos.
4. Os arquivos estão enviados em pastas específicas de compilação, mas você pode agrupar todos os arquivos em uma única pasta.