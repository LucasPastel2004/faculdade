#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int checarAno;

    printf("Entre com o Ano: ");
    scanf("%d", &checarAno);
    if ((checarAno % 400) == 0)
        printf("%d � ano Bissexto.\n", checarAno);
    else if ((checarAno % 100) == 0)
        printf("%d n�o � ano Bissexto.\n", checarAno);
    else if ((checarAno % 4) == 0)
        printf("%d � ano Bissexto.\n", checarAno);
    else
        printf("%d n�o � ano Bissexto \n", checarAno);

    return 0;
}


//Com desenho errado!!!!!!
//#include <stdio.h>
//#include <locale.h>
//
//int main()
//{
//    setlocale(LC_ALL, "Portuguese");
//    int checarAno;
//
//    printf("Entre com o Ano: ");
//    scanf("%d", &checarAno);
//    if ((checarAno % 4) == 0){
//        printf(" SIM.\n", checarAno);
//        if ((checarAno % 100) == 0){
//            printf(" SIM.\n", checarAno);
//            if ((checarAno % 400) == 0){
//                printf(" SIM.\n", checarAno);
//            }
//            else{printf("N�o");}
//
//        }
//        else{printf("N�o");}
//
//    }
//    else{printf("N�o");}
//
//
//    return 0;
//}
