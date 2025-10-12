[Versão 1]:

- O arquivo `CartasSuperTrunfo_1.c` foi renomeado para `CartasSuperTrunfo.c`.
- Adicionado `readme.md` para anotações.

======================================================================================================

[Atualizações 2]:

- Alterado tipo de variável `populacao1/2` de `int` para `unsigned long int` para suportar valores maiores.
- Corrigido `scanf` de população para `%lu` e adicionado cast para cálculo de densidade.
- Padronizado nomes de variáveis: `nomecidade1/2` → `nomeCidade1/2`.
- Separada exibição de dados em múltiplos `printf` para melhor legibilidade.
- Adicionado bloco de comparação automática entre as cartas (população, área, PIB, pontos turísticos, densidade, PIB per capita).
- Incluído lógica final para exibir resultado da comparação de atributo escolhido.
- Remoção de comentários excessivos e pequenas melhorias de formatação e mensagens no console.

======================================================================================================

[Atualizações 3]:

- Adicionado menu interativo com escolha de atributo usando `switch`.

[Bônus] `CartasSuperTrunfo_3_Bonus.c`

Mesmas funcionalidades do `CartasSuperTrunfo_3.c`, mas com as seguintes melhorias:

- Adicionado menu interativo com escolha de atributo usando `switch`.
- Sistemas de verificação de entradas inválidas ou repetidas (Código da Carta, Número da carta e Nome do Estado).
- Ajustado `scanf` para ler nomes com espaços usando `%[^\n]` (nome do estado).
- Sistema de reinicio de jogo sem encerrar o programa (implementado com `goto`).
- Pequenos ajustes em mensagens e fluxo do programa para maior clareza e robustez.

======================================================================================================

[Desafios]:
1. Desafio Cartas Super Trunfo: `CartasSuperTrunfo.c`
2. Desafio Lógica Super Trunfo: `CartasSuperTrunfo_2.c`
3. Desafio Aventureiro Super Trunfo `CartasSuperTrunfo_3.c`

======================================================================================================


