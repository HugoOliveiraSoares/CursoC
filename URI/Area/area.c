#include <stdio.h>

#define  pi 3.14159

int main()
{
  double A, B, C, result = 0;

  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

//a área do triângulo retângulo que tem A por base e C por altura.
  result = (A * C) / 2;
  printf("TRIANGULO: %.3f\n",result);

//a área do círculo de raio C. (pi = 3.14159)
  result = pi * (C * C);
  printf("CIRCULO: %.3f\n",result);

// a área do trapézio que tem A e B por bases e C por altura.
  result = (A + B) * C / 2;
  printf("TRAPEZIO: %.3f\n",result);

//a área do quadrado que tem lado B.
  result = B*B;
  printf("QUADRADO: %.3f\n",result);

// a área do retângulo que tem lados A e B
  result = A * B;
  printf("RETANGULO: %.3f\n",result);

  return 0;
}
