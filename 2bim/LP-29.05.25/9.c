#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(){

    int vet[TAM], i, j;

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        vet[i] = 10 + rand()%21;
    }

    for(i = 0; i < TAM; i++){
        for(j = i + 1; j < TAM; j++){
            if(vet[i] == vet[j]){
                vet[i] = 10 + rand()%21;
                j = 0;
            }
        }
    }

    for(i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }

    return 0;
}