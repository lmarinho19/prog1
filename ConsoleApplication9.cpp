#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    double capital, taxa, montante;
    int meses = 12;

    printf("Digite o capital inicial (R$): ");
    scanf_s("%lf", &capital);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf_s("%lf", &taxa);

    taxa = taxa / 100.0;

    printf("\nEvolucao do montante a cada mes:\n");
    for (int i = 1; i <= meses; i++) {
        montante = capital * pow(1 + taxa, i);
        printf("Mes %d: R$ %.2lf\n", i, montante);
    }

    return 0;
}
