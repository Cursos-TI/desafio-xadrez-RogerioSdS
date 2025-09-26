#include <stdio.h>

int main(void) {
    // ===============================
    // Nível Novato - Movimentação das Peças
    // ===============================

    // Constantes: número de casas que cada peça pode se mover
    const int BISPO_CASAS = 5;
    const int TORRE_CASAS = 5;
    const int RAINHA_CASAS = 8;

    int i; // variável de controle para loops

    // ===============================
    // Movimentação do Bispo
    // Bispo anda na diagonal -> (Cima + Direita)
    // Usando estrutura "for"
    // ===============================
    printf("=== Movimentação do Bispo (diagonal superior direita) ===\n");
    for (i = 1; i <= BISPO_CASAS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // ===============================
    // Movimentação da Torre
    // Torre anda apenas para a direita
    // Usando estrutura "while"
    // ===============================
    printf("\n=== Movimentação da Torre (direita) ===\n");
    i = 1;
    while (i <= TORRE_CASAS) {
        printf("Direita\n");
        i++;
    }

    // ===============================
    // Movimentação da Rainha
    // Rainha anda para a esquerda
    // Usando estrutura "do-while"
    // ===============================
    printf("\n=== Movimentação da Rainha (esquerda) ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= RAINHA_CASAS);

    // ===============================
    // Fim do programa
    // ===============================
    return 0;
}
