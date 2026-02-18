#include <stdio.h>
#include <time.h>

#define TAM 10

int main(){

    int i, j, aleatorio[TAM], aleatorio1[TAM], cont = 0;

    srand(time(NULL));

    

        for(i = 0; i < TAM;){
        
            aleatorio[i] = 10+ rand()%20;
            aleatorio1[i] = aleatorio[i];

            for(j = 0; j < TAM; j++){
                if(aleatorio[i] == aleatorio1[j]){
                    aleatorio[i] = 10+ rand()%20;
                    i++;
                }
            }
        
    }

    printf("Vetor sem Repetição: ");

    for(i = 0; i < TAM; i++){
        printf("%i ", aleatorio[i]);
    }

    printf("\n");
    return 0;
}