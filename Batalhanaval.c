
#include <stdio.h> 

#include <stdbool.h> 

 

#define TAMANHO_TABULEIRO 10 

#define TAMANHO_NAVIO 3 

 

int main() { 

    // Inicializa o tabuleiro com zeros

    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0}; 

     

    // Vetores para armazenar as posições dos navios 

    int navio_horizontal[TAMANHO_NAVIO]; 

    int navio_vertical[TAMANHO_NAVIO]; 

     

    // Coordenadas iniciais dos navios linhas e colunas

    int inicio_horizontal[] = {2, 2};  // Linha 2, Coluna 2 

    int inicio_vertical[] = {5, 7};    // Linha 5, Coluna 7 

     

    // Posiciona o navio horizontal, linha fixa e colunas variaveis

    for (int i = 0; i < TAMANHO_NAVIO; i++) { 

        int col = inicio_horizontal[1] + i; 

        if (col < TAMANHO_TABULEIRO) { 

            tabuleiro[inicio_horizontal[0]][col] = 3; 

            navio_horizontal[i] = inicio_horizontal[0] * TAMANHO_TABULEIRO + col; 

        } 

    } 

     

    // Posiciona o navio vertical, coluna fixa, linhas variaveis

    for (int i = 0; i < TAMANHO_NAVIO; i++) { 

        int lin = inicio_vertical[0] + i; 

        if (lin < TAMANHO_TABULEIRO) { 

            tabuleiro[lin][inicio_vertical[1]] = 3; 

            navio_vertical[i] = lin * TAMANHO_TABULEIRO + inicio_vertical[1]; 

        } 

    } 

     

        for (int i = 0; i < TAMANHO_NAVIO; i++) { 

        for (int j = 0; j < TAMANHO_NAVIO; j++) { 

            if (navio_horizontal[i] == navio_vertical[j]) { 

                printf("Erro: Navios se sobrepoem!\n"); 

                return 1; 

            } 

        } 

    } 

     

    // Exibe o tabuleiro 

    printf("Tabuleiro de Batalha Naval:\n"); 

    printf(" 0 1 2 3 4 5 6 7 8 9\n"); 

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) { 

        printf("%d ", i); 

        for (int j = 0; j < TAMANHO_TABULEIRO; j++) { 

            printf("%d ", tabuleiro[i][j]); 

        } 

        printf("\n"); 

    } 

     

    return 0; 

} 