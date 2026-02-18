#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    char frase[TAM];
    int i, tam, aux = 0;

    srand(time(NULL));

    printf("Frase: ");
    gets(frase);

    for(tam = 0; frase[tam] != '\0'; tam++){}

    for(i = tam -1 ; i >= 0; i--){

        printf(" %c", frase[i]); 

        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){}
        
        else{
            aux++;
        }
    }

    printf(" %i", aux);


    printf("\n");
    return 0;
}