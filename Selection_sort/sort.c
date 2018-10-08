#include <stdio.h>
#include <stdlib.h>

void selecao(int vet[], int n)
{

  int menor, aux;

  for (int i = 0; i < n-1; i++)
  {
    menor = i;
    for (int j = i+1; j < n; j++)
    {
      if (vet[menor] > vet[j])
        menor = j;
    }
    if (i != menor)
    {
      aux = vet[i];
      vet[i] = vet[menor];
      vet[menor] = aux;
    }
  }
}

int main()
{
  int n = 20;
  int vetor[] = {3,6,5,1,2,8,7,9,4,13,10,15,12,14,18,16,19,17,20,11};

  selecao(vetor, n);

  for (int i = 0; i < n; i++)
  {
    printf("%i\n", vetor[i]);
  }

  return 0;
}
