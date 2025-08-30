#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt-br");
    printf("Conversor de medidas\n");

    float temp; 
    printf("Digite a temperatura em °C: ");
    scanf_s("%f", &temp); // Lê temperatura em Celsius

    float conversao = (temp*1.8) + 32; // Converte para Fahrenheit
    printf("A temperatura %.2f°C em Fahrenheit é %.2f°F\n", temp, conversao);

    return 0;
}
