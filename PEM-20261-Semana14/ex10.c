#include <stdio.h>

void exibirTabuleiro(int tab[4][4]) {
    printf("\nTabuleiro 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", tab[i][j]);
        }
        printf("\n");
    }
}

int verificarSimetria(int tab[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tab[i][j] != tab[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

void exibirDiagonais(int tab[4][4]) {
    printf("\nDiagonal Principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", tab[i][i]);
    }
    
    printf("\nDiagonal Secundaria: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", tab[i][3 - i]);
    }
    printf("\n");
}

int main() {
    int tabuleiro[4][4] = {
        {1, 5, 2, 3},
        {5, 4, 8, 7},
        {2, 8, 6, 1},
        {3, 7, 1, 2}
    };

    exibirTabuleiro(tabuleiro);
    exibirDiagonais(tabuleiro);

    if (verificarSimetria(tabuleiro)) {
        printf("\nTodos os pares estao em posicoes simetricas em relacao a diagonal principal.\n");
    } else {
        printf("\nOs pares NAO estao em posicoes simetricas em relacao a diagonal principal.\n");
    }

    return 0;
}