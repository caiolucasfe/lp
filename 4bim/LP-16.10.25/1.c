#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

    int quant;
    float valor;
    char nome[100];

    FILE *cursor = fopen("1.txt", "a+");

    if(cursor == NULL){
        printf("ERRO");
        return 0;
    }

    

    //scanf(" %s %f %i", nome, &valor, &quant);
    //fprintf(cursor, "%s %2.f %i\n", nome, valor, quant);
    fscanf(cursor, "%s %f %i\n", nome, &valor, &quant);
    printf("%s %f %i", nome, valor, quant);

    fclose(cursor);
    printf("\n");
    return 0;
}