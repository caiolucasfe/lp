#include "bibliotecas.h"

void animacao_processando(char mensagem[]);

void animacao_processando(char mensagem[]){

    system("clear");
    printf("%s \\", mensagem);
    fflush(stdout);
    sleep(1);
    system("clear");

    printf("%s |", mensagem);
    fflush(stdout);
    sleep(1);
    system("clear");

    printf("%s /", mensagem);
    fflush(stdout);
    sleep(1);
    system("clear");

    printf("%s \\", mensagem);
    fflush(stdout);
    sleep(1);
    system("clear");

}