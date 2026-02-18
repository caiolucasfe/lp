#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho;
    char *nome;

    printf("Tamanho: ");
    scanf("%i", &tamanho);

    nome = malloc(tamanho * sizeof(char));

    printf("Nome: ");
    __fpurge(stdin);
    scanf("%[^\n]", nome);

    printf("[%s]", nome);

    nome = realloc(nome, (tamanho * 2) * sizeof(char));

    printf("[%s]", nome);

    return 0;
}