#include <stdio.h>

    int main(){

        int quanportas, numeroportas, p1, p2, p3, p4, p5;

            printf("Quantidade de portas: ");
            scanf("%i", &quanportas);

            if(quanportas >1 && quanportas ==5){
                printf("Digite o número das 5 portas: ");
                scanf("%i %i %i %i %i", &p1, &p2, &p3, &p4, &p5);

                    if(p1 == 3 && p2 == 5 && p3 == 4 && p4 == 6 && p5 == 9 ){
                        printf("Frutas capturadas: Uva, Melancia, Melão, Banana e Tangerina");
                    }

                    else{
                        printf("Inválido");
                    }
            }

            else if(quanportas >1 && quanportas ==4){
                printf("Digite o número das 4 portas: ");
                scanf("%i %i %i %i", &p1, &p2, &p3, &p4);

                    if(p1 == 1 && p2 == 4 && p3 == 6 && p4 == 8){
                        printf("Frutas capturadas: Melão, Melancia, Tangerina e Banana");
                    }

                    else if(p1 == 2 && p2 == 4 && p3 == 6 && p4 == 9){
                        printf("Frutas capturadas: Melancia, Melão, Banana e Tangerina");
                    }

                    else if(p1 == 3 && p2 == 5 && p3 == 4 && p4 == 8){
                        printf("Frutas capturadas: Uva, Melancia, Melão e Banana");
                    }

                    else if(p1 == 3 && p2 == 5 && p3 == 6 && p4 == 8){
                        printf("Frutas capturadas: Uva, Melancia, Tangerina e Banana");
                    }

                    else{
                        printf("Inválido");
                    }
                    
            }

            else if(quanportas >1 && quanportas ==3){
                printf("Digite o número das 3 portas: ");
                scanf("%i %i %i", &p1, &p2, &p3);

                    if(p1 == 1 && p2 == 4 && p3 == 9){
                        printf("Frutas capturadas: Melão, Melancia e Tangerina");
                    }

                    else if(p1 == 2 && p2 == 4 && p3 == 8){
                        printf("Frutas capturadas: Melancia, Melão e Banana");
                    }

                    else if(p1 == 2 && p2 == 6 && p3 == 8){
                        printf("Frutas capturadas: Melancia, Tangerina e Banana");
                    }

                    else if(p1 == 3 && p2 == 5 && p3 == 9){
                        printf("Frutas capturadas: Uva, Melancia e Tangerina");
                    }

                    else{
                        printf("Inválido");
                    }

                }

            else if(quanportas >1 && quanportas ==2){
                printf("Digite o número das 3 portas: ");
                scanf("%i %i", &p1, &p2);

                    if(p1 == 1 && p2 == 8){
                        printf("Frutas capturadas: Melão e Banana");
                    }

                    else if(p1 == 2 && p2 == 9){
                        printf("Frutas capturadas: Melancia e Tangerina");
                    }

                    else if(p1 == 3 && p2 == 7){
                        printf("Frutas capturadas: Uva, Tangerina e Limão");
                    }
                
                
                }
            else{
                printf("Inválido");
            }

        return 0;
    }