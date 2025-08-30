#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf)
#include <locale.h>  // Biblioteca para configuração de localidade (acentos, língua)

// Função para converter metros em decímetros
void dec() {
    printf("Você escolheu 'Metros' para 'Decímetros'\n"); // Mensagem informativa
    float valor; // Variável para armazenar o valor em metros
    printf("Digite o valor que deseja em (m): "); // Solicita valor ao usuário
    scanf_s("%f", &valor); // Lê o valor digitado
    printf("O valor convertido ficou %.2f dm\n", valor * 10); // Converte e exibe o resultado
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
    setlocale(LC_ALL, "pt-br"); // Permite exibir acentos corretamente

    // Mensagens de introdução
    printf("Conversor de medidas (Metros)\n");
    printf("1 - Decímetros\n2 - Centímetros\n3 - Milímetros\n");

    int select; // Variável para armazenar a escolha do usuário
    printf("Digite a opção que escolheu: ");
    scanf_s("%d", &select); // Lê a escolha

    // Executa a função correspondente à escolha
    switch (select) {
    case 1: dec(); break; // Se escolher 1, chama função dec()
    case 2: cent(); break; // Se escolher 2, chama função cent()
    case 3: mili(); break; // Se escolher 3, chama função mili()
    default: printf("Valor inválido\n"); break; // Caso escolha inválida
    }

    return 0; // Finaliza o programa
}
