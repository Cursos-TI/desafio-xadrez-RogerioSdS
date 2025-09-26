#include <stdio.h>

int main(void) {
    // ===============================
    // Nível Novato - Movimentação das Peças
    // ===============================

    // Constantes: número de casas que cada peça pode se mover
    const int BISPO_CASAS = 5;
    const int TORRE_CASAS = 5;
    const int RAINHA_CASAS = 8;

    int i, j; // variáveis de controle para loops

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
    // Nível Aventureiro - Cavalo
    // Cavalo anda em "L" -> duas casas para baixo e uma casa para a esquerda
    // Usando loops aninhados: for + while
    // ===============================
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    printf("\n=== Movimentação do Cavalo (duas casas para baixo e uma para a esquerda) ===\n");

    for (i = 1; i <= CAVALO_BAIXO; i++) {
        printf("Baixo\n");

        // Quando terminar as duas casas para baixo,
        // usamos um loop while para mover para a esquerda
        if (i == CAVALO_BAIXO) {
            j = 1;
            while (j <= CAVALO_ESQUERDA) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    // ===============================
    // Fim do programa
    // ===============================
    return 0;
}
