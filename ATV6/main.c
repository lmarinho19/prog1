#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra1[50], palavra2[50], palavra3[50];

    printf("Digite a primeira palavra: ");
    scanf("%49s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%49s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%49s", palavra3);

    printf("\nOrdem inversa:\n");
    printf("%s %s %s\n", palavra3, palavra2, palavra1);

    return 0;
}
