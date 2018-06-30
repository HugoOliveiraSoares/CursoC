#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int a[5], i;
  float soma = 0;
  float media;
  // valores

  for ( i = 0; i < 5; i++ )
  {
    printf ("Digite um valor%i: ", i+1);
    scanf ("%d", &a[i]);
  }

  // exibe valores
  for ( i = 0; i < 5; i++ )
    printf ( "Digitado: %d\n", a[i] );

  // calcula soma e mostra soma
  for ( i = 0; i < 5; i++ )
    soma += a[i];

  printf ( "\nSoma total: %.2f\n", soma );
  // calcula e mostra media
  media = soma / 5;
  printf ( "\nMedia : %.2f\n", media );

}
