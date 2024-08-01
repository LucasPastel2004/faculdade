#include "ArvoreLLRB.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  clock_t start, end;
  double cpu_time_used;

  start = clock();

  ArvLLRB *raiz = cria_ArvLLRB();
  // system ("color C");
  // https://www.youtube.com/watch?v=rcDF8IqTnyI

  int i, N = 13, val[13] = {57, 189, 180, 74, 187, 161, 154, 199, 103, 52, 123, 13, 181};
  for (i = 0; i < N; i++) {
    insere_ArvLLRB(raiz, val[i]);
  }

  printf("Rotacoes: %d \n", contador);
  printf("Altura:  %d \n", altura_ArvLLRB(raiz));

  end = clock();

 
  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("Tempo de execução: %f segundos\n", cpu_time_used);

  return 0;
}