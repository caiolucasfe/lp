#include "bibliotecas.h"

#ifndef DATA_H
#define DATA_H

typedef struct{

    int dia;
    int mes;
    int ano;

} Data;

int dataHoje(int op);

int dataHoje(int op) {

    int dia, mes, ano;
    // Estrutura que permite converter para tempo local
    struct tm *data_hora_local;
    // Variável que armazena o tempo
    time_t segundos;
    // Obtém o tempo atual e armazena na variável segundos
    time(&segundos);
    // Converte o tempo de segundos para a estrutura de tempo local
    data_hora_local = localtime(&segundos);
    // Acessa os campos da struct tm para obter o dia, mês e ano
    dia = data_hora_local->tm_mday;
    // Adiciona 1 pois o mês é de 0-11
    mes = data_hora_local->tm_mon + 1;
    // Adiciona 1900 pois o ano é a partir de 1900
    ano = data_hora_local->tm_year + 1900;

    switch(op){

        case 1:
            return dia;
        case 2:
            return mes;
        case 3:
            return ano;
        break;
    }

}

#endif