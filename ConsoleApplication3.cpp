#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf)
#include <locale.h>  // Biblioteca para configuração de localidade (acentos, língua)
#include <math.h>    // Biblioteca matemática (sqrt, sin, fabs, etc.)

int main() {
    setlocale(LC_ALL, ""); // Configura a localidade do sistema (para exibir acentos corretamente)

    float numero_1, numero_2; // Declaração de duas variáveis do tipo float para armazenar os números do usuário

    printf("Digite o primeiro numero: "); // Solicita ao usuário o primeiro número
    scanf_s("%f", &numero_1);            // Lê o valor digitado e armazena em numero_1

    printf("Digite o segundo numero: "); // Solicita ao usuário o segundo número
    scanf_s("%f", &numero_2);            // Lê o valor digitado e armazena em numero_2

    printf("Calculando.....\n");         // Mensagem indicando que o programa vai realizar os cálculos

    printf("A soma é: %.2f\n", numero_1 + numero_2); 
    // Calcula e exibe a soma dos dois números, com 2 casas decimais

    printf("O quadrado do primeiro é: %.2f\n", numero_1 * numero_1);
    // Calcula o quadrado do primeiro número e exibe o resultado

    printf("Raiz quadrada da soma dos quadrados é: %.2f\n", sqrt((numero_1 * numero_1) + (numero_2 * numero_2)));
    // Calcula a soma dos quadrados dos dois números e depois calcula a raiz quadrada dessa soma (distância euclidiana)

    printf("O seno da diferença do primeiro pelo segundo é: %.2f\n", sin(numero_1 - numero_2));
    // Calcula o seno da diferença entre o primeiro e o segu
