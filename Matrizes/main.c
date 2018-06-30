#include <stdio.h>
#include <stdlib.h>

#define DIML 5
#define DIMC 30

int main()
{
    int i,j;
    int nomes[DIMC][DIML];

    for(i=0;i<DIML;i++)
    {
        printf("Entre com a linha %i \n",i);
        scanf("%i",&nomes[i]);

    } // end for

    for(i=0;i<DIML;i++)
    {
        printf("O nome %i e ",i);
        printf(nomes[i]);
    }

    return 0;
}
