/*1) Implemente um c�digo em C capaz de alocar com malloc um vetor de 4 n�meros do tipo inteiro.
Depois, o programa deve solicitar ao usu�rio a entrada dos 4 n�meros no espa�o alocado.
Por fim, o programa deve mostrar os 4 n�meros e liberar a mem�ria alocada.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    ptr = (int*) malloc(4 * sizeof(int));
    if(ptr){
        printf("Memoria alocada com sucesso!!\n");
    }else{
        printf("Nao foi possivel alocar a memoria!\n");
        exit(1);
    }
    printf("\t\tInforme os valores:\n");

    for(int i=0; i < 4; i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i < 4; i++){
        printf("\t%d\n\n",ptr[i]);

    }
    free(ptr);


    return 0;
}
*/




/*2) Implemente um codigo em C que  inicialmente recebe um inteiro (com scanf)
que sera usado como tamanho de uma string. Depois, o codigo deve alocar
dinamicamente uma string com o tamanho definido, e em seguida, o conteudo dessa
string deve ser preenchido pelo usuario (tambem com scanf). O programa deve
imprimir o conteudo da string sem seus caracteres numericos.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanho = 0;
  char *ptr = NULL;
  printf("\t\tInforme um tamanho para a string:\n");
  scanf("%d", &tamanho);
  ptr = malloc(tamanho * sizeof(char));
  if (ptr) {
    printf("Memoria alocada com sucesso!!\n");
  } else {
    printf("Nao foi possivel alocar a memoria!\n");
    exit(1);
  }
  printf("\n\t\tdigite a string\n");
  for (int i = 0; i < tamanho; i++) {
    scanf("%c", &ptr[i]);
    fflush(stdin);
  }

  char c;
  for (int i = 0; ptr[i] != '\0'; i++) {
    c = ptr[i];
    if (c >= '0' && c <= '9') {
      continue;
    }
    putchar(c);
  }

  return 0;
}
*/

/*
3) Implemente um código em C que declare uma struct para o cadastro de trabalhadores de uma empresa. No código:

a) Deverão ser armazenados, para cada trabalhador: cpf, nome e ano de nascimento.

b) Primeiramente, o usuário deverá inserir o número de trabalhadores que serão armazenados

c) O código deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos trabalhadores.

d) O código deverá solicitar a inserção das informações dos trabalhadores

e) Por fim, deverá ser impressa na tela os dados armazenados e deverá ser feita a liberação da memória.



#include <stdio.h>
#include <stdlib.h>

struct Trabalhador {
    char cpf[12];
    char nome[50];
    int anoNascimento;
};

int main() {
    int numTrabalhadores;

    printf("Digite o número de trabalhadores: ");
    scanf("%d", &numTrabalhadores);

    struct Trabalhador *trabalhadores = (struct Trabalhador *)malloc(numTrabalhadores * sizeof(struct Trabalhador));

    if (trabalhadores == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < numTrabalhadores; i++) {
        printf("Trabalhador %d:\n", i + 1);
        printf("CPF: ");
        scanf(" %s", trabalhadores[i].cpf);
        printf("Nome: ");
        scanf(" %[^\n]s", trabalhadores[i].nome);
        printf("Ano de Nascimento: ");
        scanf("%d", &trabalhadores[i].anoNascimento);
    }

    printf("\nDados dos Trabalhadores:\n");
    for (int i = 0; i < numTrabalhadores; i++) {
        printf("Trabalhador %d:\n", i + 1);
        printf("CPF: %s\n", trabalhadores[i].cpf);
        printf("Nome: %s\n", trabalhadores[i].nome);
        printf("Ano de Nascimento: %d\n", trabalhadores[i].anoNascimento);
    }

    free(trabalhadores);

    return 0;
}
