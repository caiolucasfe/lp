#include <stdio.h>
#include <time.h>

#define TAM 12

int main(){

    int vet[TAM], i, soma;

    srand(time(NULL));

    printf("Vetor: ");

    for(i = 0; i < TAM; i++){

        vet[i] = 1+ rand()%9;
        printf("%i ", vet[i]);

    }

    printf("\nSoma dos Ímpares(");

    for(i = 0; i < TAM; i++){
        if(vet[i] % 2 == 1){
            printf(" %i", vet[i]);
            soma+= vet[i];
        }
    }

    printf(" ) = %i", soma);
    
    return 0;
}