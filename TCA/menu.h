#include "bibliotecas.h"
#include "data.h"

#ifndef MENU
#define MENU

void menu();

void menu(){

    Data Hoje;

    Hoje.dia = dataHoje(1);
    Hoje.mes = dataHoje(2);
    Hoje.ano = dataHoje(3);

    if(Hoje.dia < 10 && Hoje.mes < 10){

        printf("0%i/0%i/%i", Hoje.dia, Hoje.mes, Hoje.ano);
  
    }
    else if(Hoje.dia < 10){

        printf("0%i/%i/%i", Hoje.dia, Hoje.mes, Hoje.ano);

    }
    else if(Hoje.mes < 10){

        printf("%i/0%i/%i", Hoje.dia, Hoje.mes, Hoje.ano);

    }
    else{

        printf("%i/%i/%i", Hoje.dia, Hoje.mes, Hoje.ano);

    }

    printf("\t");

    FILE *cursor;
    cursor = fopen("contatos.txt", "r");

    char linha[100];
    char nome[50];
    char caracter;
    int cont = 0;
    nome[0] = '\0';

    if(cursor != NULL){

        Data Contato;

        int lixo_id;
        char lixo_telefone[50];
        
        fscanf(cursor, "-------------\n");
        fscanf(cursor, "- RELATÓRIO DE CONTATOS\n");
        fscanf(cursor, "-------------\n");
        fscanf(cursor, "ID - NOME - TELEFONE - DATA DE NASCIMENTO\n");
        fscanf(cursor, "-------------\n");
        fscanf(cursor, "%i | %[^\n] | %[^\n] | %i/%i/%i\n", &lixo_id, nome, lixo_telefone, &Contato.dia, &Contato.mes, &Contato.ano);

        fclose(cursor);

        if(Hoje.dia == Contato.dia && Hoje.mes == Contato.mes){

            printf("%s faz aniversário HOJE! lhe de os Parabéns.", nome);

        }
           
    }

    printf("\n");
    printf("a) Adicionar Contatos\n");
    printf("b) Gerenciar Agenda Semanal\n");
    printf("c) Gerar Relatório de Contatos\n");
    printf("d) Gerenciar Relatório da Agenda Semanal\n");
    printf("g) Sair\n");
    printf("> ");

}

#endif