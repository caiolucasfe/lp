#include <stdio.h> 

int main(){

    int x, y, *px, *py;

    x = -12;
    y = 21;

    px = &x;
    py = &y;

    printf("%i[%p]\n", x, &x);
    printf(" %i[%p]", y, &y);
    printf("\n%i[%p]\n", *px, px);
    printf(" %i[%p]", *py, py);

    *px = 100;
    *py = 200;

    printf("\n%i[%p]\n", x, &x);
    printf("%i[%p]", y, &y);

    printf("\n");
    return 0;
}