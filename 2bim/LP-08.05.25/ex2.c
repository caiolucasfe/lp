#include <stdio.h>

int main(){

        int ini, fim;

            printf("Digite dois valores: ");
            scanf("%i %i", &ini, &fim);
                
                for(;ini <= fim; ini++){
                    
                    if(ini % 2 == 1){
                        printf("%i ", ini);
                    }
                }

    return 0;
}