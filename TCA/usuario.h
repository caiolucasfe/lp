#include "bibliotecas.h"
#include "data.h"
#include "animacoes.h"

#ifndef USUARIO
#define USUARIO

typedef struct{
    
    char nome[50];
    char telefone[50];
    Data Data_nascimento;
    char email[50];
    char senha[50];

} Usuario;

int verificar_cadastro();

int verificar_login(char email[50], char senha[50]);

int verificar_cadastro(){

    FILE *cursor;
    cursor = fopen("usuario.bin", "rb");

    animacao_processando("Consultando Usuário");

    if(cursor == NULL){

        printf("Nenhum Usuario Encontrado");
        fflush(stdout);
        sleep(1);
        
        animacao_processando("Iniciando Protocolo de Cadastro");

        return 0;

    }

    else{

        Usuario Cadastrado;

        fread(&Cadastrado, sizeof(Usuario), 1, cursor);

        printf("Seja Bem-Vindo a Sua Agenda Pessoal ");

        for(int i = 0; Cadastrado.nome[i] != '\0'; i++){

            if(Cadastrado.nome[i] != ' ' ){

                printf("%c", Cadastrado.nome[i]);
            }
            
            else{
                break;
            }

        }
        fflush(stdout);
        sleep(2);
        system("clear");

        fclose(cursor);

        return 1;

    }
    
}

int verificar_login(char email[50], char senha[50]){

    Usuario Cadastrado;

    FILE *cursor;
    cursor = fopen("usuario.bin", "rb");
    fread(&Cadastrado, sizeof(Usuario), 1, cursor);

    if(strcmp(email, Cadastrado.email) != 0){

        return 0;

    }

    if(strcmp(senha, Cadastrado.senha) != 0){

        return 0;

    }

    fclose(cursor);

    return 1;

}

#endif