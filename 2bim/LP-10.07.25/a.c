#include <stdio.h>

#define TAM 10
#define COR_VERMELHO 	printf("\33[31m");
#define COR_BRANCO 		printf("\33[37m");

int main(){

    int lin, col;
    char mat[TAM][TAM];

    for(lin = 0; lin < TAM; lin++){
        for(col = 0; col < TAM; col++){
            mat[lin][col] = '@@';
            printf("%c ", mat[lin][col]);
        }
    }


    


    return 0;
}