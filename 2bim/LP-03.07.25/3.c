#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NLIN 5
#define NCOL 5
int main(){

    int matriz[NLIN][NCOL], l, c, valor, linha;

    srand(time(NULL));

    printf("Matriz Aleatória:\n");
    
    for(l = 0; l < NLIN; l++){
        for(c = 0; c < NCOL; c++){
            matriz[l][c] = 10+rand()%41;
            printf("%i ", matriz[l][c]);
        }
        printf("\n");
    }

    printf("Escolha a linha: ");
    scanf("%i", &linha);
    printf("Escolha o valor: ");
    scanf("%i", &valor);

    for(l = 0; l < NLIN; l++){
        for(c = 0; c < NCOL; c++){
            if(l == linha){
                printf("%i ", matriz[l][c]);
            }
            else{
                matriz[l][c] = valor;
                printf("%i ", matriz[l][c]);
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}