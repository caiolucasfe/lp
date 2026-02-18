#include <stdio.h>

    int main(){

        int n1, n2, soma = 0;

            printf("Digite dois números: ");
            scanf("%i %i", &n1, &n2);

                while(n1 <= n2){

                    if(n1 % 2 == 0){
                        printf("%i", n1);
                        soma = soma + n1;
                    }
                    
                    n1++;
                }

            printf("= %i", soma);

        return 0;
    }