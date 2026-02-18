#include "bibliotecas.h"

#ifndef SEMANA
#define SEMANA

typedef struct{

    char manha[50];
    char tarde[50];
    char noite[50];

} Dia;

typedef struct{

    Dia Domingo;
    Dia Segunda;
    Dia Terca;
    Dia Quarta;
    Dia Quinta;
    Dia Sexta;
    Dia Sabado;

} Semana;

void agenda_semanal();

void inserir_atividade(char atividade[50], char dia_semana[50] ,char periodo[50]);

void remover_atividade(char dia_semana[50] , char periodo[50]);

void alterar_atividade(char atividade[50], char dia_semana[50] , char periodo[50]);

int relatorio_semanal();

void agenda_semanal(){

    FILE *cursor;
    cursor = fopen("semana.txt", "r");

    if(cursor == NULL){

        cursor = fopen("semana.txt", "a+");

        Semana Novo;
        
        strcpy(Novo.Domingo.manha, "LIVRE"); strcpy(Novo.Domingo.tarde, "LIVRE"); strcpy(Novo.Domingo.noite, "LIVRE");
        strcpy(Novo.Segunda.manha, "LIVRE"); strcpy(Novo.Segunda.tarde, "LIVRE"); strcpy(Novo.Segunda.noite, "LIVRE");
        strcpy(Novo.Terca.manha, "LIVRE"); strcpy(Novo.Terca.tarde, "LIVRE"); strcpy(Novo.Terca.noite, "LIVRE");
        strcpy(Novo.Quarta.manha, "LIVRE"); strcpy(Novo.Quarta.tarde, "LIVRE"); strcpy(Novo.Quarta.noite, "LIVRE");
        strcpy(Novo.Quinta.manha, "LIVRE"); strcpy(Novo.Quinta.tarde, "LIVRE"); strcpy(Novo.Quinta.noite, "LIVRE");
        strcpy(Novo.Sexta.manha, "LIVRE"); strcpy(Novo.Sexta.tarde, "LIVRE"); strcpy(Novo.Sexta.noite, "LIVRE");
        strcpy(Novo.Sabado.manha, "LIVRE"); strcpy(Novo.Sabado.tarde, "LIVRE"); strcpy(Novo.Sabado.noite, "LIVRE");

        
        fprintf(cursor, "-------------\n");
        fprintf(cursor, "- RELATÓRIO SEMANAL\n");
        fprintf(cursor, "-------------\n");

        fprintf(cursor, "- DOMINGO\n");
        fprintf(cursor, "Manhã: %s\n", Novo.Domingo.manha);
        fprintf(cursor, "Tarde: %s\n", Novo.Domingo.tarde);
        fprintf(cursor, "Noite: %s\n", Novo.Domingo.noite);

        fprintf(cursor, "-------------\n");

        fprintf(cursor, "- SEGUNDA-FEIRA\n");
        fprintf(cursor, "Manhã: %s\n", Novo.Segunda.manha);
        fprintf(cursor, "Tarde: %s\n", Novo.Segunda.tarde);
        fprintf(cursor, "Noite: %s\n", Novo.Segunda.noite);

        fprintf(cursor, "-------------\n");

        fprintf(cursor, "- TERÇA-FEIRA\n");
        fprintf(cursor, "Manhã: %s\n", Novo.Terca.manha);
        fprintf(cursor, "Tarde: %s\n", Novo.Terca.tarde);
        fprintf(cursor, "Noite: %s\n", Novo.Terca.noite);

        fprintf(cursor, "-------------\n");

        fprintf(cursor, "- QUARTA-FEIRA\n");
        fprintf(cursor, "Manhã: %s\n", Novo.Quarta.manha);
        fprintf(cursor, "Tarde: %s\n", Novo.Quarta.tarde);
        fprintf(cursor, "Noite: %s\n", Novo.Quarta.noite);

        fprintf(cursor, "-------------\n");

        fprintf(cursor, "- QUINTA-FEIRA\n");
        fprintf(cursor, "Manhã: %s\n", Novo.Quinta.manha);
        fprintf(cursor, "Tarde: %s\n", Novo.Quinta.tarde);
        fprintf(cursor, "Noite: %s\n", Novo.Quinta.noite);

        fprintf(cursor, "-------------\n");

        fprintf(cursor, "- SEXTA-FEIRA\n");
        fprintf(cursor, "Manhã: %s\n", Novo.Sexta.manha);
        fprintf(cursor, "Tarde: %s\n", Novo.Sexta.tarde);
        fprintf(cursor, "Noite: %s\n", Novo.Sexta.noite);

        fprintf(cursor, "-------------\n");

        fprintf(cursor, "- SÁBADO\n");
        fprintf(cursor, "Manhã: %s\n", Novo.Sabado.manha);
        fprintf(cursor, "Tarde: %s\n", Novo.Sabado.tarde);
        fprintf(cursor, "Noite: %s\n", Novo.Sabado.noite);

        fprintf(cursor, "-------------\n");

        printf("Nenhuma Agenda Semanal Encontrada!");
        fflush(stdout);
        sleep(1);

        animacao_processando("Criando Agenda Semanal");
        
        printf("Agenda Semanal Criada!");
        fflush(stdout);
        sleep(1);
        system("clear");

        printf("Sua Agenda Semanal foi iniciada tendo todos os dias com seus respectivos períodos marcados como LIVREs");
        fflush(stdout);
        sleep(4);
        system("clear");

        fclose(cursor);

    }

    printf("[ Gerenciar Agenda Semanal ]\n");

    cursor = fopen("semana.txt", "a+");
    printf("1 - Inserir\n");
    printf("2 - Remover\n");
    printf("3 - Alterar\n");
    printf("0 - Sair\n");
    printf("> ");

    fclose(cursor);

}

