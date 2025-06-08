#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8
#define MOV_CAVALO 3  // Número de movimentos em L

/* Função recursiva para movimento da Torre */
Void moverTorre(int casas) {
    If (casas <= 0) return;
    Printf(“Direita\n”);
    moverTorre(casas – 1);
}

/* Função recursiva para movimento do Bispo */
Void moverBispo(int casas) {
    If (casas <= 0) return;
    Printf(“Cima, Direita\n”);
    moverBispo(casas – 1);
}

/* Implementação alternativa do Bispo com loops aninhados */
Void moverBispoLoops() {
    For (int vertical = 0; vertical < CASAS_BISPO; vertical++) {
        For (int horizontal = 0; horizontal < CASAS_BISPO; horizontal++) {
            If (vertical == horizontal) {  // Apenas na diagonal
                Printf(“Cima, Direita\n”);
                Break;  // Uma impressão por passo diagonal
            }
        }
    }
}

/* Função recursiva para movimento da Rainha */
Void moverRainha(int casas) {
    If (casas <= 0) return;
    Printf(“Esquerda\n”);
    moverRainha(casas – 1);
}

/* Movimento complexo do Cavalo com loops aninhados */
Void moverCavalo() {
    Int movimentos = 0;
    
    While (movimentos < MOV_CAVALO) {
        // Primeira parte do L: 2 casas para cima
        For (int i = 0; i < 2; i++) {
            Printf(“Cima\n”);
        }
        
        // Segunda parte do L: 1 casa para direita
        Printf(“Direita\n”);
        
        Movimentos++;
        
        // Condição especial para demonstrar continue/break
        If (movimentos == MOV_CAVALO – 1) {
            Printf(“Último movimento do cavalo!\n”);
            Continue;
        }
        
        If (movimentos > MOV_CAVALO) {
            Break;  // Nunca deve acontecer, demonstração apenas
        }
    }
}

Int main() {
    Printf(“=== SIMULAÇÃO DE XADREZ AVANÇADO ===\n\n”);
    
    Printf(“Movimento da Torre (recursivo):\n”);
    moverTorre(CASAS_TORRE);
    
    printf(“\nMovimento do Bispo (recursivo):\n”);
    moverBispo(CASAS_BISPO);
    
    printf(“\nMovimento do Bispo (loops aninhados):\n”);
    moverBispoLoops();
    
    printf(“\nMovimento da Rainha (recursivo):\n”);
    moverRainha(CASAS_RAINHA);
    
    printf(“\nMovimento do Cavalo (loops complexos):\n”);
    moverCavalo();
    
    printf(“\n=== FIM DA SIMULAÇÃO ===\n”);
    return 0;
}
