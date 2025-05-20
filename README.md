# Batalha Naval - MateCheck
Este projeto é uma implementação simples do clássico jogo de Batalha Naval, com uma evolução em cada nível de complexidade. O jogo permite o posicionamento de navios em um tabuleiro 10x10, aplicando habilidades especiais como Cone, Cruz e Octaedro, que afetam áreas específicas do tabuleiro.

## Desafio Nível Novato
- Objetivo: Representar o tabuleiro e posicionar dois navios (um horizontal e outro vertical).
- Tabuleiro: Matriz 10x10 com valores representando água (0) e partes dos navios (3).
- Requisitos:
  - Definir posições iniciais dos navios.
  - Validar que os navios não se sobreponham.
  - Exibir o tabuleiro com os navios posicionados.

## Desafio Nível Aventureiro
- Objetivo: Adicionar dois navios diagonais ao tabuleiro.
- Navios: Agora, além dos navios horizontais e verticais, dois navios serão posicionados na diagonal.
- Requisitos:
  - Adicionar e validar os navios diagonais.
  - Garantir que os navios não se sobreponham.
  - Exibir o tabuleiro com todos os navios posicionados corretamente.

## Desafio Nível Mestre
- Objetivo: Implementar habilidades especiais e áreas de efeito.
- Habilidades:
  - Cone: A área de efeito forma um cone, afetando as células de forma triangular.
  - Cruz: A área de efeito forma uma cruz centralizada.
  - Octaedro: A área de efeito forma um losango, representando um octaedro visto de frente.

- Requisitos:
  - Criar matrizes para representar as áreas de efeito de cada habilidade.
  - Definir um ponto de origem para cada habilidade no tabuleiro.
  - Aplicar as habilidades ao tabuleiro sem sobrescrever os navios.
  - Exibir o tabuleiro com áreas de habilidade afetadas representadas de forma distinta.

## Como Executar
1. Pré-requisitos:
  - Compilador C (como gcc).
  - Sistema operacional que suporte a compilação em C (Linux, Windows com MinGW, ou macOS).

2. Passos:
  - Clone este repositório:
```
git clone https://github.com/SeuUsuario/BatalhaNaval.git
```
  - Navegue até o diretório do projeto:
```
cd BatalhaNaval
```
  - Compile o código:
```
gcc batalha_naval.c -o batalha_naval
```
  - Execute o programa:
```
./batalha_naval
```
