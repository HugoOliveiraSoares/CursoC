#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 0;
  float y, consumo = 0;

  scanf("%i", &x );
  scanf("%f", &y );

  consumo =  x / y;

  printf("%.3f km/l\n", consumo );


  return 0;
}
