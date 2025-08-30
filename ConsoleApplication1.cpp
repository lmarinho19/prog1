#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf)
#include <locale.h>  // Biblioteca para configuração de localidade (acentos, língua)


// Função para converter metros em decímetros
void dec() {
    printf("Você escolheu 'Metros' para 'Decímetros'\n");
    float valor;
    printf("Digite o valor que deseja em (m): ");
    scanf_s("%f", &valor); // Lê o valor em metros
    printf("O valor convertido ficou %.2f dm\n", valor * 10); // Converte e exibe
}

// Função para converter metros em centímetros
void cent() {
    printf("Você escolheu 'Metros' para 'Centímetros'\n");
    float valor;
    printf("Digite o valor que deseja em (m): ");
    scanf_s("%f", &valor);
    printf("O valor convertido ficou %.2f cm\n", valor * 100);
}

// Função para converter metros em milímetros
void mili() {
    printf("Você escolheu 'Metros' para 'Milímetros'\n");
    float valor;
    printf("Digite o valor que deseja em (m): ");
    scanf_s("%f", &valor);
    printf("O valor convertido ficou %.2f mm\n", valor * 1000);
}

int main() {
    setlocale(LC_ALL, "pt-br"); // Permite acentuação
    printf("Conversor de medidas (Metros)\n");
    printf("1 - Decímetros\n2 - Centímetros\n3 - Milímetros\n");

    int select;
    printf("Digite a opção que escolheu: ");
    scanf_s("%d", &select); // Lê a escolha do usuário

    // Seleciona a função baseada na escolha
    switch (select) {
    case 1: dec(); break;
    case 2: cent(); break;
    case 3: mili(); break;
    default: printf("Valor inválido\n"); break;
    }

    return 0;
}

