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

    printf("Original: ");

    for(i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }

    printf("\nCodificado: ");

    for(i = 0; i < TAM; i++){
        if(vet[i] < 0){
            vet[i] = 0;
        }
        printf("%i ", vet[i]);
    }

    printf("\n");
    return 0;
}