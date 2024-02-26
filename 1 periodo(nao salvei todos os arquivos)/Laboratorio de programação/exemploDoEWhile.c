#include <stdio.h>

int main ()
{

    char Ch;

    //Ch='\0';
    Ch = 'q';

    //printf("Valor do %d",Ch);

    //Enquanto
//    while (Ch!='q')
//    {
//        fflush(stdin);
//        printf("Digite q para sair.");
//        scanf("%c", &Ch);
//    }

//    do{
//        fflush(stdin);
//        printf("Digite q para sair.");
//        scanf("%c", &Ch);
//    }while(Ch!='q');

    do{
        fflush(stdin);
        printf("Digite [a] para incluir clientes.");
        printf("\nDigite [b] para listar clientes.");
        printf("\nDigite [q] para sair do programa.");

        scanf("%c", &Ch);
    }while(Ch!='q');


    //versão do menu com While
//
//        fflush(stdin);
//        printf("Digite [a] para incluir clientes.");
//        printf("\nDigite [b] para listar clientes.");
//        printf("\nDigite [q] para sair do programa.");
//
//        scanf("%c", &Ch);
//
//    while(Ch!='q'){
//        fflush(stdin);
//        printf("Digite [a] para incluir clientes.");
//        printf("\nDigite [b] para listar clientes.");
//        printf("\nDigite [q] para sair do programa.");
//
//        scanf("%c", &Ch);
//    }
    return(0);
}
