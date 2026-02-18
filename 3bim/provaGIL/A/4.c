#include <stdio.h>

#define TAM 20

void substituir(char string[TAM], char igual, char nova);

int main(){
    
   char string[TAM], igual, nova;

   printf("String: ");
   scanf("%[^\n]", string);
   printf("\nLetras: ");
   scanf(" %c %c", &igual, &nova);
   substituir(string, igual, nova);
   printf("\n%s", string);


    return 0 ;
}

void substituir(char string[TAM], char igual, char nova){
    int i = 0;

    for(i = 0; string[i] != '\0'; i++){

        if(string[i] == igual){

            string[i] = nova;
        }
    }
}