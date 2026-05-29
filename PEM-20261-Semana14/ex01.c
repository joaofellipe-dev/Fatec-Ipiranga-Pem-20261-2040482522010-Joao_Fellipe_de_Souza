#include <stdio.h>

int main() {
    double n1, n2, n3, media;
    int p1, p2, p3;

    printf("Digite a primeira nota e seu peso (ex: 8.5 2): ");
    scanf("%lf %d", &n1, &p1);
    
    printf("Digite a segunda nota e seu peso: ");
    scanf("%lf %d", &n2, &p2);
    
    printf("Digite a terceira nota e seu peso: ");
    scanf("%lf %d", &n3, &p3);

    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("\nMedia Ponderada: %.2f\n", media);
    
    printf("\nTamanho em bytes dos tipos utilizados:\n");
    printf("double (notas/media): %lu bytes\n", (unsigned long)sizeof(double));
    printf("int (pesos): %lu bytes\n", (unsigned long)sizeof(int));

    return 0;
}
