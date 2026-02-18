#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

int main(){

    int i, j, vet[TAM], repetidos = 0, flag;

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        vet[i] = 10+ rand()%10;
    }

    printf("Vetor: ");

    for(i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }

    printf("\nRepetidos: ");

    for(i = 0; i < TAM; i++){
        flag = 0;

        for(j = i; j < TAM; j++){

            if(vet[i] == vet[j] && i != j && vet[i] != 0){

                if(flag == 0){
                    printf("%i ", vet[i]);
                    flag = 1;
                }
                
            }
            vet[j] = 0;
        }
    }

    printf("\n");
    return 0;
}