#include <stdio.h>

int main(){

        int num, cont, ant = 1, atu = 1, prox;

            printf("Número de Termos: ");
            scanf("%i", &num);
                

            printf("Fibonacci (%i) = 1 1 ", num);

                for(cont = 2; cont <num; cont++){

                    prox = ant + atu;

                        printf("%i ", prox);

                    ant = atu;
                    atu = prox;
                }

    return 0;
}