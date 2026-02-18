#include <stdio.h>
#include <time.h>

#define TAM 20

int main(){

    int vet[TAM], i;

    srand(time(NULL));

    for(i = 0; i < TAM; i++){

        vet[i] = 10 + rand()%90;
        printf("%i ", vet[i]);

    }
    
    return 0;
}