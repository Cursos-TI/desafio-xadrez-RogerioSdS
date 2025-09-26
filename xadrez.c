#include <stdio.h>

// ===============================
// Função recursiva da Torre
// ===============================
void moverTorre(int casas) {
    if (casas == 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// ===============================
// Função recursiva da Rainha
// ===============================
void moverRainha(int casas) {
    if (casas == 0) return; 
    printf("Esquerda\n");
    moverRainha(casas - 1); 
}

// ===============================
// Função recursiva do Bispo
// ===============================
void moverBispoRecursivo(int casas) {
    if (casas == 0) return; 
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ===============================
// Função com loops aninhados do Bispo
// ===============================
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n"); 
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

// ===============================
// Movimento do Cavalo
// ===============================
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("\n=== Movimentação do Cavalo (duas casas para cima e uma para a direita) ===\n");

    
    for (int i = 1; i <= movimentosVerticais; i++) {
        if (i == 1) {
            printf("Cima\n");
            continue; 
        }
        if (i == 2) {
            printf("Cima\n");
            
            for (int j = 1; j <= movimentosHorizontais; j++) {
                if (j > 1) break; 
                printf("Direita\n");
            }
        }
    }
}

// ===============================
// Função principal
// ===============================
int main(void) {
    const int TORRE_CASAS = 5;
    const int RAINHA_CASAS = 8;
    const int BISPO_CASAS = 5;

    printf("=== Movimentação da Torre (direita) ===\n");
    moverTorre(TORRE_CASAS);

    printf("\n=== Movimentação da Rainha (esquerda) ===\n");
    moverRainha(RAINHA_CASAS);

    printf("\n=== Movimentação do Bispo (diagonal superior direita - recursivo) ===\n");
    moverBispoRecursivo(BISPO_CASAS);

    printf("\n=== Movimentação do Bispo (diagonal superior direita - loops aninhados) ===\n");
    moverBispoLoop(BISPO_CASAS);

    moverCavalo();

    return 0;
}
