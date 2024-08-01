#include "ArvoreAVL.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  clock_t start, end;
  double cpu_time_used;

  start = clock();

  ArvAVL *avl;
  int res, i;
  int N = 13, dados[13] = {58, 106, 182, 2, 84, 55, 77, 130, 96, 200, 99, 32, 107};

  avl = cria_ArvAVL();

  for (i = 0; i < N; i++) {
    // printf("========================\n");
    // printf("Inserindo: %d\n",dados[i]);
    res = insere_ArvAVL(avl, dados[i]);
    // printf("\n\nres = %d\n",res);
    // preOrdem_ArvAVL(avl);
    // printf("\n\n");
  }

  printf("\nAVL tree:\n");
  emOrdem_ArvAVL(avl);
  printf("\n\n");

  remove_ArvAVL(avl, 6);
  printf("\nAVL tree:\n");
  emOrdem_ArvAVL(avl);
  printf("\n\n");

  remove_ArvAVL(avl, 7);
  printf("\nAVL tree:\n");
  emOrdem_ArvAVL(avl);
  printf("\n\n");

  remove_ArvAVL(avl, 4);
  printf("\nAVL tree:\n");
  emOrdem_ArvAVL(avl);
  printf("\n\n");
  printf("Rotacoes: %d \n", contador1);
  printf("Altura:  %d \n", altura_ArvAVL(avl));
  libera_ArvAVL(avl);

  end = clock();

  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("Tempo de execução: %f segundos\n", cpu_time_used);

  return 0;
}
