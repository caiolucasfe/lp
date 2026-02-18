#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

main (){

    char l1 = '?', l2 = '?', l3 = '?', l4 = '?', l5 = '?', l6 = '?', letra;

    while(true){
    
    if(l1 == '?' || l2 == '?' || l3 == '?' || l4 == '?' || l5 == '?' || l6 == '?'){
   
    printf("🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n");
    printf("🟦       JOGO DA FORCA        🟦\n");
    printf("🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n");
    printf("🟦1° DICA: É UMA FRUTA        🟦\n");
    printf("🟦2° DICA: NO BRASIL TEM MUITO🟦\n");
    printf("🟦3° DICA: EVITA CÂIMBRA      🟦\n");
    printf("🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n");
    
    printf("🟦    PALAVRA: %c ", l1);
    printf("%c ", l2);
    printf("%c ", l3);
    printf("%c ", l4);
    printf("%c ", l5);
    printf("%c    🟦\n", l6);
    printf("🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n");
    printf("➡️ ");
    scanf(" %c", &letra);
    printf("🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n");

    
    
    switch (letra){
    
    case 'a': 
    
            printf("😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊\n");
            sleep(2);
    
        l2 = 'A';
        l4 = 'A';
        l6 = 'A';
        system("clear");
        
    break;
    
    case 'b': 
    
            printf("😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊\n");
            sleep(2);
    
        l1 = 'B';
        system("clear");
        
    break;
    
    case 'n': 
    
            printf("😊😊😊😊😊😊😊😊😊😊😊😊😊😊\n");
            sleep(2);
    
        l3 = 'N';
        l5 = 'N';
        system("clear");
        
    break; 
    
    default: 
    
        printf("❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌\n");
        sleep(2);
        system ("clear");
    break;
    
    }
    
    }
    
    else{
    
        system ("clear");
    
        printf("🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n");
        printf("🟦                            🟦\n");
        printf("🟦      VOCÊ ACERTOU!!        🟦\n");
        printf("🟦                            🟦\n");
        printf("🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n");
        
        return 0;
    
    }
    
    }

return 0;
}