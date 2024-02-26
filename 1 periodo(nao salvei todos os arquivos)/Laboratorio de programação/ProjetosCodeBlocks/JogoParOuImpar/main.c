#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


bool ePar(int x){
    bool retorno = false;
    if(x % 2 == 0)
        retorno = true;
    else
        retorno = false;

    return retorno;
}

int main()
{
    int maoComputador = 0;
    int maoJogador = 0;
    int jogadorEscolheParOuImpar = 0;
    bool par = true;

    srand(time(0));
    maoComputador = rand() % 10;

    //printf("%d, Computador: \n",maoComputador);

    printf("\t\t\tJOGO PARA OU IMPAR");

    printf("\n\nJogador digite um numero entre 0-9: ");
    scanf("%d",&maoJogador);

    printf("\nO computador tambem ja escolheu o numero!");

    printf("\nJogador escolha:\n\t[1]-->Par\n\t[2]-->Impar\n");
    scanf("%d", &jogadorEscolheParOuImpar);

    if(jogadorEscolheParOuImpar == 1){
        par = true;
    }
    else{
        par = false;
    }

    //teste da soma da mao do jogador com a do computador e teste se
    //e par

    printf("\n\nMao Computador %d, Mao Jogador %d, Total= %d ", maoComputador,maoJogador, maoComputador+maoJogador);

    if((ePar(maoComputador+maoJogador) && par) || (!ePar(maoComputador+maoJogador) && !par)){
        printf("\nJOGADOR GANHOU!!");
    }
    else{
        printf("JOGADOR PERDEU!\a\a\a");

    }
   return 0;
}
