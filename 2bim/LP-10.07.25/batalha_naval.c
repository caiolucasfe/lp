#include <stdio.h> 
#include <time.h>

#define TAM 10
#define COR_VERMELHO 	printf("\33[31m");
#define COR_LARANJA 	printf("\33[33m");
#define COR_AZUL 		printf("\33[34m");
#define COR_ROXO		printf("\33[35m");
#define COR_BRANCO 		printf("\33[37m");

int main(){

    int cenario[10][10],submarino, navio_tanque, porta_avioes, l, c, player = 0, computer = 0, aux = 0, pontos, flag = 0, cont = -1, fim = 0;
    srand(time(NULL));
    //INFORMAÇÕES
    //➔ 1 - submarino (total de 25 posições da matriz);
    //➔ 3 - navio tanque (total de 15 posições da matriz);
    //➔ 5 - porta aviões (total de 10 posições da matriz);

    for(l = 0; l < TAM; l++){
        for(c = 0; c < TAM; c++){
            cenario[l][c] = 10;
        }
    }
    for(submarino = 0; submarino < 25; submarino++){
        l = rand()%10;
        c = rand()%10;
        if(cenario[l][c] == 10){
            cenario[l][c] = 11;
        }
        else{
            submarino--;
        }
    }

    for(navio_tanque = 0; navio_tanque < 15; navio_tanque++){
        l = rand()%10;
        c = rand()%10;
        if(cenario[l][c] == 10){
            cenario[l][c] = 13;
        }
        else{
            navio_tanque--;
        }
    }

    for(porta_avioes = 0; porta_avioes < 10; porta_avioes++){
        l = rand()%10;
        c = rand()%10;
        if(cenario[l][c] == 10){
            cenario[l][c] = 15;
        }
        else{
            porta_avioes--;
        }
    }


    while(fim == 0){

        printf("-----------------------------------\n");
        printf("-----------BATALHA NAVAL-----------\n");
        printf("-----------------------------------\n");

        COR_VERMELHO
        printf("    |");

        for(c = 0; c < TAM; c++){
            printf("0%i|", c);
        }

        printf("\n|");

        for(l = 0; l < TAM; l++){
            COR_VERMELHO
            printf("0%i| ", l);
            for(c = 0; c < TAM; c++){
                COR_BRANCO
                if(cenario[l][c] >= 10){
                    printf("@@ ");
                }
                else{
                    if(cenario[l][c] == 1){
                        COR_ROXO
                        printf("0%i ", cenario[l][c]);
                    }
                    else if(cenario[l][c] == 3){
                        COR_AZUL
                        printf("0%i ", cenario[l][c]);
                    }
                    else if(cenario[l][c] == 5){
                        COR_LARANJA
                        printf("0%i ", cenario[l][c]);
                    }
                    else{
                        COR_BRANCO 
                        printf("0%i ", cenario[l][c]);
                    }
                    
                }
            }
            if(l < TAM-1){
                COR_VERMELHO
                printf("\n|");
            }    
        }
        COR_BRANCO
        printf("\n-----------------------------------\n");
        printf("---- Player: %i | Computer: %i\n", player, computer);
        printf("-----------------------------------\n");
        cont++;
        if(aux == 10){
            break;
        }
        if(cont % 2 == 0){
            while(flag == 0){
                printf("[Player]: ");
                scanf("%i %i", &l, &c);
                if(cenario[l][c] >= 10){
                    aux++;
                    flag++;
                    cenario[l][c]-= 10;
                    player+=cenario[l][c];
                }
                sleep(1);
            }    
        }
        else{
            while(flag == 0){
                l = rand()%10;
                c = rand()%10;
                printf("[Computer]: %i %i", l, c);
                if(cenario[l][c] >= 10){
                    aux++;
                    flag++;
                    cenario[l][c]-= 10;
                    computer+= cenario[l][c];
                }
                sleep(1);
            }
        }    
        flag = 0;

    }

    return 0;
}