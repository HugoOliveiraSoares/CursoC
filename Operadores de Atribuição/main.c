#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
   // x = x+1;
   // x += 1;

    while(x<11)
    {
        printf("%i\n", x);
        x +=1; // x = x+1;
    }

/*
  += adição
  -= subtração
  *= multiplicação
  /= divisao
  %= resto da divisao
*/
    system("cls");

    int i = 50;
    printf("soma:%i\n",i+=100);
    printf("subtracao:%i\n",i-=50);
    printf("multiplicacao:%i\n",i*=3);
    printf("divisao:%i\n",i/=3);
    printf("resto da divisao:%i\n",i%=3);

    return 0;
}
