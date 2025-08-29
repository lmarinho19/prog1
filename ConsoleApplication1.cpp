#include <stdio.h>
#include <locale.h>

void dec() {
    printf("Você escolheu 'Metros' para 'Decímetros'\n");
    float valor;
    printf("Digite o valor que deseja em (m): ");
    scanf_s("%f", &valor);
    printf("O valor convertido ficou %.2f dm\n", valor * 10);
}

void cent() {
    printf("Você escolheu 'Metros' para 'Centímetros'\n");
    float valor;
    printf("Digite o valor que deseja em (m): ");
    scanf_s("%f", &valor);
    printf("O valor convertido ficou %.2f cm\n", valor * 100);
}

void mili() {
    printf("Você escolheu 'Metros' para 'Milímetros'\n");
    float valor;
    printf("Digite o valor que deseja em (m): ");
    scanf_s("%f", &valor);
    printf("O valor convertido ficou %.2f mm\n", valor * 1000);
}

int main() {
    setlocale(LC_ALL, "pt-br");
    printf("Conversor de medidas (Metros)\n");
    printf("1 - Decímetros\n2 - Centímetros\n3 - Milímetros\n");

    int select;
    printf("Digite a opção que escolheu: ");
    scanf_s("%d", &select);

    switch (select) {
    case 1: dec(); break;
    case 2: cent(); break;
    case 3: mili(); break;
    default: printf("Valor inválido\n"); break;
    }

    return 0;
}
