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

    scanf("%i", &i);

    switch(i){

    case 0:

        printf("a opcao digitada foi '0'\n");
        break;

    case 1:
        printf("a opcao digitada foi '1'\n");
        break;

        case 2:
            printf("a opcao digitada foi '2'\n");
            break;

        case 3:
            printf("a opcao digitada foi '3'\n");
            break;

        case 4:
            printf("a opcao digitada foi '4'\n");
            break;

        case 5:
            printf("a opcao digitada foi '5'\n");
            break;

         case 6:
            printf("a opcao digitada foi '6'\n");
            break;

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
        printf("opcao default\n");

    }

    return 0;
}
