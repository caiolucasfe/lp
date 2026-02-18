#include <stdio.h>

int main(){

        int val1, val2, soma, aux;

            printf("Digite dois valores: ");
            scanf("%i %i", &val1, &val2);
                

            printf("%i = %i \n", val1, val1);

                for(aux = val1 + 1; aux <= val2; aux++){
                    
                    soma = val1 + aux;

                        printf("%i + %i = %i \n", val1, aux, soma);

                    val1 = soma;
                    
                }

    return 0;
}