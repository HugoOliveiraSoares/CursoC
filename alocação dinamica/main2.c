#include <stdlib.h>
#include <stdio.h>

int main()
{
  int *p = (int *) malloc(sizeof(int)); // solicita um bloco de memoria malloc(tamanho_memoria)

  *p = 1000;

  printf("%i\n", *p );

  return 0;
}
