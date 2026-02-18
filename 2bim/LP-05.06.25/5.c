#include <stdio.h>
#include <time.h>

#define TAM 5

int main(){

    int i, vet[TAM];

    printf("Digite 5 Valores: ");

    for(i = 0; i < TAM; i++){
        scanf("%i", &vet[i]);
    }

    printf("Vetor: ");

    for(i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }

    printf("Quadrado: ");

    for(i = 0; i < TAM; i++){

        printf("%i ", vet[i] * vet[i]);
    }

    printf("\n");
    return 0;
}