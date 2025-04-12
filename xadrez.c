#include <stdio.h>

int main(){

    int peca, i=0;
    int cav;

    printf("Voce esta no jogo de Xadrez escolha uma peça\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
        for ( i = 0; i <= 4; i++)
        {
            printf("Direita \n");
        }
        break;
    case 2:
        do
        {
            printf("Cima, direita \n");
            i++;
        } while (i <= 4);
        break;
    case 3:
        while (i <= 7)
        {  
            printf("Esquerda \n");

            i++;
        }
        break;
    case 4:
        cav = 1;
        while (cav--)
        {
            for ( i = 0; i < 2; i++)
            {
                printf("Cima \n");
            }
            printf("Direita \n");
        }
        break;
    
    default:
        printf("Opção invalida!\n");
        break;
    }

    
    return 0;
}
