#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float raio, area, perimetro;
    printf("Digite o valor do raio do circulo desejado:\n ");
    scanf("%f", &raio);
    area = M_PI * pow(raio, 2);
    perimetro = 2 * M_PI * raio;
    printf("o perimetro do circulo é: %.2f \n", perimetro);
    printf("a area do circulo é: %.2f \n", area);


    return 0;
}
