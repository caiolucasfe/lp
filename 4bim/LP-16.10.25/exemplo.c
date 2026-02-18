#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

    int x = 10;
    float pi = 3.1415;
    char nome[] = "Caio Lucas";

    FILE *cursor = fopen("teste.txt", "a+");

    if(cursor == NULL){
        printf("ERRO");
        return 0;
    }

    printf("%i\n%.4f\n%s", x, pi, nome);
    fprintf(cursor, "%i\n%.4f\n%s\n", x, pi, nome);

    fclose(cursor);
    printf("\n");
    return 0;
}