#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt-br");
    printf("Conversor de medidas\n");

    float temp; 
    printf("Digite a temperatura em °C: ");
    scanf_s("%f", &temp);
    float conversao = (temp*1.8) + 32;
    printf("A temperatura %2.f°C em Fahrenheit %2.f°F", temp, conversao);
    return 0;
}
