#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NLIN 5
#define NCOL 5
int main(){

    int matriz[NLIN][NCOL], l, c;

    srand(time(NULL));

    printf("Matriz Aleatória:\n");
    
    for(l = 0; l < NLIN; l++){
        for(c = 0; c < NCOL; c++){
            matriz[l][c] = 10+rand()%41;
            printf("%i ", matriz[l][c]);
        }
        printf("\n");
    }

    printf("\nMatriz Transporta:\n");

    for(l = 0; l < NLIN; l++){
        for(c = 0; c < NCOL; c++){
            printf("%i ", matriz[c][l]);
        }
        printf("\n");
    }


    printf("\n");
    return 0;
}