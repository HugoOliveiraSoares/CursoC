#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter = 0;
    int code = 0;
    printf("digite uma letra entre A ate G:");
    scanf("%c",&caracter);

   /* switch(caracter)
    {
    case 'A':
        code = 65;
        break;
    case 'B':
        code = 66;
        break;

    case 'C':
        code = 67;
        break;

    case 'D':
        code = 68;
        break;

    case 'E':
        code = 69;
        break;

    case 'F':
        code = 70;
        break;

    case 'G':
        code = 71;
        break;

    default:
        code = -1;

    } */

    code = (caracter=='A') ? 65 :
           (caracter=='B') ? 66 :
           (caracter=='C') ? 67 :
           (caracter=='D') ? 68 :
           (caracter=='E') ? 69 :
           (caracter=='F') ? 70 :
           (caracter=='G') ? 71 : -1;


    printf("O codigo ASCII da letra digitada e:%i\n", code);

    return 0;
}
