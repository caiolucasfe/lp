#include <stdio.h>

int main() {

    int lin, col;

    for(lin=0; lin<10; lin++) {

        for(col=0; col<(lin+1); col++) {

            printf("* ");
        }
        
        printf("\n");
    }
    
    
    printf("\n");
    return 0;
}