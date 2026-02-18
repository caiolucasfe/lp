#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

int main(){

    int nums[TAM], i, cont = 0, cont2 = 0;

    srand(time(NULL));

    printf("Vetor: ");

    // Gera e Exibe

    for(i = 0; i < TAM; i++){

        nums[i] = (rand()%41) + 10;
        printf("%i ", nums[i]);
    }

    // Contabilizar entre 20 e 40

    for(i = 0; i < TAM; i++){

        if(nums[i] >= 20 && nums[i] <= 40){

            cont++;
        }
    }

    printf("\nTotal entre 20 e 40: %i ", cont);

    printf("\nNúmeros Pares: ");

    for(i = 0; i < TAM; i++){

        if(nums[i] % 2 == 0){

            printf("%i ", nums[i]);
        }
        if(nums[i] > 35){

            cont2++;
        }
    }

    printf("\nTotal de números maiores que 35: %i", cont2++);

    printf("\n");
    return 0;
}