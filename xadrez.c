#include <stdio.h>

// Função recursiva para movimentar a Torre (n casas para a direita)
void moverTorre(int n) {
    if (n > 0) {
        printf("Direita\n");
        moverTorre(n - 1);
    }
}

// Função recursiva para movimentar a Rainha (n casas para a esquerda)
void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        moverRainha(n - 1);
    }
}

// Função para movimentar o Cavalo (duas casas para cima e uma para a direita)
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) { // Loop para mover 2 casas para cima
        printf("Cima\n");
    }
    
    for (int j = 0; j < 1; j++) { // Loop para mover 1 casa para a direita
        printf("Direita\n");
    }
}

// Função recursiva e com loops aninhados para o Bispo (5 casas na diagonal)
void moverBispoComLoops(int n) {
    for (int i = 0; i < n; i++) { // Loop externo para o movimento vertical
            printf("Cima Direita\n");
        }
    
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre usando recursão
    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo usando recursão e loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispoComLoops(casasBispo);

    // Movimento da Rainha usando recursão
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo usando loops complexos
    moverCavalo();

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


