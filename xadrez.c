#include <stdio.h>
//Definição das constantes para a movimentação das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima-Direita\n");
    }
    
    printf("\n");

    // Movimentação da Torre - 5 casas para a direita
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }
    
    printf("\n");

    // Movimentação da Rainha - 8 casas para a esquerda
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
