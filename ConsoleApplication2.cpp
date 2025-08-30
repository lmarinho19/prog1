#include <stdio.h>   // Biblioteca para funções de entrada e saída
#include <locale.h>  // Biblioteca para configurar acentuação em português

int main() {
    setlocale(LC_ALL, "pt-br"); // Habilita caracteres especiais do português
    
    printf("Conversor de Celsius para Fahrenheit\n\n"); // Título do programa
    
    float temp; // Variável para armazenar a temperatura em Celsius
    printf("Digite a temperatura em °C: "); // Solicita entrada do usuário
    scanf_s("%f", &temp); // Lê o valor digitado pelo usuário

    // Fórmula de conversão: (C × 9/5) + 32 = F
    float conversao = (temp * 1.8) + 32; // Converte Celsius para Fahrenheit
    
    // Exibe o resultado com duas casas decimais
    printf("A temperatura %.2f°C em Fahrenheit é %.2f°F\n", temp, conversao);

    return 0; // Finaliza o programa com sucesso
}
