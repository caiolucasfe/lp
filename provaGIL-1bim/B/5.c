#include <stdio.h>

int main (){

    int v1, v2, v3, v4, v5, v6, v7, inicio, fim = 100;

        printf("Digite sete valores: ");
        scanf("%i %i %i %i %i %i %i", &v1, &v2, &v3, &v4, &v5, &v6, &v7);

            for(inicio = 0; inicio <= fim ; inicio++){

                if(inicio == v1 || inicio == v2 || inicio == v3 || inicio == v4 || inicio == v5 || inicio == v6 || inicio == v7){

                    printf("%i ", inicio);
                }

            }





    return 0;
}