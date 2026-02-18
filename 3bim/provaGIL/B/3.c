#include <stdio.h>
#include <string.h>

int main(){

    char produto[100], tipo[100], linha[100];
    int i;

    FILE *cursor;

    cursor = fopen("produto.txt", "a+");

    if(cursor == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    printf("Qual o Tipo do Produto? ");
    scanf(" %[^\n]", tipo);

    while(fgets(linha, 100, cursor) != NULL){

        if(strstr(linha, tipo) != NULL){
            
            for(i = 0; linha[i] != '\0'; i++){

                if(linha[i] == ' '){

                    i++;
                    
                    for(; linha[i] != '\0'; i++){
                        printf("%c", linha[i]);
                    }
                }
            }

        }
    }

    fclose(cursor);

    return 0;
}