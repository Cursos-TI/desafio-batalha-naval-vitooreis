#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
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

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    // Navio horizontal: linha 2, coluna 3
    int linha_h = 2, coluna_h = 3;

    // Navio vertical: linha 6, coluna 1
    int linha_v = 6, coluna_v = 1;

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
