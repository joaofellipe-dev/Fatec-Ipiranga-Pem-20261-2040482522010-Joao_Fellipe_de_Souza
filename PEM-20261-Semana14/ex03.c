#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (peso <= 0.0f || altura <= 0.0f) {
        printf("Erro: Peso e altura devem ser maiores que zero.\n");
        return 1;
    }

    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);

    if (imc < 18.5f) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0f) {
        printf("Peso normal\n");
    } else if (imc < 30.0f) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}