#include <stdio.h>

int main() {
    float vet[10];
    float soma = 0, media = 0;
    float maior, menor;
    float soma_acima_media = 0;

    printf("Digite 10 numeros reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
        soma += vet[i];
    }

    media = soma / 10.0f;
    maior = vet[0];
    menor = vet[0];

    for (int i = 0; i < 10; i++) {
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
        if (vet[i] > media) {
            soma_acima_media += vet[i];
        }
    }

    printf("\n=== Estatisticas ===\n");
    printf("Media aritmetica: %.2f\n", media);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Soma dos valores acima da media: %.2f\n", soma_acima_media);

    return 0;
}