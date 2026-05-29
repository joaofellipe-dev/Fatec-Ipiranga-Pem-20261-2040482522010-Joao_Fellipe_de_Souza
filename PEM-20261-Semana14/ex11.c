#include <stdio.h>

int main() {
    int vetor[6] = {10, 20, 30, 40, 50, 60};
    int *p = vetor;
    int soma = 0;

    printf("=== Dados Iniciais e Enderecos ===\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento: %d | Endereco: %p\n", *(p + i), (void*)(p + i));
        soma += *(p + i);
    }

    printf("\nSoma dos elementos: %d\n", soma);

    int *p_dobro = vetor;
    for (int i = 0; i < 6; i++) {
        *p_dobro = (*p_dobro) * 2;
        p_dobro++;
    }

    printf("\n=== Vetor Apos Modificacao ===\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento: %d\n", vetor[i]);
    }

    printf("\nConfirmacao aritmetica: tamanho de int = %lu bytes\n", (unsigned long)sizeof(int));
    printf("Diferenca entre p[1] e p[0]: %ld bytes\n", (char*)&vetor[1] - (char*)&vetor[0]);

    return 0;
}