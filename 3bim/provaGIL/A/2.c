#include <stdio.h>

int somaImpares(int n1, int n2, int n3);

int main(){

    int n1, n2, n3;

    printf("Digite Três Números: ");
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("Soma: %i ", somaImpares(n1, n2, n3));

    return 0;
}

int somaImpares(int n1, int n2, int n3){
    
    int soma = 0;

    if(n1 % 2 == 0){
        soma+= n1;
    }
    if(n2 % 2 == 0){
        soma+= n2;
    }
    if(n3 % 2 == 0){
        soma+= n3;
    }

    return soma;
}