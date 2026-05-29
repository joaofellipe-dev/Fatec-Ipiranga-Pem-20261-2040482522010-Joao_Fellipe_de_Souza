#include <stdio.h>

int main() {
    char opcao;

    do {
        for (int i = 1; i <= 10; i++) {
            printf("=== Tabuada do %d ===\n", i);
            
            int j = 1;
            while (j <= 10) {
                printf("%2d x %2d = %3d\n", i, j, i * j);
                j++;
            }
            printf("\n");
        }

        do {
            printf("Deseja continuar? (S/N): ");
            scanf(" %c", &opcao);
        } while (opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n');

    } while (opcao == 'S' || opcao == 's');

    printf("Programa encerrado.\n");
    return 0;
}