#include <stdio.h>
#include <stdlib.h>

int main()
{
 // % obter resto de uma divisao
   int num1,num2,soma,sub,multi,div,res;
    printf("Calculadora\n");

    printf("Digite os dois numeros a serem calculados:\n");

    scanf("%i%i", &num1,&num2);

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    res = num1 % num2;
    printf("A soma e:%i\n",soma);
    printf("A subtracao e:%i\n",sub);
    printf("A multiplicacao e:%i\n",multi);
    printf("A divisao e:%i\n",div);
    printf("O resto da divisao e:%i\n",res);


    return 0;
}
