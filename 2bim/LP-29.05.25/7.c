#include <stdio.h>
#include <time.h>
#define TAM 4

int main(){

    int vet[TAM], i, media, soma;
    srand(time(NULL));
    
        printf("-----------\n");
        
        for(i = 0; i < TAM; i++){
            vet[i] = 10 + rand()%89;
            soma+= vet[i];
            printf("%i ", vet[i]);
        }
        media = soma / 4;
        printf(" - MÉDIA %i", media);
        printf("\n-----------");
    return 0;
}