#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main(){

    int i, aleatorio[TAM];

    srand(time(NULL));

    printf("|");

    for(i = 0; i < TAM; i++){

        if(i < 10){
            printf("0");
        }

        printf("%i|", i);
    }
    
    printf("\n|");
    
    for(i = 0; i < TAM; i++){
        aleatorio[i] = 10 + (rand()%90);
        printf("%i|", aleatorio[i]); 

    }

    printf("\n");
    return 0;
}