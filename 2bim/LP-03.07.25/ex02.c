#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NLIN 5
#define NCOL 5

int main() {

    int i, j, k, mat[NLIN][NCOL];

    srand(time(NULL));

    // Preencheu com "0"
    for(i=0; i<NLIN; i++) {
        for(j=0; j<NCOL; j++) {
            mat[i][j] = 0;
        }
    }

    // Insere dez valores '5'
    for(k=0; k<10; k++) {
        i = rand()%5;
        j = rand()%5;
        if(mat[i][j] == 0) {
            mat[i][j] = 5;
        }
        else {
            k--;
        }
    }

    // Mostra a matriz final
    for(i=0; i<NLIN; i++) {
        for(j=0; j<NCOL; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    return 0;
}