#include <stdio.h>

int main(){

    int inicial, final, num;

        printf("Digite o Inicial e Final: ");
        scanf("%i %i", &inicial, &final);

        printf("Primos entre %i e %i: ", inicial, final);

                for(num = 2; num < final; num++){

                    for(; inicial < final; inicial++){

                        if(inicial % num == 0){
                
                        }

                    else{
                        printf("%i ", inicial);
                        }

                    }

                }

    return 0;
}