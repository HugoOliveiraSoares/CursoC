#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2 = 0;

   printf("Informe um numero:\n");
   scanf("%i", &num1);

// if(num1 < 0)
//        num2 = 0;
//   else
//        num2 = num1;

    num2 = (num1<0) ? 0 : num1; // variavel =(condição) ? valor1 : valor2;
                                // variavel =(condição) se valor1 senão valor2;

        printf("O valor de num2 e:%i\n",num2);

    return 0;
}
