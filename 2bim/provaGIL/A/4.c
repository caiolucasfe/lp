#include <stdio.h>
#include <time.h>

#define TAM 6

int main(){

    int a[TAM], b[TAM],  i, j, k, flag;

    srand(time(NULL));

    printf("1º Vetor: ");

    for(i = 0; i < TAM; i++){

        a[i] = 10 + rand()%11;
        printf("%i ", a[i]);

    }

    printf("\n2º Vetor: ");

    for(i = 0; i < TAM; i++){

        b[i] = 10 + rand()%11;
        printf("%i ", b[i]);

    }

    printf("\n");

    for(i = 0; i < TAM; i++){


        for(j = 0; j < TAM; j++){

            if(b[j] == a[i]){

                flag = b[j];

                b[j] = -1;
                a[i] = -1;

                for(k = 0; k < TAM; k++){
                    if(a[k] == flag){
                        a[k] = -1;
                    }
                    if(b[k] == flag){
                        b[k] = -1;
                    }
                }
            
            }
            
        }
    }

    printf("\nNão se Repetem: ");

    for(i = 0; i < TAM; i++){

        if(a[i] != -1){
            printf("%i ", a[i]);
            flag = a[i];
            for(j = 0; j < TAM; j++){
                if(a[j] == flag){
                    a[j] = -1;
                }
            }
        }
        
    }
    for(i = 0; i < TAM; i++){
        
        if(b[i] != -1){
            printf("%i ", b[i]);
            flag = b[i];
            for(j = 0; j < TAM; j++){
                if(b[j] == flag){
                    b[j] = -1;
                }
            }
        }
    }

    
    
    return 0;
}