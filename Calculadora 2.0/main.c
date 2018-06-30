#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
   float num1, num2, resultado;
   char op;

   do{
        num1 = num2 = resultado = 0;
       // OPERAÇÃES REALIXADAS
        printf("\t(1) soma\n");
        printf("\t(2) subtrair\n");
        printf("\t(3) multiplicar\n");
        printf("\t(4) divisao\n");
        printf("\t(0) sai do programa\n");
        printf("Informe a operacao desejada\n");
        printf("\t\t>>>");
        op = getche();
        printf("\n");

        if(op != '0')
        {
            printf("\tdigite o 1 numero:\t>>>");
            scanf("%f",&num1);
            printf("\tdigite o 2 numero:\t>>>");
            scanf("%f",&num2);

            if(op == '1')
            {
                resultado = num1 + num2;
            }else
            {
                if(op == '2')
                {
                      resultado = num1 - num2;
                }else
                {
                    if(op == '3')
                    {
                        resultado = num1 * num2;
                    }else
                    {
                        if(op == '4')
                        {
                             resultado = num1 / num2;

                             if(num2 == 0)
                             {
                                printf("\n\t NAO E POSSIVEL DIVIDIR POR ZERO\n\n");
                                goto fim;
                             }
                        }
                    }
                }
            }
         printf("\n\t O resultado e:%f\n\n",resultado);
        }
    fim:
       //system("pause"); //pausa o programa
       printf("\n\tPrecione uma tecla para continuar\n");
       getch();
       system("cls"); //limpa a tela

   }while(op!='0');
    return 0;

}
