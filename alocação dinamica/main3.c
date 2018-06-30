#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int *p = (int *) malloc(sizeof(int));

  *p = 1000;

  free(p);

  printf("%i\n", *p );

  //free(p);

//  int *m = (int *) malloc(sizeof(int));

  return 0;
}
