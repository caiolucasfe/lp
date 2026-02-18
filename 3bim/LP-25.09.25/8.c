#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char escolha, linha[50], quantidade;

    fp = fopen("alunos.txt", "a+");

    if(fp == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    printf("Letra: ");
    scanf(" %c", &escolha);

    quantidade = 0;

    do
    {
        if(linha[0] == escolha){
            quantidade++;
        }
    } while (fgets(linha, 50, fp) != NULL);
    
    printf("Total: %i", quantidade);

    fclose(fp);

    return 0;
}