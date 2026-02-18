#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

int main(){

    int nums[TAM], i, cont = 0, cont2 = 0, maior = 0, menor = 100, pmenor, pmaior;

    srand(time(NULL));
    
    // Exibe a posição dos vetores
    
    printf("|");
    
    for(i = 0; i < TAM; i++){

        if(i < 10){

            printf("0");
        }

        printf("%i|", i);
    }

    printf("\n ");

    // Gera e Exibe

    for(i = 0; i < TAM; i++){

        nums[i] = (rand()%90) + 10;
        printf("%i ", nums[i]);
    }

    //Maior e Menor

    for(i = 0; i < TAM; i++){

        if(nums[i] > maior){
            maior = nums[i];
            pmaior = i;
        }

        if(nums[i] < menor){
            menor = nums[i];
            pmenor = i;
        }
    }

    printf("\nMaior é igual: %i , sua posição %i", maior, pmaior);

    printf("\nMenor é igual: %i , sua posição %i", menor, pmenor);

    
    printf("\n");
    return 0;
}