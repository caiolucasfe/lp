#include <stdio.h>

    int main(){

        int valor, soma = 1, aux;

            printf("Digite um valor: ");
            scanf("%i", &valor);
                
            printf("[1");

                for(aux = 2; aux < valor; aux++){

                    if(valor % aux == 0){

                        printf(" + %i", aux);

                            soma += aux;

                    }
                }

                if(valor == soma){

                    printf("] = %i Perfeito", valor);

                }

                else{

                    printf("] != %i Imperfeito", valor);

                }

    return 0;
}