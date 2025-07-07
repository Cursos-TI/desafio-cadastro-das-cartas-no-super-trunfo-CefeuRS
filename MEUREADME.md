# Meu README - Super Trunfo Países (por Roberto)

Esse projeto aqui é parte do desafio da Estácio, e o tema foi criar um sistema simples pra cadastrar cartas de cidades dentro do jogo Super Trunfo. Foi dividido em 3 niveis: novato, aventureiro e mestre, e cada um ia aumentando a complexidade do codigo.

Tudo feito no vscode, usando o gcc (mingw) pra compilar. Fui testando os niveis um por um e salvando em arquivos separados. 

## Niveis implementados:

### 🟢 Nivel Novato
- O programa cadastra 2 cartas de cidades
- Cada carta tem: codigo da cidade, nome, populacao, area, pib e numero de pontos turisticos
- Tudo usando `scanf` e depois `printf` pra mostrar os dados
- Nao usa if nem while, so leitura e exibicao

### 🟡 Nivel Aventureiro
- Alem dos atributos normais, calcula mais dois:
  - densidade populacional (pop / area)
  - pib per capita (pib / pop)
- O resultado desses dois tambem sao exibidos no final junto com os outros

### 🔴 Nivel Mestre
- Aqui o sistema compara as 2 cartas em todos os atributos
- Criei a logica pra comparar item por item e mostrar qual carta vence
- Tambem tem o “super poder” que é a soma de tudo, mas a densidade é invertida antes (1/densidade)
- Mostra no final um resumo de quem venceu em cada atributo

## Como rodar

Mesmo esquema do outro projeto: se tiver gcc no pc (windows com mingw), da pra rodar no terminal com os comandos:

## CADA LINHA DE UMA VEZ PARA CADA ARQUIVO REFERIDO.

gcc super_trunfo_novato.c -o super_trunfo_novato.exe 
./super_trunfo_novato.exe

gcc super_trunfo_aventureiro.c -o super_trunfo_aventureiro.exe
./super_trunfo_aventureiro.exe

gcc super_trunfo_mestre.c -o super_trunfo_mestre.exe
./super_trunfo_mestre.exe

- Os .exe so servem pra rodar local, nao subi eles no repo
- Comentei os codigos no meu estilo mesmo, tentando deixar facil de entender
- Evitei fazer muito rebuscado pra manter simples e focar no que o desafio pediu.

---

Análise e Desenvolvimento de Sistemas (primeiro semestre).