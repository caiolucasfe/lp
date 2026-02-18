#include <stdio.h>

int main (){

    int val, media, quant = 0 ;

        printf("Digite um valor: \n");
        scanf("%i", &val);

            for(;val >= 0; quant++){

                media+= val;
                
                printf("");
                scanf("%i", &val);
            }

                media = media / quant;
                printf("- Média = %i", media);




    return 0;
}