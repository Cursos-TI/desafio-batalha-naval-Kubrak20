#include <stdio.h>

int main() {
    int TAMANHO_TABULEIRO = 10;
    char colunas[] = "ABCDEFGHIJ";
    int tabuleiro[10][10] = {0};

    // Posicionando navios (3)
    tabuleiro[0][0] = 3; tabuleiro[0][1] = 3; tabuleiro[0][2] = 3; // Navio horizontal
    tabuleiro[7][9] = 3; tabuleiro[8][9] = 3; tabuleiro[9][9] = 3; // Navio vertical

    // Aplicando áreas de habilidade (5) 
    // Cone (parte central esquerda)
    tabuleiro[2][2] = 5; tabuleiro[2][3] = 5; tabuleiro[2][4] = 5;
    tabuleiro[3][1] = 5; tabuleiro[3][2] = 5; tabuleiro[3][3] = 5; tabuleiro[3][4] = 5; tabuleiro[3][5] = 5;
    
    // Cruz (direita superior)
    tabuleiro[0][7] = 5;
    tabuleiro[1][3] = 5; tabuleiro[1][5] = 5; tabuleiro[1][6] = 5; tabuleiro[1][7] = 5; tabuleiro[1][8] = 5; tabuleiro[1][9] = 5;
    tabuleiro[2][7] = 5;
    
    // Octaedro (esquerda inferior)
    tabuleiro[6][0] = 5; tabuleiro[6][1] = 5; tabuleiro[6][2] = 5;
    tabuleiro[7][1] = 5;
    tabuleiro[5][1] = 5; 
    
    // Exibindo o tabuleiro
    printf("  TABULEIRO BATALHA NAVAL\n");
    printf("    ");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d |", i + 1);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}