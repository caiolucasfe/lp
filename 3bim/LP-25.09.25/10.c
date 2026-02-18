
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char nome[50], linha[50];
    int aux = 1, j, i;

    fp = fopen("alunos.txt", "a+");

    if(fp == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    printf("Nome: ");
    scanf("%[^\n]", nome);

    do
    {
        for(i = 0; nome[i] != '\0'; i++){
            if(linha[i] != nome[i]){
                aux = 0;
                break;
            }
            else{
                aux = 1;
            }
            if(linha[j = i + 1] != ' '){
                aux = 0;
            }
        }

        if(aux == 1){
            printf("%s", linha);
        }
        
    } while (fgets(linha, 50, fp) != NULL);
    

    fclose(fp);

    return 0;
}