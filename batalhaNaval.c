#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Aventureiro - Tabuleiro Completo e Navios Diagonais
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
        // Exibe as coordenadas de cada parte do navio
        printf("Navio horizontal: (%d, %d)\n", linha_h, coluna_h + i);
    }

    // Posiciona navio vertical (3 casas na mesma coluna)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
        // Exibe as coordenadas de cada parte do navio
        printf("Navio vertical: (%d, %d)\n", linha_v + i, coluna_v);
    }

    // Posiciona navio diagonal principal (linha[i], coluna[i] aumentando simultaneamente)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_d1 + i][coluna_d1 + i] = navio_diagonal_1[i];
        // Exibe as coordenadas de cada parte do navio
        printf("Navio diagonal 1: (%d, %d)\n", linha_d1 + i, coluna_d1 + i);
    }

    // Posiciona navio diagonal secundário (linha[i], coluna[9-i] diminuindo simultaneamente)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_d2 + i][coluna_d2 - i] = navio_diagonal_2[i];
        // Exibe as coordenadas de cada parte do navio
        printf("Navio diagonal 2: (%d, %d)\n", linha_d2 + i, coluna_d2 - i);
    }

    // Exibe o tabuleiro completo no console, mostrando 0 para água e 3 para navios
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