void inserir_atividade(char atividade[50], char dia_semana[50] , char periodo[50]){

    FILE *cursor;
    cursor = fopen("semana.txt", "a+");

    Semana Sincronizar;

    fscanf(cursor, "-------------\n");
    fscanf(cursor, "- RELATÓRIO SEMANAL\n");
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- DOMINGO\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Domingo.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Domingo.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Domingo.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SEGUNDA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Segunda.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Segunda.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Segunda.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- TERÇA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Terca.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Terca.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Terca.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- QUARTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Quarta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Quarta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Quarta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- QUINTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Quinta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Quinta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Quinta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SEXTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Sexta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Sexta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Sexta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SÁBADO\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Sabado.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Sabado.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Sabado.noite);
    fscanf(cursor, "-------------\n");

    fclose(cursor);

    if(strcmp(dia_semana, "DOMINGO") == 0) {
        
        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Domingo.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Domingo.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Domingo.noite, atividade);
        }
    }

    else if(strcmp(dia_semana, "SEGUNDA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Segunda.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Segunda.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Segunda.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "TERÇA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Terca.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Terca.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Terca.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "QUARTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Quarta.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Quarta.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Quarta.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "QUINTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Quinta.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Quinta.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Quinta.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "SEXTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Sexta.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Sexta.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Sexta.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "SÁBADO") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Sabado.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Sabado.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Sabado.noite, atividade);
        }
    }

    cursor = fopen("semana.txt", "w");

    fprintf(cursor, "-------------\n");
    fprintf(cursor, "- RELATÓRIO SEMANAL\n");
    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- DOMINGO\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Domingo.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Domingo.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Domingo.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SEGUNDA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Segunda.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Segunda.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Segunda.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- TERÇA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Terca.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Terca.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Terca.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- QUARTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Quarta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Quarta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Quarta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- QUINTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Quinta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Quinta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Quinta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SEXTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Sexta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Sexta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Sexta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SÁBADO\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Sabado.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Sabado.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Sabado.noite);

    fprintf(cursor, "-------------\n");
    
    fclose(cursor);
}

void remover_atividade(char dia_semana[50] , char periodo[50]){

    FILE *cursor;
    cursor = fopen("semana.txt", "a+");

    Semana Sincronizar;

    fscanf(cursor, "-------------\n");
    fscanf(cursor, "- RELATÓRIO SEMANAL\n");
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- DOMINGO\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Domingo.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Domingo.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Domingo.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SEGUNDA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Segunda.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Segunda.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Segunda.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- TERÇA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Terca.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Terca.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Terca.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- QUARTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Quarta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Quarta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Quarta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- QUINTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Quinta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Quinta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Quinta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SEXTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Sexta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Sexta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Sexta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SÁBADO\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Sabado.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Sabado.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Sabado.noite);
    fscanf(cursor, "-------------\n");

    fclose(cursor);

    if(strcmp(dia_semana, "DOMINGO") == 0) {
        
        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Domingo.manha, "LIVRE");
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Domingo.tarde, "LIVRE");
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Domingo.noite, "LIVRE");
        }
    }

    else if(strcmp(dia_semana, "SEGUNDA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Segunda.manha, "LIVRE");
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Segunda.tarde, "LIVRE");
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Segunda.noite, "LIVRE");
        }
    }

    else if(strcmp(dia_semana, "TERÇA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Terca.manha, "LIVRE");
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Terca.tarde, "LIVRE");
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Terca.noite, "LIVRE");
        }
    }

    else if(strcmp(dia_semana, "QUARTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Quarta.manha, "LIVRE");
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Quarta.tarde, "LIVRE");
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Quarta.noite, "LIVRE");
        }
    }

    else if(strcmp(dia_semana, "QUINTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Quinta.manha, "LIVRE");
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Quinta.tarde, "LIVRE");
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Quinta.noite, "LIVRE");
        }
    }

    else if(strcmp(dia_semana, "SEXTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Sexta.manha, "LIVRE");
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Sexta.tarde, "LIVRE");
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Sexta.noite, "LIVRE");
        }
    }

    else if(strcmp(dia_semana, "SÁBADO") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Sabado.manha, "LIVRE");
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Sabado.tarde, "LIVRE");
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Sabado.noite, "LIVRE");
        }
    }

    cursor = fopen("semana.txt", "w");

    fprintf(cursor, "-------------\n");
    fprintf(cursor, "- RELATÓRIO SEMANAL\n");
    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- DOMINGO\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Domingo.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Domingo.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Domingo.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SEGUNDA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Segunda.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Segunda.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Segunda.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- TERÇA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Terca.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Terca.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Terca.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- QUARTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Quarta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Quarta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Quarta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- QUINTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Quinta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Quinta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Quinta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SEXTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Sexta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Sexta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Sexta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SÁBADO\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Sabado.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Sabado.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Sabado.noite);

    fprintf(cursor, "-------------\n");

    fclose(cursor);

}

