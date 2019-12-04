// gcc bhaskara.c -lm -o bhaskara
// o -lm carrega a lib math
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// x = -B+- raiz(B²-4AC)/2A

int main()
{

  float A, B, C = 0;
  float R1, R2 = 0;
  float delta = 0;

  scanf("%f %f %f", &A, &B, &C);

  delta = (B*B) -4*A*C;

  if (delta < 0 || A == 0)
    printf("Impossivel calcular\n");
    else
    {
      R1 = (-B + sqrt(delta)) /(2*A);
      R2 = (-B - sqrt(delta)) /(2*A);

      printf("R1 = %.5f\n", R1);
      printf("R2 = %.5f\n", R2);
    }


  return 0;
}
