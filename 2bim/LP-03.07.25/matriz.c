#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NLIN 5
#define NCOL 5
int main(){

    int matriz[NLIN][NCOL], l, c;

    srand(time(NULL));

    
    for(l = 0; l < NLIN; l++){
        for(c = 0; c < NLIN; c++){
            matriz[l][c] = rand()%10;
            printf("[%i|%i] = %i ", l, c, matriz[l][c]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}