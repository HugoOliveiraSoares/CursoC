#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , x;
    i = 15;
    x = 20;

    int soma = i+x;
    printf("O resultado da soma e: %i\n", soma);

    int subtracao = x- i;
    printf("O resultado da subtracao e: %i\n", subtracao);

    int multi = i * x;
    printf("O resultado da multiplicacao e: %i\n",multi);

    int div = x/i;
    printf("O resultado da divisao e: %i\n" ,div);

    return 0;
}
