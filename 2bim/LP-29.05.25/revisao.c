#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

int main(){

    int i;
    char vet[TAM];

    srand(time(NULL));

    for(i = 0; i < 10; i++){

        vet[i] = rand()%10;

        if(vet[i] % 2 == 1){
            
            printf("\nvet[%i] = %i", i, vet[i]);
        }    
    }

    printf("\n");
    return 0;
}