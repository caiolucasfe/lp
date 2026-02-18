#include "bibliotecas.h"

typedef struct{

    int matricula;
    char nome[100];
    char curso[10];
    int ano;
}aluno;

int main(){

    aluno x;

    printf("Matricula: ");
    scanf(" %i", &x.matricula);
    printf("Nome: ");
    scanf(" %[^\n]", x.nome);
    printf("Curso: ");
    scanf(" %[^\n]", x.curso);
    printf("Ano: ");
    scanf(" %i", &x.ano);

    printf("\n%i", x.matricula);
    printf("\n%s", x.nome);
    printf("\n%s", x.curso);
    printf("\n%i", x.ano);

    printf("\n");
    return 0;
}