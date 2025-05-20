#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Mestre - Habilidades Especiais e Áreas de Efeito
    int tabuleiro[10][10]; // Tabuleiro 10x10

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Tamanho fixo dos navios (3)
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};
    int navio_diagonal_1[3] = {3, 3, 3}; // Navio diagonal (principal)
    int navio_diagonal_2[3] = {3, 3, 3}; // Navio diagonal (secundário)

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    // Navio horizontal: linha 2, coluna 3
    int linha_h = 2, coluna_h = 3;

    // Navio vertical: linha 6, coluna 1
    int linha_v = 6, coluna_v = 1;

    // Navio diagonal (principal): linha 0, coluna 0
    int linha_d1 = 0, coluna_d1 = 0;

    // Navio diagonal (secundário): linha 6, coluna 6
    int linha_d2 = 6, coluna_d2 = 6;

    // Posiciona navio horizontal (3 casas na mesma linha)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Posiciona navio vertical (3 casas na mesma coluna)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    // Posiciona navio diagonal principal (linha[i], coluna[i] aumentando simultaneamente)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_d1 + i][coluna_d1 + i] = navio_diagonal_1[i];
    }

    // Posiciona navio diagonal secundário (linha[i], coluna[9-i] diminuindo simultaneamente)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_d2 + i][coluna_d2 - i] = navio_diagonal_2[i];
    }

    // Definindo a área de efeito das habilidades (5)
    // Cone (matriz 5x5)
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Cruz (matriz 5x5)
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Octaedro (matriz 5x5)
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Definir ponto de origem para as habilidades
    int origem_cone_linha = 2, origem_cone_coluna = 2;
    int origem_cruz_linha = 5, origem_cruz_coluna = 5;
    int origem_octa_linha = 7, origem_octa_coluna = 3;


   // Sobrepor habilidades no tabuleiro
   // Habilidade Cone
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                int linha = origem_cone_linha + i - 2;
                int coluna = origem_cone_coluna + j - 2;
                // Verifica se a posição é válida, não sobrepõe navios (valor 3) e é água (valor 0)
                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5; // Marca a área afetada pela habilidade
                }
            }
        }
    }

    // Habilidade Cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                int linha = origem_cruz_linha + i - 2;
                int coluna = origem_cruz_coluna + j - 2;
                // Verifica se a posição é válida, não sobrepõe navios (valor 3) e é água (valor 0)
                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5; // Marca a área afetada pela habilidade
                }
            }
        }
    }

    // Habilidade Octaedro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (octaedro[i][j] == 1) {
                int linha = origem_octa_linha + i - 2;
                int coluna = origem_octa_coluna + j - 2;
                // Verifica se a posição é válida, não sobrepõe navios (valor 3) e é água (valor 0)
                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5; // Marca a área afetada pela habilidade
                }
            }
        }
    }


    // Exibe o tabuleiro completo no console, com diferentes caracteres para cada elemento
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("~ "); // Água
            } else if (tabuleiro[i][j] == 3) {
                printf("N "); // Navio
            } else if (tabuleiro[i][j] == 5) {
                printf("A "); // Área afetada
            }
        }
        printf("\n");
    }

    return 0;
}
