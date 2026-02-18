#include <stdio.h>

int main(){

        int altura, linhas, colunas, meio, narr = 1, nesp, cont;

            printf("Digite uma altura ímpar: ");
            scanf("%i", &altura);

    

            nesp = altura / 2;

            for(linhas = 0; linhas < altura; linhas++){
                //Espaçoes
                for(cont = 0; cont < nesp; cont++){
                    printf("  ");
                }

                //Arrobas

                for(colunas = 0; colunas < narr; colunas++){

                    printf("@ ");
                }

                    if(altura / 2 > linhas){
                        narr += 2;
                        nesp--;
                    }

                    else{
                        narr -= 2;
                        nesp++;
                    }
                
                printf("\n");
            }

    return 0;
}