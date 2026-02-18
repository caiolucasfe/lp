#include <stdio.h>
#include <time.h>

#define TAM 12

int main(){

    int ale[TAM], ord[TAM], i, j = 0, aux = 100;

    srand(time(NULL));

    printf("Vetor Aleatório: ");

    for(i = 0; i < TAM; i++){

        ale[i] = 10+ rand()%90;
        printf("%i ", ale[i]);

    }


    for(aux = 100; aux >= 0; aux--){

        for(i = 0; i < TAM; i++){
            if(ale[i] == aux){
                ord[j] = ale[i];
                j++;
            }
        }
    }

    printf("\nVetor Ordenado: ");

    for(i = 0; i < TAM; i++){

        printf("%i ", ord[i]);
    }
    
    return 0;
}