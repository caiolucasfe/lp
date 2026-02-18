#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    char frase[TAM];
    int i, aux;

    srand(time(NULL));

    printf("Frase: ");
    gets(frase);

    for(i = 0; frase[i] != '\0'; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            aux++;
        }
    }

    printf("%i ", aux);


    printf("\n");
    return 0;
}