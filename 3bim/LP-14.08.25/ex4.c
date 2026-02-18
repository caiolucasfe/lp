#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam, flag, i;
    char *n1, *n2;

    printf("Tamanho: ");
    scanf("%i", &tam);

    n1 = malloc(tam * sizeof(char));
    n2 = malloc(tam * sizeof(char));

    printf("Digite dois nomes\n");
    __fpurge(stdin);
    scanf("%[^\n]", n1);
    __fpurge(stdin);
    scanf("%[^\n]", n2);

    flag = 1;

    for(i = 0; n1[i] != '\0' && n2[i] != '\0'; i++){
        if(n1[i] != n2[i]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("Igual");
    }
    else{
        printf("Diferente");
    }

    printf("\n");
    return 0;
}