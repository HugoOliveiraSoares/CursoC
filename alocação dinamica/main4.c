#include <stdlib.h>
#include <stdio.h>

int main()
{
  int *p;
  p = (int *) calloc(5, sizeof(int));
  //p = (int *) malloc(5 * sizeof(int));

  *p = 10;
  *p[1] = 20;

  for (int i = 0; i < 5; i++)
  {
    printf("Enderço de p%i = %p | Valor de p%i = %i\n",i, (p+i), i , *(p+i));
  }

  printf("%i\n", p[0] );
  printf("%i\n", p[1] );

  return 0;
  
}
