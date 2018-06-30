#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   char c;
   printf("Digite um caracter em minusculo\n");
   scanf("%c", &c);

   if(c >= 'a'){
        printf("segue a letra que voce digitou e maiuscula: > %c <", toupper(c) );
   }
    return 0;
}
