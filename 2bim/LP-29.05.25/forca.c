#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 100

int main(){

    int i, fim = 0, acertos = 0, tl = 0;
    char palavra[TAM], letra;

    printf("Palavra: ");
    scanf("%s", &palavra);

                    // 65 ---- 90 == A ---- Z
    //ACII                                            // 32 de diferença, converter entre é A +32 = a ou a -32 = A
                    // 97 ---- 122 == a ---- z

    for(i = 0; palavra[i] != '\0'; i++){
        palavra[i] -= 32;
    }
    tl = i;

    while(fim < 2){
        
        system("clear");

        for(i = 0; palavra[i] != '\0'; i++){

            if(palavra[i] >= 65 && palavra[i] <= 90){

                printf("_ ");
            }
            else {
                printf("%c ", palavra[i]);
            }
        }

        printf("\nNúmero de acertos: %i de %i", acertos, tl);

        if(fim == 0){
        
        
            printf("\nDigite uma letra: ");
            __fpurge(stdin);
            scanf("%c", &letra);

            for(i = 0; palavra[i] != '\0'; i++){

                if((palavra[i]+32) == letra){

                    acertos++;
                    palavra[i] += 32;
                }
            }

            if(acertos == tl){
                fim = 1;
            }

        }
        
        else{
            fim = 2;
        }

    }
    
    printf("\nVocê venceu!!!!!");

    printf("\n");
    return 0;
}