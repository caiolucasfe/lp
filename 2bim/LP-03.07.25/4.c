#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COR_VERMELHO 	printf("\33[31m");
#define COR_VERDE 		printf("\33[32m");
#define COR_BRANCO 		printf("\33[37m");
#define PADRÃO          printf("\e[0m");

#define NLIN 5
#define NCOL 5
int main(){

    int matriz[NLIN][NCOL], l, c, maior = 0;

    srand(time(NULL));

    printf("Matriz Aleatória:\n");
    
    for(l = 0; l < NLIN; l++){
        for(c = 0; c < NCOL; c++){
            matriz[l][c] = 10+rand()%41;
            printf("%i ", matriz[l][c]);

            if(c == l){

                if(matriz[l][c]> maior){
                    maior = matriz[l][c];
                }
                
            }
        }
        printf("\n");
    }

    printf("\nMatriz Modificada:\n");

    for(l = 0; l < NLIN; l++){
        for(c = 0; c < NCOL; c++){

            if(c == l){

                if(matriz[l][c] ==  maior){
                    COR_VERMELHO
                    printf("%i ", matriz[l][c]);
                }
                else{
                    COR_VERDE
                    printf("%i ", matriz[l][c]);
                }
                
            }
            else{
                PADRÃO
                printf("%i ", matriz[l][c]);
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}