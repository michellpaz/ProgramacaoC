#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8

int main() {
    // Movimento da Torre (for) - 5 casas para a direita
    printf("Movimento da Torre:\n");
    for(int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while) - 5 casas na diagonal superior direita
    printf("\nMovimento do Bispo:\n");
    int contador_bispo = 0;
    while(contador_bispo < CASAS_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha (do-while) - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while(contador_rainha < CASAS_RAINHA);

    return 0;
}

