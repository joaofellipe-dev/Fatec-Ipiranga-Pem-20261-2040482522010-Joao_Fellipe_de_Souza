#include <stdio.h>

int main() {
    long long n;
    int passos = 0;

    printf("Digite um inteiro positivo para a Sequencia de Collatz: ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("Erro: O valor deve ser estritamente positivo (maior que zero).\n");
        return 1;
    }

    printf("Sequencia: %lld", n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf(" -> %lld", n);
        passos++;
    }

    printf("\nNumero total de passos: %d\n", passos);
    return 0;
}