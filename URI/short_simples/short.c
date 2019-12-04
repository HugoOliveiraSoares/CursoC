#include <stdio.h>
// 7 21 -14
int main()
{

  int a, b, c = 0;
  int x, y, z = 0;
  int temp;

  scanf("%i %i %i", &a, &b, &c);

  x = a;
  y = b;
  z = c;

  if (x > y)
  {
    temp = x;
    x = y;
    y = temp;
  }
  if (x > z)
  {
    temp = x;
    x = z;
    z = temp;
  }
  if (y > z)
  {
    temp = y;
    y = z;
    z = temp;
  }

  printf("%i\n", x);
  printf("%i\n", y);
  printf("%i\n", z);

  printf("\n");

  printf("%i\n", a);
  printf("%i\n", b);
  printf("%i\n", c);

  return 0;
}
