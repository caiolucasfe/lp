#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fp;
    char sobrenome[50], linha[50];
    int aux = 1, j, i, k, l, cont = 0;

    fp = fopen("alunos.txt", "a+");

    if(fp == NULL){
        printf("Não foi Possível abrir o ARQUIVO");
        return 0;
    }

    printf("Sobrenome: ");
    scanf("%[^\n]", sobrenome);

    k  = strlen(sobrenome);
    j = 0;

    do
    {
        for(i = 1; linha[i] != '\0'; i++){

            if(j == k){
                j = 0;
            }

            if(linha[i] != sobrenome[j]){
                aux = 0;
            }
            else{
                aux = 1;
            }
            if(aux == 1){
                if(l = i + 1 != ' '){
                    aux = 0;
                }
                else{
                    continue;
                }
            }
            j++;
        }

        if(aux == 1){
            printf("%s", linha);
        }
        
    } while (fgets(linha, 50, fp) != NULL);
    

    fclose(fp);

    return 0;
}