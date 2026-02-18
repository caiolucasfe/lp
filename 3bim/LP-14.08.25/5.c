#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam;
    char *n1, *n2, *n3;

    printf("Tamanho: ");
    scanf("%i", &tam);

    n1 = malloc(tam * sizeof(char));
    n2 = malloc(tam * sizeof(char));
    n3 = malloc(((tam * 2) +1) * sizeof(char));

    printf("Digite dois nomes\n");
    __fpurge(stdin);
    scanf("%[^\n]", n1);
    __fpurge(stdin);
    scanf("%[^\n]", n2);

    n3 = 

    printf("Concatenado: ", n1, n2);

    printf("\n");
    return 0;
}