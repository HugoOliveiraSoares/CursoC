#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    /*
    int x = 10;
    printf("Hello world!\n");
    printf("ola\n");
    printf("%i\n",x);
    return 0;
    */
    char c;
    printf("digite um caracter\n");
    c = getchar();

    if(c == '1')
    {
        printf("o caracter esta correto\n");
    }else
    {
        printf("esta errado\n");
        printf("voce digitou:>%c<. \n",c);
    }
}



