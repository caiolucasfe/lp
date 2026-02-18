#include <stdio.h>

int main(){

        int valor, num;

            printf("Digite um valor: ");
            scanf("%i", &valor);
                
                for(num = 2; num < valor; num++){

                    if(valor % num == 0){
                        printf("Não é Primo");
                        return 0;
                    }

            
                }

            printf("Primo");

    return 0;
}