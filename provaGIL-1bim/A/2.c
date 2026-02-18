#include <stdio.h>

    int main(){

        float kg, m, imc;

            printf("Digite seu peso(kg): ");
            scanf("%f", &kg);
            printf("Digite sua altura(m): ");
            scanf("%f", &m);

                imc = kg / (m * m);

            printf("IMC: %.2f ", imc);

        return 0;
    }