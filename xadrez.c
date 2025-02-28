#include <stdio.h>

int main() {
    // Torre: Move 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Bispo: Move 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int casas_bispo = 0; // Inicializando a variável para controlar o número de repetições
    while (casas_bispo < 5) {
        printf("Cima Direita\n");
        casas_bispo++; 
    }

    // Rainha: Move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int casas_rainha = 0; // Inicializando a variável para controlar o número de repetições
    do {
        printf("Esquerda\n");
        casas_rainha++; 
    } while (casas_rainha < 8);

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


