#include <stdio.h>

int main(){

        int cont, val;

            printf("Digite um valor");
            scanf("%i", &val);

            printf("FOR:");
                
                for(cont = val; cont <= 100; cont++){
                    printf("%i ", cont);
                }

    return 0;
}