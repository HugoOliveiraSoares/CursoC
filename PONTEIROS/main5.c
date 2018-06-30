#include <stdlib.h>
#include <stdio.h>

int main()
{
  int vetor[3] = {1,2,3};
  int *p = vetor;

  printf("%i\n", *p );
  printf("%p\n", p );


  return 0;
}
