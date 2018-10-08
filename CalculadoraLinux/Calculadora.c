#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,resultado,resto = 0;
    char op;

    do {
      num1=num2=resultado=resto = 0;

      printf("\tCalculadoraLinux\n");
      printf("\t1-Soma\n");
      printf("\t2-Subtração\n");
      printf("\t3-Multiplicação\n");
      printf("\t4-Divisão\n");
      printf("\t0-Sair\n");
      printf("\tSelecione uma operação\n");
      printf("\t\t >>>");
      scanf("%c",&op);


    if (op != '0')
    {

        if (op == '1')
        { // SOMA
          printf("\t\n Digite um número: ");
          scanf("%f",&num1);
          printf("\t\n Digite um número: ");
          scanf("%f",&num2);
          resultado = num1 + num2; // END SOMA
        }

        if (op == '2')
        { // SUBTRAÇÃO
          printf("\t\n Digite um número: ");
          scanf("%f",&num1);
          printf("\t\n Digite um número: ");
          scanf("%f",&num2);

          resultado = num1 - num2; // END SUBTRAÇÃO
        }

        if (op == '3')
         { // MULTIPLICAÇÃO
          printf("\t\n Digite um número: ");
          scanf("%f",&num1);
          printf("\t\n Digite um número: ");
          scanf("%f",&num2);

          resultado = num1 * num2; // END MULTIPLICAÇÃO
        }

        if (op == '4')
        { // DIVISÃO
          printf("\t\n Digite um número: ");
          scanf("%f",&num1);
          printf("\t\n Digite um número: ");
          scanf("%f",&num2);
          if (num2 == 0) {
            printf("\t\n Divisaõ por zero não é possivel!\n");
            goto fim;
          }

          resultado = num1 / num2;
        }
        printf("\n O Resultado é: %f\n\n", resultado);
     }

     //printf("\n O Resultado é: %f\n\n", resultado);
     fim:
     printf(" Precione enter para continuar!\n");
     getchar();
     getchar();
     system("clear");

    } while(op != '0');

   return 0;
}
