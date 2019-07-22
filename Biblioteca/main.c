#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main( void) {
  int int1 = 200, int2 = 100;
  float pf1 = 2.5, pf2 = 1.5;
  troca_int( &int1, &int2);
  troca_float( &pf1, &pf2);
  printf( "Int1: %i, int2: %i, pf1: %f, pf2: %f\n\n", int1, int2, pf1, pf2);
  return 0;
}
