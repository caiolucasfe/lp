#include <stdio.h>

    int main(){

        int dia, mes;

            printf("Dia/Mês: ");
            scanf("%i %i", &dia, &mes);

//Janeiro 1 Fevereiro 2 Marco 3 Abril 4 Maio 5 Junho 6 Julho 7 Agosto 8 Setembro 9 Outubro 10 Novembro 11 Dezembro 12

            //Primavera
                if(mes == 9 && dia <=30 && dia >=1){
                    if(dia <= 22 || dia == 24){
                        printf("Primavera");
                    }
                }

                else if(mes == 10 && dia <=31 && dia >=1){
                        printf("Primavera");
                }

                else if(mes == 11 && dia <=30 && dia >=1){
                        printf("Primavera");
                }

                else if(mes == 12 && dia <=31 && dia >=1){
                    if(dia <= 21){
                        printf("Primavera");
                    }
                }

            //Verão

                if(mes == 12 && dia <=31 && dia >=1){
                    if(dia >= 22){
                        printf("Verão");
                    }
                }

                else if(mes == 1 && dia <=31 && dia >=1){
                        printf("Verão");
                }

                else if(mes == 2 && dia <= 29 && dia >=1){
                        printf("Verão");
                }

                else if(mes == 3 && dia <=31 && dia >=1){
                    if(dia <= 21){
                        printf("Verão");
                    }
                }

            //Outono

                if(mes == 3 && dia <=31 && dia >=1){
                    if(dia <= 23){
                        printf("Outono");
                    }
                }

                else if(mes == 4 && dia <=30 && dia >=1){
                        printf("Outono");
                }

                else if(mes == 5 && dia <=31 && dia >=1){
                        printf("Outono");
                }

                else if(mes == 6 && dia <=30 && dia >=1){
                    if(dia <= 21){
                        printf("Outono");
                    }
                }

            //Inverno

                if(mes == 6 && dia <=30 && dia >=1){
                    if(dia >= 22){
                        printf("Inverno");
                    }
                }

                else if(mes == 7 && dia <=31 && dia >=1){
                        printf("Inverno");
                }

                else if(mes == 8 && dia <=31 && dia >=1){
                        printf("Inverno");
                }

                else if(mes == 9 && dia <=30 && dia >=1){
                    if(dia <= 22 || dia == 30){
                        printf("Inverno");
                    }
                }

                else{
                    printf("Inválido");
                }



        return 0;
    }