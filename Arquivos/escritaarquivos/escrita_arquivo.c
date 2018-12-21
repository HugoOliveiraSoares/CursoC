# include <stdio.h>
# include <stdlib.h>
#include <string.h>

int main()
{
  FILE *arq;
  char string[100];
  int i;

  arq = fopen("arquivo.txt", "w");

  if (arq == NULL)
  {
    printf("ERRO\n");
    exit(1);
  }
  printf("Digite a mensagem\n");
  gets(string);

  for (int i = 0; i < strlen(string); i++)
  {
    fputc(string[i], arq);
  }

  fclose(arq);

  return 0;
}
