#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    int lin, l;
    char linha[50];

    fp = fopen("arquivo.txt", "a+");

    if(fp == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    printf("Qual linha você quer ver? ");
    scanf(" %i", &l);

    lin = 1;

    while(fgets(linha, 50, fp) != NULL){
        if(l == lin){
            printf("LInha %i: %s", l, linha);
        }
        lin++;
    }

    fclose(fp);

    return 0;
}