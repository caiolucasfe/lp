#include <stdio.h>

    int main(){

        int num = 0, maior = 0;

            printf("Valores: \n");

                while(num != -1){
                    scanf("%i", &num);

                        if(maior < num){
                            maior = num;
                        }
                }

            printf("Maior = %i", maior);

        return 0;
    }