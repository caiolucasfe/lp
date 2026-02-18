#include <stdio.h>

int main(){

    char linha[100];

    FILE *cursor;

    cursor = fopen("paises.txt", "a+");

    if(cursor == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    while(fgets(linha, 100, cursor) != NULL){

        printf("%s", linha);
    }

    fclose(cursor);

    return 0;
}