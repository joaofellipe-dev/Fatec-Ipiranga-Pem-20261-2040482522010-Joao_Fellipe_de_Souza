#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minMax(int *v, int n, int *min, int *max) {
    *min = *v;
    *max = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) < *min) *min = *(v + i);
        if (*(v + i) > *max) *max = *(v + i);
    }
}

void normalizaVetor(float *v, int n) {
    float maior = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) > maior) maior = *(v + i);
    }
    if (maior > 0) {
        for (int i = 0; i < n; i++) {
            *(v + i) = *(v + i) / maior;
        }
    }
}

int main() {
    int x = 10, y = 99;
    printf("Antes troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois troca: x = %d, y = %d\n\n", x, y);

    int v_int[5] = {14, 5, 23, 1, 8};
    int min, max;
    minMax(v_int, 5, &min, &max);
    printf("Vetor int: Min = %d, Max = %d\n\n", min, max);

    float v_float[4] = {2.0f, 5.0f, 10.0f, 1.0f};
    printf("Antes normalizacao: %.1f, %.1f, %.1f, %.1f\n", v_float[0], v_float[1], v_float[2], v_float[3]);
    normalizaVetor(v_float, 4);
    printf("Depois normalizacao: %.2f, %.2f, %.2f, %.2f\n", v_float[0], v_float[1], v_float[2], v_float[3]);

    return 0;
}