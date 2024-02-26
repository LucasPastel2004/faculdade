#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5;
    int somaP = 0;

    printf("Soma de números Pares!\n");

    printf("\nDigite 5 números: ");
    scanf ("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    printf("\n\n%d %d %d %d %d", n1, n2, n3, n4, n5);


    if(n1%2 == 0)
        somaP = somaP + n1;
    if(n2%2 == 0)
        somaP = somaP + n2;
    if(n3%2 == 0)
        somaP = somaP + n3;
    if(n4%2 == 0)
        somaP = somaP + n4;
    if(n5%2 == 0)
        somaP = somaP + n5;

    printf("\nSoma dos Pares: %d", somaP);

    return 0;
}
