#include <stdio.h>

    int main(){

        int a1, a2, a3;

            printf("Digite os 3 ângulos: ");
            scanf("%i %i %i", &a1, &a2, &a3);

                if(a1 == 90 && a2 !=90 && a3 != 90 || a2 == 90 && a1 !=90 && a3 != 90 || a3 == 90 && a2 !=90 && a1 != 90){
                    printf("Retângulo");
                }

                else if(a1 < 90 && a2 < 90 && a3 < 90){
                    printf("Acutângulo");
                }

                else{
                    printf("Obtusângulo");
                }


        return 0;
    }