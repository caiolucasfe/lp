#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 6

void ordenar(int matriz[TAM][TAM], int linha, int coluna);

int verificar(int matriz[TAM][TAM], int linha, int coluna);

int main()
{

    int matriz[TAM][TAM], linha, coluna, i, j;

    srand(time(NULL));

    printf("Matriz Aleatória:\n");

    for (i = 0; i < TAM; i++)
    {

        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = 10 + rand() % 89;
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Linha e Coluna: ");
    scanf("%i %i", &linha, &coluna);
    ordenar(matriz, linha, coluna);
    for (i = 0; i < TAM; i++)
    {

        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = 10 + rand() % 89;
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    if(verificar(matriz, linha, coluna) == 0){
        printf("Não foi necessassaría a adaptação!");
    }

    return 0;
}

void ordenar(int matriz[TAM][TAM], int linha, int coluna)
{
    int i, j, k, l, ordenada[TAM][TAM], menor = 100, aux = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            ordenada[i][j] = matriz[i][j];
        }
    }


    // linha
    for(aux = 0; aux < TAM; aux++){
        for(j = 0; j < TAM; j++){
            if(matriz[linha][j] < menor){
                menor = matriz[linha][j];
                k = linha;
                l = j;
            }
        }
        matriz[k][l] = 101;
        ordenada[linha][aux] = menor;
        menor = 100;
    }

    //coluna 
    for(aux = 0; aux < TAM; aux++){
        for(i = 0; i < TAM; i++){
            if(matriz[i][coluna] < menor){
                menor = matriz[i][coluna];
                k = i;
                l = coluna;
            }
        }
        matriz[k][l] = 101;
        ordenada[aux][coluna] = menor;
        menor = 100;
    }

    //transportar
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            matriz[i][j] = ordenada[i][j];
        }
    }

}

int verificar(int matriz[TAM][TAM], int linha, int coluna){

    int meio, i, j;

    meio = matriz[linha][coluna];

    if(linha == 0 || coluna == 0){
        if(matriz[linha +1][coluna +1] > meio){
            return 0;
        }
    }
    else{
        if(matriz[linha -1][coluna -1] < meio){
            return 0;
        }
    }


}