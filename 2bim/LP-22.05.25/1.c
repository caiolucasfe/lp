#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main() {

    int c1, c2, num, ad = 1, sub = 1, mult = 1, div = 1, resposta, resultado;

    srand(time(NULL));

    while (ad == 1 || sub == 1 || mult == 1 || div == 1) {

        printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
        printf("♾️⏺️  DESAFIO DE MATEMÁTICA  ⏺️⏺️♾️\n");
        printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

        if(ad == 1) {

            printf("♾️⏺️ 1 - ADIÇÃO              ⏺️⏺️♾️\n");

        }

        if(sub == 1) {

            printf("♾️⏺️ 2 - SUBTRAÇÃO           ⏺️⏺️♾️\n");

        }

        if( mult == 1) {

            printf("♾️⏺️ 3 - MULTIPLICAÇÃO       ⏺️⏺️♾️\n");

        }

        if(div == 1) {

            printf("♾️⏺️ 4 - DIVISÃO             ⏺️⏺️♾️\n");

        }

        printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
        printf("➡️ ");
        scanf(" %i", &num);
        printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

        if(num == 1) {

            printf("♾️⏺️    DESAFIO DE ADIÇÃO    ⏺️⏺️♾️\n");
            printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

            c1 = 10 + (rand()%90);
            c2 = 10 + (rand()%90);

            resultado = c1 + c2;

            printf("♾️⏺️      %i + %i = ", c1, c2);
            scanf(" %i", &resposta);

            if(resposta == resultado) {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️   🙄🙄🙄🙄🙄🙄🙄🙄🙄🙄  ⏺️⏺️♾️\n");
                printf("♾️⏺️      ACERTOU AFF        ⏺️⏺️♾️\n");
                printf("♾️⏺️     RECARREGANDO        ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

                ad = 0;

                sleep(2);
                system("clear");

            }

            else {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️  🤨😐😶😶‍🌫️😅😂🤣🤣🤣🤣   ⏺️️⏺️♾️\n");
                printf("♾️⏺️      ERROU FEIOOOO      ⏺️⏺️♾️\n");
                printf("♾️⏺️      RECARREGANDO       ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

                sleep(2);
                system("clear");

            }

        }

        else if(num == 2) {

            printf("♾️⏺️   DESAFIO DE SUBTRAÇÃO  ⏺️⏺️♾️\n");
            printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

            c1 = 10 + (rand()%90);
            c2 = 10 + (rand()%90);

            resultado = c1 - c2;

            printf("♾️⏺️      %i - %i = ", c1, c2);
            scanf(" %i", &resposta);

            if(resposta == resultado) {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️   🙄🙄🙄🙄🙄🙄🙄🙄🙄🙄  ⏺️⏺️♾️\n");
                printf("♾️⏺️      ACERTOU AFF        ⏺️⏺️♾️\n");
                printf("♾️⏺️     RECARREGANDO        ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");


                sub = 0;

                sleep(2);
                system("clear");

            }

            else {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️  🤨😐😶😶‍🌫️😅😂🤣🤣🤣🤣   ⏺️️⏺️♾️\n");
                printf("♾️⏺️      ERROU FEIOOOO      ⏺️⏺️♾️\n");
                printf("♾️⏺️      RECARREGANDO       ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

                sleep(2);
                system("clear");

            }

        }

        else if(num == 3) {

            printf("♾️⏺️DESAFIO DE MULTIPLICAÇÃO ⏺️⏺️♾️\n");
            printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
            
            c1 = 10 + (rand()%90);
            c2 = 10 + (rand()%90);

            resultado = c1 * c2;

            printf("♾️⏺️      %i * %i = ", c1, c2);
            scanf(" %i", &resposta);

            if(resposta == resultado) {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️   🙄🙄🙄🙄🙄🙄🙄🙄🙄🙄  ⏺️⏺️♾️\n");
                printf("♾️⏺️      ACERTOU AFF        ⏺️⏺️♾️\n");
                printf("♾️⏺️     RECARREGANDO        ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

                mult = 0;

                sleep(2);
                system("clear");

            }

            else {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️  🤨😐😶😶‍🌫️😅😂🤣🤣🤣🤣   ⏺️️⏺️♾️\n");
                printf("♾️⏺️      ERROU FEIOOOO      ⏺️⏺️♾️\n");
                printf("♾️⏺️      RECARREGANDO       ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

                sleep(2);
                system("clear");

            }
        }

        else if(num == 4) {

            printf("♾️⏺️   DESAFIO DE DIVISÃO    ⏺️⏺️♾️\n");
            printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
            
            c1 = 10 + (rand()%90);
            c2 = 10 + (rand()%90);

            resultado = c1 / c2;

            printf("♾️⏺️      %i / %i = ", c1, c2);
            scanf(" %i", &resposta);


            if(resposta == resultado) {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️   🙄🙄🙄🙄🙄🙄🙄🙄🙄🙄  ⏺️⏺️♾️\n");
                printf("♾️⏺️      ACERTOU AFF        ⏺️⏺️♾️\n");
                printf("♾️⏺️     RECARREGANDO        ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");


                div = 0;

                sleep(2);
                system("clear");

            }

            else {

                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
                printf("♾️⏺️  🤨😐😶😶‍🌫️😅😂🤣🤣🤣🤣   ⏺️️⏺️♾️\n");
                printf("♾️⏺️      ERROU FEIOOOO      ⏺️⏺️♾️\n");
                printf("♾️⏺️      RECARREGANDO       ⏺️⏺️♾️\n");
                printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

                sleep(2);
                system("clear");

            }

        }

    }

    printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");
    printf("♾️⏺️                         ⏺️⏺️♾️\n");
    printf("♾️⏺️       PARABÉNS!!        ⏺️⏺️♾️\n");
    printf("♾️⏺️                         ⏺️⏺️♾️\n");
    printf("♾️⏺️   VOCÊ ZEROU O DESAFIO  ⏺️⏺️♾️\n");
    printf("♾️⏺️                         ⏺️⏺️♾️\n");
    printf("♾️⏺️          ☠️☠️             ⏺️⏺️♾️\n");
    printf("♾️⏺️                         ⏺️⏺️♾️\n");
    printf("♾️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️⏺️♾️\n");

    return 0;
}