#include <stdio.h>
#include <time.h>

#define TAM 6

int main(){

    int vet[TAM], i, soma, maior = 0, menor = 100;

    srand(time(NULL));

    printf("Vetor: ");

    for(i = 0; i < TAM; i++){

        vet[i] = 10+ rand()%90;
        printf("%i ", vet[i]);

    }

    for(i = 0; i < TAM; i++){
        if(vet[i] > maior){
            
            maior = vet[i];
        }
        if(vet[i] < menor){

            menor = vet[i];
        }
    }

    printf("\nMaior: ");

    if(maior % 2 == 1){

        printf("%i (ÍMPAR)", maior);
    }
    else{

        printf("%i (PAR)", maior);
    }

    printf("\nMenor: ");

    if(menor % 2 == 1){

        printf("%i (ÍMPAR)", menor);
    }
    else{

        printf("%i (PAR)", menor);
    }
    
    return 0;
}