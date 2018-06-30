#include <stdio.h>
#include <stdlib.h>

int main()
{  /* faça{

    }enquanto()*/
    int contador = 0;
    char c;
    do{
        contador += 1;
        printf("digite 0 para sair do loop\n");
        printf("%i vezes de loop \n",contador);
        c = getchar();

    } while(c != '0');

    return 0;
}
