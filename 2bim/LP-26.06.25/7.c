#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    char frase[TAM], letra;
    int i, aux = 0;

    printf("Frase: ");
    gets(frase);

    printf("Letra: ");
    scanf("%c", &letra);

    for(i = 0; frase[i]!= '\0'; i++){
        if(frase[i] == letra){
            aux++;
        }
    }

    printf("Total: %i", aux);

    printf("\n");
    return 0;
}