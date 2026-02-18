#include <stdio.h>

int main(){

        int valor, fat = 1, cont;

            printf("Digite um valor: ");
            scanf("%i", &valor);
                
                for(cont = valor; cont < 1; cont--){


                    fat = fat * cont;
                    
                        if(cont = 1){
                            printf("%i =", cont);
                        }
                        else if(cont != 1){
                            printf("%i x", cont);
                        }

                        fat = fat * cont;
                        
                }

    return 0;
}