#include <stdio.h>

int maiorNúmero(int n1, int n2);

int main(){

    int n1, n2;

    printf("Digite dois Números: ");
    scanf("%i %i", &n1, &n2);
    printf("Maior: %i ", maiorNúmero(n1, n2));

    return 0;
}

int maiorNúmero(int n1, int n2){
    
    int maior;

    if(n1 > n2){
        return maior = n1;
    }
    else{
        return maior = n2;
    }
}