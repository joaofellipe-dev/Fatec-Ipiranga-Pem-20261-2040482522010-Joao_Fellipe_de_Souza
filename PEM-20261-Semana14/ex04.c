#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Os lados formam um triangulo valido.\n");

        if (a == b && b == c) {
            printf("Classificacao: Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Classificacao: Isosceles\n");
        } else {
            printf("Classificacao: Escaleno\n");
        }

        float maior, l2, l3;
        if (a >= b && a >= c) { maior = a; l2 = b; l3 = c; }
        else if (b >= a && b >= c) { maior = b; l2 = a; l3 = c; }
        else { maior = c; l2 = a; l3 = b; }

        float m_quad = maior * maior;
        float soma_quad = (l2 * l2) + (l3 * l3);

        if (m_quad == soma_quad) {
            printf("Angulo: Retangulo\n");
        } else if (m_quad > soma_quad) {
            printf("Angulo: Obtusangulo\n");
        } else {
            printf("Angulo: Acutangulo\n");
        }
    } else {
        printf("Erro: Os valores nao obedecem a identidade triangular.\n");
    }

    return 0;
}