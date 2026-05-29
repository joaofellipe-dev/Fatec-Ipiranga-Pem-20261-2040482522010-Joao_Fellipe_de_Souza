#include <stdio.h>

#define N 8

int main() {
    int orig[N], inv[N];
    int maior, idx_maior = 0;
    int menor, idx_menor = 0;
    int pares = 0, impares = 0;
    int chave, encontrado = -1;

    printf("Digite %d numeros inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &orig[i]);
    }

    maior = orig[0];
    menor = orig[0];

    for (int i = 0; i < N; i++) {
        if (orig[i] > maior) { maior = orig[i]; idx_maior = i; }
        if (orig[i] < menor) { menor = orig[i]; idx_menor = i; }

        if (orig[i] % 2 == 0) pares++;
        else impares++;

        inv[N - 1 - i] = orig[i];
    }

    printf("\nVetor original: ");
    for (int i = 0; i < N; i++) printf("%d ", orig[i]);
    
    printf("\nVetor invertido: ");
    for (int i = 0; i < N; i++) printf("%d ", inv[i]);

    printf("\n\nMaior valor: %d no indice %d", maior, idx_maior);
    printf("\nMenor valor: %d no indice %d", menor, idx_menor);
    printf("\nPares: %d, Impares: %d\n", pares, impares);

    printf("\nDigite um valor para buscar no vetor original: ");
    scanf("%d", &chave);
    for (int i = 0; i < N; i++) {
        if (orig[i] == chave) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("Valor encontrado no indice: %d\n", encontrado);
    } else {
        printf("O valor nao existe no vetor.\n");
    }

    return 0;
}