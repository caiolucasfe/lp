include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char nome[50];

    fp = fopen("arquivo.txt", "a+");

    if(fp == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    printf("Nome: ");
    scanf("%[^\n]", nome);

    /*
    for(int i = 0; nome[i] != '\0'; i++){
        fputc(nome[i], fp);
    }
    */

    fputs(nome, fp);

    fputc('\n', fp);

    fclose(fp);

    return 0;
}