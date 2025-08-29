#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");

    float numero_1;
    float numero_2;

    printf("Digite o primeiro numero:\n ");
    scanf_s("%f", &numero_1);

    printf("Digite o segundo numero:\n ");
    scanf_s("%f", &numero_2);

    printf("Calculando.....\n");

    printf("A soma é: %.2f\n", numero_1 + numero_2);
    printf("O quadrado do primeiro é: %.2f\n", numero_1 * numero_1);
    printf("Raiz quadrada da soma dos quadrados é: %.2f\n", sqrt((numero_1 * numero_1) + (numero_2 * numero_2)));
    printf("O seno da diferença do primeiro pelo segundo é: %.2f\n", sin(numero_1 - numero_2));
    printf("O módulo do primeiro é: %.2f\n", fabs(numero_1));

    return 0;
}
