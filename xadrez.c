#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");

        moverTorre( casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0)
    {
        printf("Cima, direita \n");

        moverBispo( casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda \n");

        moverRainha( casas - 1);
    }
}

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
        moverTorre(5);
        break;
    case 2:
        moverBispo(5);
        break;
    case 3:
        moverRainha(8);
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
