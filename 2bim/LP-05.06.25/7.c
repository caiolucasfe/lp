#include <stdio.h>
#include <time.h>

#define TAM 5
#define IN 10

int main(){

    int i, vet1[TAM], vet2[TAM], vet3[IN], j = 0, k = 0;

    srand(time(NULL));

    printf("1º VETOR: ");

    for(i = 0; i < TAM; i++){
        vet1[i] = 10+ rand()%89;
        printf("%i ", vet1[i]);
    }

    printf("\n2º VETOR: ");

    for(i = 0; i < TAM; i++){
        vet2[i] = 10+ rand()%89;
        printf("%i ", vet2[i]);
    }

    printf("\n3º VETOR: ");

    for(i = 0; i < IN; i++){
        if(i % 2 == 0){
            vet3[i] = vet1[j];
            printf("%i ", vet3[i]);
            j++;
        }
        else{
            vet3[i] = vet2[k];
            printf("%i ", vet3[i]);
            k++;
        }
    }

    printf("\n");
    return 0;
}