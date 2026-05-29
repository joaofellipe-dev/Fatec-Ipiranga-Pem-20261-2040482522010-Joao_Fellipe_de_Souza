#include <stdio.h>

int main() {
    int cm;
    float metros;
    double km, milhas;

    printf("Digite a distancia em centimetros: ");
    scanf("%d", &cm);

    if (cm < 0) {
        printf("Erro: O valor informado deve ser um numero positivo.\n");
        return 1;
    }

    metros = cm / 100.0f;
    km = cm / 100000.0;
    milhas = km / 1.60934;

    printf("\nResultados da conversao:\n");
    printf("Metros: %.2fm\n", metros);
    printf("Quilometros: %.5f km\n", km);
    printf("Milhas: %.5f mi\n", milhas);

    return 0;
}