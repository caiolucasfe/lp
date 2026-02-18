#include "parkif.h"

int main(){

    int op = -1;
    char marca[100], modelo[100];
    veiculo c;

    while(op != 0){
        system("clear");
        menu();
        scanf(" %i", &op);

        switch(op){

            case 1:
                system("clear");
                printf("[ ENTRADA DE VEÍCULO ]");

                printf("\nPlaca: ");
                scanf(" %[^\n]", c.placa);

                printf("\nMarca: ");
                scanf(" %[^\n]", c.marca);

                printf("\nModelo: ");
                scanf(" %[^\n]", c.modelo);

                printf("\nMotor: ");
                scanf(" %f", &c.motor);

                printf("\nCâmbio: ");
                scanf(" %c", &c.cambio);
                getchar();

                if(entrada(c) == 1){
                    printf("[OK] Sucesso!");
                }
                else{
                    printf("[ERRO] Lotado!");
                }
                __fpurge(stdin);
                getchar();
                break;
            case 2:
                system("clear");
                printf("[ VISUALIZAR VEÍCULO ]");
                visualizar();
                __fpurge(stdin);
                getchar();
                break;
            case 3:
                system("clear");
                printf("[ BUSCAR POR MARCA ]");
                printf("Marca: ");
                scanf(" %[^\n]", marca);
                system("clear");
                por_marca(marca);

                __fpurge(stdin);
                getchar();
                break;
            case 4:
                system("clear");
                printf("[ BUSCAR POR MODELO ]");
                printf("Modelo: ");
                scanf(" %[^\n]", modelo);
                system("clear");
                por_modelo(modelo);
                __fpurge(stdin);
                getchar();
                break;
            case 5:
                system("clear");
                printf("[ SAÍDA DE VEÍCULO ]");
                __fpurge(stdin);
                getchar();
                break;
            case 6:
                system("clear");
                printf("[ SAÍDA POR CÂMBIO ]");
                __fpurge(stdin);
                getchar();
                break;
            case 0:
                system("clear");
                printf("[Até Logo!!]");
                return 0;
        }
    }

    printf("\n");
    return 0;
}