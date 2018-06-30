#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;
    int valor = 0;
    printf("Conversor de bases numericas\n");
    printf("1: decimal para hexadecimal\n");
    printf("2: hexadecimal para decimal\n");
    printf("Informe a opcao\n");
    scanf("%i", &opcao);
    getchar();
    if(opcao == 1)
    {
        printf("Informe o valor em decimal\n");
        scanf("%i", &valor);
        getchar();
        printf("%i em hexadecimal e: %x\n", valor, valor);
    } else

    if(opcao == 2)
    {
         printf("Informe o valor em hexadecimal\n");
         scanf("%x", &valor);
         getchar();
         printf("%x em decimal e: %i\n", valor, valor);
    } else printf("Sua opcao e invalida\n");

    return 0;
}
