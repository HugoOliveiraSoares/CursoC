#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =10;
    printf("Digite um numero diferente de 5\n");
    scanf("%i", &i);

    if(i!=5)
    {
        printf("true");
    } else{
        printf("false");
    }
/*
== COMPARA��O -> x == y
!= COMPARA��O NEGATIVA x != y
*/
return 0;
}

