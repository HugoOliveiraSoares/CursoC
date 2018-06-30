#include <stdio.h>
#include <stdlib.h>

// Criar um vetor e organizar os dados em ordem crescente

#define tam 5
#define falso 0
#define verdadeiro 1

int main()
{
    int vetor[tam], i, change = falso, end = tam, store;

    printf("Entre com o valor de %i elementos\n",tam);
    for(i=0;i<tam;i++)
    {
        printf("Elemento %i: ",i);
        scanf("%i",&vetor[i]);
        getchar();
    }

    do
    {
        change = falso;
        for(i=0;i<end;i++)
        {
            if(vetor[i]>vetor[i+1]) // vetor[0] = 5, vetor[1] = 2
            {
                store = vetor[i]; // store = 5
                vetor[i] = vetor[i+1]; // vetor[0] = 2
                vetor[i+1] = store; // vetor[1] = 5
                change = verdadeiro;
            }
        } // end for

    } while(change); // enquato change for verdadeiro ira testar todas os vetores

    for(i=0;i<tam;i++)
        printf("%i\n",vetor[i]);

    return 0;
}
