#include <stdio.h>
#define NUMERO_DE_STRINGS 3
#define COMPRIMENTO_MAXIMO_STRING 10

int main()
{
  char arr[NUMERO_DE_STRINGS][COMPRIMENTO_MAXIMO_STRING] = {"Geek",
                     "Geeks", "Geekfor"};

  char ch_arr[3][10] = {
                         {'G', 'e', 'e', 'k', '\0'},
                         {'G', 'e', 'e','e', 'k','s','\0'},
                         {'G', 'e', 'e', 'k', 'f','o','r','\0'}
                     };

  printf("Elementos no Array de Strings:\n");

  for (int i = 0; i < NUMERO_DE_STRINGS; i++)
  {
    printf("%s\n", ch_arr[i]);
  }
  return 0;
}
