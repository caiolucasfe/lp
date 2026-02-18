#include <stdio.h>

    int main(){

        int n1, n2;

            printf("Digite dois números: ");
            scanf("%i %i", &n1, &n2);

                    
                if (n1 < n2){  
                    while(n2 >= n1 ){
                        printf("%i ", n1);
                        n1++;
                    }
                }
                
                else{    
                    while(n2 <= n1 ){
                        printf("%i ", n1);
                        n1--;
                    }
                }

        return 0;
    }