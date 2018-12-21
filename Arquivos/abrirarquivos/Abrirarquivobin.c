# include <stdio.h>
# include <stdlib.h>
int main()
{
  FILE *fp;
  fp = fopen ("teste/teste.bin","wb");
  
  if(!fp)
  {
    printf("Erro na abertura do arquivo.\n");
  }

  fclose(fp);
}
