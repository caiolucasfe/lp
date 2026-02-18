#include <stdio.h>

int main (){

    int val1, val2;

        printf("Digite dois valores: ");
        scanf("%i %i", &val1, &val2);

            for(; val1 >= val2; val1--){

                printf("%i ", val1);
            }

    return 0;
}