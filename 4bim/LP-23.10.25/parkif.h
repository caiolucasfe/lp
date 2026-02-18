#ifndef PARKIF
#define PARKIF

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct{

    char placa[10];
    char marca[30];
    char modelo[30];
    char cambio; //A - Automático / M - Manual
    float motor;

}veiculo;

veiculo patio[200];

int total = 0;

void menu(){
    printf("-----------------------------");
    printf("\n------------PARKIF-----------");
    printf("\n-----------------------------");
    printf("\n1 - Entrada de Veículo");
    printf("\n2 - Visualizar Veículos");
    printf("\n3 - Buscar Veículo / Marca");
    printf("\n4 - Buscar Veículo / Modelo");
    printf("\n5 - Saída de Veículo");
    printf("\n6 - Saída de Veículo / Câmbio");
    printf("\n0 - Sair");
    printf("\n-----------------------------");
    printf("\n> ");
}

int entrada(veiculo v){
    if(total < 200){
        patio[total] = v;
        total++;
        return 1;
    }
    return 0;
}

void visualizar(){
    int i;
    for(i = 0; i < total; i++){
        printf("\n-----------------------------\n");
        printf("%s\n%s\n%s\n%.1f\n%c", patio[i].placa, patio[i].marca, patio[i].modelo, patio[i].motor, patio[i].cambio);
    }
    printf("\n-----------------------------");
}

void por_marca(char marca[100]){
    int i;

    for(i = 0; i < total; i++){

        if(strcmp(patio[i].marca, marca) == 0){
            printf("\n-----------------------------\n");
            printf("%s\n%s\n%s\n%.1f\n%c", patio[i].placa, patio[i].marca, patio[i].modelo, patio[i].motor, patio[i].cambio);
        }
        if(strcmp(patio[i].marca, marca) == 0){
            printf("\n-----------------------------");
        }
    }
}

void por_modelo(char modelo[100]){
    int i;

    for(i = 0; i < total; i++){

        if(strcmp(patio[i].modelo, modelo) == 0){
            printf("\n-----------------------------\n");
            printf("%s\n%s\n%s\n%.1f\n%c", patio[i].placa, patio[i].marca, patio[i].modelo, patio[i].motor, patio[i].cambio);
        }
        if(strcmp(patio[i].modelo, modelo) == 0){
            printf("\n-----------------------------");
        }
    }
}


#endif