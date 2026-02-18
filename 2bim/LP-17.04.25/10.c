#include <stdio.h>

int main () {

int i = 2, n, p = 1;

    printf(" Digite um valor: ");
    scanf("%i", &n);

        if(n <= 0) {
            p = 0;
        }
        else{
            
            while(i <= n / 2){ 
                if(n % i == 0) {
                    p = 0;                    
                }
                i++;
            }
        }
        if(p){
            printf(" Seu número é Primo!!!!! \n ");
        }
        else{
            printf(" Seu número NÃO é Primo!!!!! \n "); 
        }

return 0;
}

