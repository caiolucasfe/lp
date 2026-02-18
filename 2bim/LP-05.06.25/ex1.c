#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main(){

    int i, vet[TAM];

    printf("Digite os Valores: ");

    for(i = 0; i < TAM; i++){
        scanf("%i", &vet[i]);
    }

    system("clear");

    printf("Normal: ");

    for(i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }

    printf("\nInvertido: ");

    for(i = 4; i >= 0; i--){
        printf("%i ", vet[i]);
    }

    printf("\n");
    return 0;
}