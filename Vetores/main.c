#include <stdio.h>
#include <stdlib.h>

/*

int vetor[tamanho]

int vetor[5]
float vetor[10.8]
char vetor[4]

*/

#define tam 5

int main()
{
    int vetor[tam];
    unsigned i, num = 0;

    printf("Numero inicial do vetor\n");
    scanf("%i", &num);

    // Gerar o vetor
    for(i=0;i<tam;i++)
        vetor[i] = num++;

    // iprime o vetor
    for(i=0;i<tam;i++)
        printf("Elemento %i = %i\n",i,vetor[i]);

        // vetor[0] = 3

    return 0;
}
