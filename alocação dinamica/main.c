#include <stdlib.h>
#include <stdio.h>
/*
sizeof();
malloc();
free();
calloc();
realloc();
*/

struct x
{
  int a;
  int b;
  int c;
};

int main()
{
  int vetor[10];

  struct x estrutura;

  printf("%li\n", sizeof(vetor));
  printf("%li\n", sizeof(estrutura));


  printf("%li\n", sizeof(int));
  printf("%li\n", sizeof(double));
  printf("%li\n", sizeof(short));
  printf("%li\n", sizeof(float));
  printf("%li\n", sizeof(char));


  return 0;

}
