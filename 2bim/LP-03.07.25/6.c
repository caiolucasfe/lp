#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define COL 5
#define LIN 5

int main(){

    int i, j, ale[LIN][COL], ord[LIN][COL], menor = 51, k, l, m, n;
    
    printf("Matriz aleatória:\n");

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            ale[i][j] = 10 + rand()%41;
            printf("%i ", ale[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz Ordenada:\n");

    

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            for(k = 0; k < LIN; k++){
                for(l = 0; l < COL; l++){
                    if(ale[k][l] < menor){
                        menor = ale[k][l];
                        ord[i][j] = menor;
                        m = k;
                        n = l;
                        
                    }
                }
            }
            ale[m][n] = 51;
            menor = 51;
            printf("%i ", ord[i][j]);
        }

        printf("\n");
    }
    return 0;
}