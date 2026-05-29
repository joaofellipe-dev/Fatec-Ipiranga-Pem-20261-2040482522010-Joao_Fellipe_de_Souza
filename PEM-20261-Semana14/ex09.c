#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3] = {0};

    printf("Digite os valores da Matriz A (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Digite os valores da Matriz B (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%4d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%4d ", B[i][j]);
        printf("\n");
    }

    printf("\nMatriz Resultante C (A x B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%4d ", C[i][j]);
        printf("\n");
    }

    return 0;
}