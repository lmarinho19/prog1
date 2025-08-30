#include <stdio.h>
#include <locale.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, i, num, resultado;

    printf("Digite a quantidade de numeros: ");
    scanf_s("%d", &n);

    printf("Digite o numero 1: ");
    scanf_s("%d", &resultado);

    for (i = 2; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf_s("%d", &num);
        resultado = mdc(resultado, num);
    }

    printf("O MDC de todos os numeros e: %d\n", resultado);

    return 0;
}
