#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* switch(expressao)
    {
        case(expressao-cost):
            break;
        case(true):
            break;
        default:
            // NAO E NESSESARIO COLOCAR UM BREAK
    } */

    printf("Digite um valor entre 0 e 9 \n");

    int i = 0;

    printf("\t>>>");
    scanf("%i", &i);
    printf("\n");

    switch(i){

    case 0:

        printf("a opcao digitada foi '0'\n");
        break;

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Voce digitou um num entre 1 e 5\n");
            //break;

         case 6:
            printf("a opcao digitada foi '6'\n");
            //break;

         case 7:
            printf("a opcao digitada foi '7'\n");
            break;

         case 8:
            printf("a opcao digitada foi '8'\n");
            break;

        case 9:
            printf("a opcao digitada foi '9'\n");
            break;

    default:
        /* a nossa instrucao default sera executada caso
        1- CASO NENHUM
        2- CASO NAO HAJA A INSTRUÇAO BREAK

        */
        printf("opcao default\n");

    }

    return 0;
}
