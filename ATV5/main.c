#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5], quantidade = 0;
    while(quantidade < 5){
            printf("Digite um numero:\n");
            scanf("%d", &vetor[quantidade]);
            quantidade++;
            }
            printf("Voce digitou:\n");
            for (int i = 4; i >= 0; i--) {
                    printf("%d ", vetor[i]);
            }
            return 0;
}
