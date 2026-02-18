#include <stdio.h>

int main(){

    int altura, largura, linha, coluna;

        printf("Digite a Altura e a Largura: ");
        scanf("%i %i", &altura, &largura);

            for(coluna = 1; coluna <= altura; coluna++){

                for(linha = 1; linha <= largura; linha++){

                    printf("@ ");
                }

                printf("\n");
            }




    return 0;
}