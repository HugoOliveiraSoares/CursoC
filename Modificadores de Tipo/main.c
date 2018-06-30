#include <stdio.h>
#include <stdlib.h>

/*
      signed -> + e -
      unsigned -> +
      loung -> aumenta a capacidade de armazenamento da variavel
      short -> diminui a capacidade de armazenamento da variavel
    */

int main()
{
    long int i =10;
    double u;
    printf("%i\n", sizeof(u));
    printf("%i", sizeof(i));

    return 0;
}
