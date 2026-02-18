#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 12

int quantidadeRepete(int vet[TAM], int numero);

int main(){

    int vetor[TAM], i, valor;

    srand(time(NULL));

    printf("Vetor aleatório: ");

    for(i = 0; i < TAM; i++){
        vetor[i] = 10 + rand()%21;
        printf("%i ", vetor[i]);
    }

    printf("\nValor: ");
    scanf(" %i", &valor);

    printf("Total: %i", quantidadeRepete(vetor, valor));

    return 0;
}

int quantidadeRepete(int vet[TAM], int numero){

    int i, quantidade = 0;

    for(i = 0; i < TAM; i++){
        if(vet[i] == numero){
            quantidade++;
        }
    }

    return quantidade;
}