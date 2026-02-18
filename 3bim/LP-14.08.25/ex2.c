#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam, tn1, tn2;
    char *n1, *n2;

    printf("Tamanho: ");
    scanf("%i", &tam);

    n1 = malloc(tam * sizeof(char));
    n2 = malloc(tam * sizeof(char));

    printf("Digite dois nomes\n");
    __fpurge(stdin);
    scanf("%[^\n]", n1);
    __fpurge(stdin);
    scanf("%[^\n]", n2);

    for(tn1 = 0; n1[tn1] != '\0'; tn1++){}
    for(tn2 = 0; n2[tn2] != '\0'; tn2++){}

    printf("%i + %i = %i", tn1, tn2, tn1 + tn2);

    printf("\n");
    return 0;
}