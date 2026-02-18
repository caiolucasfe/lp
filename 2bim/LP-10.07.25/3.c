#include <stdio.h>

#define TAM 10
#define COR_VERMELHO 	printf("\33[31m");
#define COR_BRANCO 		printf("\33[37m");

int main(){

    int lin, col, mat[TAM][TAM];

    srand(time(NULL));

    COR_VERMELHO
    printf("    |");

    for(col = 0; col < TAM; col++){
        printf("0%i|", col);
    }

    printf("\n|");

    for(lin = 0; lin < TAM; lin++){
        COR_VERMELHO
        printf("0%i| ", lin);
        for(col = 0; col < TAM; col++){
            mat[lin][col] = 0;
            COR_BRANCO
            printf("0%i ", mat[lin][col]);
        }
        if(lin < TAM-1){
            COR_VERMELHO
            printf("\n|");
        }    
    }
    COR_BRANCO




    return 0;
}