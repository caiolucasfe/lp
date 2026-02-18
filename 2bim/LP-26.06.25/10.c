#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(){

    char ale[TAM], palavra[TAM];
    int i, j, tam, aux;

    srand(time(NULL));

    printf("Vetor aleatório: ");

    for(i = 0; i < TAM; i++){
        if(rand()%2 == 0){
            ale[i] = 65 + (rand()%26);
        }
        else{
            ale[i] = 97 + (rand()%26);
        }
        printf("%c ", ale[i]);
    }

    for(tam = 0; ale[tam] != '\0'; tam++);

    printf("Palavra: ");
    gets(palavra);

    for(i = 0; palavra[i] != '\0'; i++){

        aux = 0;

        for(j = 0; j < TAM; j++){

            if(palavra[i] == ale[j]){
                aux = 1;
            }
        
        }
        if(aux != 1){
            printf("\n- NÃO É POSSÍVEL");
            return 0;
        }
    }

    printf("\n- É POSSÍVEL");


    printf("\n");
    return 0;
}