void alterar_atividade(char atividade[50], char dia_semana[50] , char periodo[50]){

    FILE *cursor;
    cursor = fopen("semana.txt", "a+");

    Semana Sincronizar;

    fscanf(cursor, "-------------\n");
    fscanf(cursor, "- RELATÓRIO SEMANAL\n");
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- DOMINGO\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Domingo.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Domingo.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Domingo.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SEGUNDA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Segunda.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Segunda.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Segunda.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- TERÇA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Terca.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Terca.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Terca.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- QUARTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Quarta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Quarta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Quarta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- QUINTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Quinta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Quinta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Quinta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SEXTA-FEIRA\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Sexta.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Sexta.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Sexta.noite);
    fscanf(cursor, "-------------\n");

    fscanf(cursor, "- SÁBADO\n");
    fscanf(cursor, "Manhã: %[^\n]\n", Sincronizar.Sabado.manha);
    fscanf(cursor, "Tarde: %[^\n]\n", Sincronizar.Sabado.tarde);
    fscanf(cursor, "Noite: %[^\n]\n", Sincronizar.Sabado.noite);
    fscanf(cursor, "-------------\n");

    fclose(cursor);

    if(strcmp(dia_semana, "DOMINGO") == 0) {
        
        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Domingo.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Domingo.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Domingo.noite, atividade);
        }
    }

    else if(strcmp(dia_semana, "SEGUNDA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Segunda.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Segunda.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Segunda.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "TERÇA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Terca.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Terca.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Terca.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "QUARTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Quarta.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Quarta.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Quarta.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "QUINTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Quinta.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Quinta.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Quinta.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "SEXTA-FEIRA") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Sexta.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Sexta.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Sexta.noite, atividade);
        }
    }
    
    else if(strcmp(dia_semana, "SÁBADO") == 0) {

        if(strcmp(periodo, "Manhã") == 0) {
            strcpy(Sincronizar.Sabado.manha, atividade);
        }
        else if(strcmp(periodo, "Tarde") == 0) {
            strcpy(Sincronizar.Sabado.tarde, atividade);
        }
        else if(strcmp(periodo, "Noite") == 0) {
            strcpy(Sincronizar.Sabado.noite, atividade);
        }
    }

    cursor = fopen("semana.txt", "w");

    fprintf(cursor, "-------------\n");
    fprintf(cursor, "- RELATÓRIO SEMANAL\n");
    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- DOMINGO\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Domingo.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Domingo.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Domingo.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SEGUNDA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Segunda.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Segunda.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Segunda.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- TERÇA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Terca.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Terca.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Terca.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- QUARTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Quarta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Quarta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Quarta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- QUINTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Quinta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Quinta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Quinta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SEXTA-FEIRA\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Sexta.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Sexta.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Sexta.noite);

    fprintf(cursor, "-------------\n");

    fprintf(cursor, "- SÁBADO\n");
    fprintf(cursor, "Manhã: %s\n", Sincronizar.Sabado.manha);
    fprintf(cursor, "Tarde: %s\n", Sincronizar.Sabado.tarde);
    fprintf(cursor, "Noite: %s\n", Sincronizar.Sabado.noite);

    fprintf(cursor, "-------------\n");
    
    fclose(cursor);
}

int relatorio_semanal(){

    char comando[100] = "gedit semana.txt";
    FILE *fp = fopen("semana.txt", "r");

    if(fp == NULL) {
    
        printf("Nenhuma Agenda Semanal Encontrada!");
        system("clear");
        printf("Gerencie uma Agenda Semanal primeiro!");
        getchar();
        getchar();

        return 0;

    }

    fclose(fp);

    animacao_processando("Gerando Relatório");

    system(comando);

    printf("Relatório Gerado!");
    getchar();
    getchar();
    
    return 1;

}

#endif