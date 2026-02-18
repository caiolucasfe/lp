#include <stdio.h>

int main(){

        int ini, fim, soma = 0;

            printf("Digite dois valores: ");
            scanf("%i %i", &ini, &fim);
                
                for(;ini <= fim; ini++){
                    
                    if(ini % 2 == 0){

                        soma += ini;

                        printf("%i ", ini);
                    }
                }

            printf(" = %i ", soma);

    return 0;
}