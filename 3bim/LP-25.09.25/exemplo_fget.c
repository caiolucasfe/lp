#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char c;
    char linha[50];

    fp = fopen("arquivo.txt", "a+");

    if(fp == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    /*
    do
    {
        c = fgetc(fp);
        if(c != EOF){
            printf("%c", c);
        }

    } while (c != EOF);
    */

    do
    {
        printf("%s", linha);
        
    } while (fgets(linha, 50, fp) != NULL);
    

    fclose(fp);

    return 0;
}