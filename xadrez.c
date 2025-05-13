#include <stdio.h>

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Função recursiva para movimentar o Bispo (diagonal cima-direita)
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loops aninhados para representar movimento diagonal
    for (int i = 0; i < 1; i++) {         // movimento vertical
        for (int j = 0; j < 1; j++) {     // movimento horizontal
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// Função para movimentar o Cavalo com loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    // Simula movimentos em L (2 para cima e 1 para direita)
    for (int cima = 0; cima < 3; cima++) {
        for (int direita = 0; direita < 3; direita++) {

            if (cima == 2 && direita == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                continue; // pula para a próxima repetição
            }

            break; // sai do loop se não for movimento válido
        }
    }
}

int main() {
    // Número de casas definidas no código
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}
