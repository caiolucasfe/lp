#include "bibliotecas.h"
#include "data.h"

#ifndef VERIFICACOES
#define VERIFICACOES

int verificar_email(char x[50]);

int verificar_data(int dia, int mes, int ano);

void verificar_EscolhaSemana(char dia_semana[50], int semana_op, char resposta[4]);

int verificar_email(char x[50]){

    if(strstr(x, "@") == NULL){

        return 0;

    }

    int cont = 0;

    for(int i = 0; x[i] != '\0'; i++){

        if(x[i] == '@'){

            cont++;

        }
        if(cont == 2){

            return 0;

        }

    }
    
    if(x[0] == '@'){

        return 0;

    }
    
    int i = strlen(x);

    if(x[i -1] == '@'){

        return 0;

    }

    return 1;
}

int verificar_data(int dia, int mes, int ano) {
    
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 1900) {

        return 0;

    }

    int ano_atual = dataHoje(3);

    if (ano > ano_atual) {

        return 0;

    }

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {

        return 0;

    }

    if (mes == 2) {
        
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            if (dia > 29) {

                return 0;

            }
        } 
        
        else {

            if (dia > 28) {

                return 0;
                
            }
        }
    }

    return 1;
}

void verificar_EscolhaSemana(char dia_semana[50], int semana_op, char resposta[4]){

    FILE *cursor;
    cursor = fopen("semana.txt", "a+");

    char linha[100];

    resposta[0] = '\0';

    if(semana_op == 1){

        while(fgets(linha, 100, cursor) != NULL){

            if(strstr(linha, dia_semana) != NULL){

                if(strstr(fgets(linha, 100, cursor), "LIVRE") != NULL){

                    strcat(resposta, "M");

                }
                if(strstr(fgets(linha, 100, cursor), "LIVRE") != NULL){

                    strcat(resposta, "T");

                }
                if(strstr(fgets(linha, 100, cursor), "LIVRE") != NULL){

                    strcat(resposta, "N");

                }

            }

        }

    }

    if(semana_op == 2 || semana_op == 3){

        while(fgets(linha, 100, cursor) != NULL){

            if(strstr(linha, dia_semana) != NULL){

                if(strstr(fgets(linha, 100, cursor), "LIVRE") == NULL){

                    strcat(resposta, "M");

                }
                if(strstr(fgets(linha, 100, cursor), "LIVRE") == NULL){

                    strcat(resposta, "T");

                }
                if(strstr(fgets(linha, 100, cursor), "LIVRE") == NULL){

                    strcat(resposta, "N");

                }

            }

        }

    }   

}

#endif