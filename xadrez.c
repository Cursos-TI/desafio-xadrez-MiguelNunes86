
int main() {
    
    // torre - anda 5 casas para a direita
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // bispo - anda 5 casas na diagonal para cima e direita
    int j = 0;
    printf("\nMovimento do Bispo:\n");
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // rainha - anda 8 casas para a esquerda
    int k = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}