#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){

    int peca, i=0;

    printf("Voce esta no jogo de Xadrez escolha uma peça\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
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
    default:
        printf("Opção invalida!\n");
        break;
    }

    
    return 0;
}
