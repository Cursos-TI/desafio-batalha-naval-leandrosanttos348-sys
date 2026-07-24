#include <stdio.h>

int main() {
    // Declaração do tabuleiro 5x5
    int tabuleiro[5][5];

    // Inicializa todo o tabuleiro com 0 (água)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionamento do Navio 1 (Horizontal - tamanho 3)
    // Linha 1, Colunas 1, 2 e 3
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Posicionamento do Navio 2 (Vertical - tamanho 3)
    // Coluna 4, Linhas 2, 3 e 4
    tabuleiro[2][4] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][4] = 3;

    // Exibição das coordenadas dos navios
    printf("=== Batalha Naval - Posicionamento dos Navios ===\n\n");
    
    printf("Coordenadas do Navio Horizontal (Tamanho 3):\n");
    printf("Parte 1: (1, 1)\n");
    printf("Parte 2: (1, 2)\n");
    printf("Parte 3: (1, 3)\n\n");

    printf("Coordenadas do Navio Vertical (Tamanho 3):\n");
    printf("Parte 1: (2, 4)\n");
    printf("Parte 2: (3, 4)\n");
    printf("Parte 3: (4, 4)\n\n");

    // Exibição do Tabuleiro
    printf("--- Tabuleiro ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
