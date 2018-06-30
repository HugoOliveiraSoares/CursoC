#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tam = 0; // tamanho da progrecao
  int progressao[tam];
  int a = 0; // numero
  int razao = 0; // razao
  int n = 0; // posiçao do numero

  printf("Qual o tamanho da progressão? ");
  scanf("%i",&tam);
  printf("Qual a razao? ");
  scanf("%i",&razao);
  printf("Qual o primeiro lemento? ");
  scanf("%i",&a);
  printf("\n");

  for (int i=0, n=1 ; i<tam ; i++, n++)
  {
    progressao[i] = a + (n-1) * razao;
  }

  for (int i=0; i<tam; i++)
  {
    printf("Numero:%i = %i\n", i+1,progressao[i]);
  }

  return 0;
}
