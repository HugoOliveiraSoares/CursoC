#include <stdio.h>
#include <stdlib.h>

#define tam 6

int main()
{
    int vetor1[tam], vetor2[tam], i, produto = 0;

    printf("Entre com o vaolr do vetor1\n");
    for(i=0;i<tam;i++)
    {
        printf("Elemento %i\n",i);
        scanf("%i",&vetor1[i]);
    } // end for1

    printf("Entre com o valor do vetor2\n");
    for(i=0;i<tam;i++)
    {
        printf("Elemento %i\n",i);
        scanf("%i",&vetor2[i]);

    } // end for2

    for(i=0;i<tam;i++) produto += vetor1[i] * vetor2[i];

    printf("O produto escalar e igual a: %i\n",produto);

    return 0;
}
