#include "bibliotecas.h"

#ifndef CONTATOS
#define CONTATOS

void cadastrar_contatos(char nome[50], char telefone[50], int dia, int mes, int ano);

int relatorio_contatos();

void cadastrar_contatos(char nome[50], char telefone[50], int dia, int mes, int ano){

    FILE *cursor;
    cursor = fopen("contatos.txt", "r");

    int id = 1;

    char linha[100];

    if(cursor == NULL){

        cursor = fopen("contatos.txt", "a+");

        fprintf(cursor, "-------------\n");
        fprintf(cursor, "- RELATÓRIO DE CONTATOS\n");
        fprintf(cursor, "-------------\n");
        fprintf(cursor, "ID - NOME - TELEFONE - DATA DE NASCIMENTO\n");
        fprintf(cursor, "-------------\n");

    }
    else{

        fclose(cursor);

        cursor = fopen("contatos.txt", "a+");

    }

    while(fgets(linha, 100, cursor) != NULL){

        if(strstr(linha, "|") != NULL){

            id++;
        }

    }

    if(dia < 10 && mes < 10){

        fprintf(cursor, "%i | %s | %s | 0%i/0%i/%i\n", id, nome, telefone, dia, mes, ano);

    }
    else if(dia < 10){

        fprintf(cursor, "%i | %s | %s | 0%i/%i/%i\n", id, nome, telefone, dia, mes, ano);

    }
    else if(mes < 10){

        fprintf(cursor, "%i | %s | %s | %i/0%i/%i\n", id, nome, telefone, dia, mes, ano);
    }
    else{

        fprintf(cursor, "%i | %s | %s | %i/%i/%i\n", id, nome, telefone, dia, mes, ano);

    }

    fprintf(cursor, "-------------\n");

    fclose(cursor);

}

int relatorio_contatos(){


    char comando[100] = "gedit contatos.txt";
    FILE *fp = fopen("contatos.txt", "r");

    if(fp == NULL) {
    
        printf("Nenhuma Contato Encontrado!");
        system("clear");
        printf("Adicione um primeiro!");
        getchar();
        getchar();

        return 0;

    }

    fclose(fp);

    animacao_processando("Gerando Relatório");
    
    system(comando);

    printf("Relatório Gerado!");
    
    return 1;

}

#endif