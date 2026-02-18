#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main(){

    int i, aleatorio[TAM];

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        aleatorio[i] = 10 + (rand()%90);
        printf("%i ", aleatorio[i]); 
    }

    printf("\n");
    return 0;
}