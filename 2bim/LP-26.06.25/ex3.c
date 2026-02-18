#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(){

    char vet[TAM];
    int i;

    srand(time(NULL));

    printf("Vetor aleatório");

    for(i = 0; i < TAM; i++){
        if(rand()%2 == 0){
            vet[i] = 65 + (rand()%26);
        }
        else{
            vet[i] = 97 + (rand()%26);
        }
        printf("%c ", vet[i]);
    }


    printf("\n");
    return 0;
}