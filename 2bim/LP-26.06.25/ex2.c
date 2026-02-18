#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    char p[TAM];
    int i;

    printf("Nome do país: ");
    gets(p);

    for(i = 0; p[i] != '\0'; i++){
        printf("%c ", p[i]);
    }

    printf("Total de letras: %i", i);

    printf("\n");
    return 0;
}