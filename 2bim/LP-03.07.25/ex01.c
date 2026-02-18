#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NLIN 5
#define NCOL 5

int main() {

    int i, j, mat[NLIN][NCOL];

    for(i=0; i<NLIN; i++) {
        for(j=0; j<NCOL; j++) {
            mat[i][j] = 0;
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}