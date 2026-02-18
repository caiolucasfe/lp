#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NLIN 5
#define NCOL 5
#define COR_VERMELHO 	printf("\33[31m");
#define COR_VERDE 		printf("\33[32m");
#define COR_LARANJA 	printf("\33[33m");
#define COR_AZUL 		printf("\33[34m");
#define COR_ROXO		printf("\33[35m");
#define COR_BRANCO 		printf("\33[37m");

int main() {

    int l, c, mat[NLIN][NCOL];

    srand(time(NULL));

    COR_LARANJA 
    printf("  ");
    for(c=0; c<NCOL; c++) 
        printf("%i ", c);

    printf("\n");
    for(l=0; l<NLIN; l++) {         
        COR_LARANJA
        printf("%i ", l);
        COR_BRANCO 
        for(c=0; c<NCOL; c++) {     
            mat[l][c] = rand()%10;  
            printf("%i ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}