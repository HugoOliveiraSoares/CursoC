#include <stdlib.h>
#include <stdio.h>

int main()
{
  int vetor[3] = {1,2,3};

  int *p = vetor;

  *(p + 1) = 10;

  //printf("%i\n", *p );
  printf("%i\n", vetor[1] );

/*
  p = &vetor[1];

  //printf("%i\n", *p );
  printf("%p\n", p );

  p = &vetor[2];

  //printf("%i\n", *p );
  printf("%p\n", p );
  */
}
