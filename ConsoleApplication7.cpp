#include <stdio.h>
#include <locale.h>

void fatorar(int n) {
    int fator = 2, multiplicidade;
    printf("Fatores primos de %d:\n", n);

    while (n > 1) {
        multiplicidade = 0;
        while (n % fator == 0) {
            multiplicidade++;
            n /= fator;
        }
        if (multiplicidade > 0) {
            printf("Fator %d com multiplicidade %d\n", fator, multiplicidade);
        }
        fator++;
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf_s("%d", &numero);

    fatorar(numero);

    return 0;
}
