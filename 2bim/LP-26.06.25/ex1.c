#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    char p[TAM];

    printf("Nome do país: ");
    gets(p);

    printf("[%s]", p); //ou scanf("%[^\n]", p);

    printf("\n");
    return 0;
}