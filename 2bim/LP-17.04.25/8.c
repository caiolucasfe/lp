#include <stdio.h>

    int main(){

        int n1, n2, maior, a;

            printf("Digite dois números: ");
            scanf("%i %i", &n1, &n2);

                while(n1 <= n2){
                    if ( n1 % 7 == 0){
                        maior = n1;

                    }
                n1++;
                }

            printf("Maior = %i", maior);

        return 0;
    }