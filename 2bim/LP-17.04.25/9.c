#include <stdio.h>

int main() {

    int num, i = 1, fatorial = 1;

        printf("Digite um número: ");
        scanf("%i", &num);

            if (num > 0){

                printf("Fatorial(%i) = ", num);

                    while(i <= num) {

                        fatorial *= i;

                            if (i == 1) {

                                printf("%i", i);
                            } 
                            
                            else {

                                printf("x%i", i);
                            }
                    i++;
                    }

                printf(" = %i\n", fatorial);

            }

            else{
                printf("Fatorial não é definido para números negativos.\n");
            }

    return 0;
}