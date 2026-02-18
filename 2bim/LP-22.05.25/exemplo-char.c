#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    int i; 
    char vet[TAM];

    srand(time(NULL));

    //  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
    //  |  |  |  |  |  |  |  |  |  |  |

    
    // Preenche
    for(i = 0; i < TAM; i++){

        vet[i] = 65 + (rand()%26);
    }

    // Exibe
    for(i = 0; i < TAM; i++){

        printf("%c ", vet[i]);
    }


    printf("\n");
    return 0;
}