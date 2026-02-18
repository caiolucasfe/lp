#include <stdio.h>

void scang(int *px);

int main(){

    int x;

    scang(&x);

    printf("%i", x);

    return 0;
}

void scang(int *px){
    *px = 100;
}