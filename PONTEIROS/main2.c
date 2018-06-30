#include <stdlib.h>
#include <stdio.h>

int main()
{
  int x = 10;
  double y = 20.50;
  char z = 'a';

  int *px = &x;
  double *py = &y;
  char *pz = &z;


  printf("endereço x = %i - valor x = %i\n",px, *px );
  printf("endereço y = %i - valor y = %f\n",py, *py );
  printf("endereço z = %i - valor z = %c\n",pz, *pz );


  //double soma = *px + *py; // soma os valores acessando o valor
  //printf("%f\n",soma);


  return 0;
}
