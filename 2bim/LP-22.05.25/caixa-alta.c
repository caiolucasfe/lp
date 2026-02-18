#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    int i;
    char nome[TAM];

    printf("Digite um nome: ");
    gets(nome);

    
    for(i = 0; nome[i] != '\0'; i++){
        
        if(nome [i] >= 97 && nome[i] <= 122){
            
            printf("%c", nome[i] - 32);
        }
        else{
            
            printf("%c", nome[i]);
        }
    }
    
    //printf("%s", nome);
    //scanf("%[^\n]s", &nome);


    printf("\n");
    return 0;
}