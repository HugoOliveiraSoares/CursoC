/**
 Sistema de dados simples

 Seleciona vendedores por regiao
 **/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char regiao, vendedor;

    printf("Regioes:Leste, Oeste, Norte\n");
    printf("Informe a pirmeira letra da regiao\n");
    regiao = getche(); // smelhante a funcao scanf
    regiao = toupper(regiao); // converte as letras digitadas em maiusculas
    printf("\n");

    switch(regiao)
    {
    case 'L':
        printf("Ricardo, Jose, Mariana\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch(vendedor)
        {
        case 'R':
            printf("Vendas: R$%i\n",5000);
            break;
        case 'J':
            printf("Vendas: R$%i\n",15000);
            break;
        case 'M':
            printf("Vendas: R$%i\n",2000);
            break;

        }// end switch alinhado
    break;

        case 'O':
        printf("Rafael, Giovanna,Silva\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch(vendedor)
        {
        case 'R':
            printf("Vendas: R$%i\n",8050);
            break;
        case 'G':
            printf("Vendas: R$%i\n",15000);
            break;
        case 'S':
            printf("Vendas: R$%i\n",10000);
            break;

        }// end switch alinhado
    break;

       case 'N':
        printf("Fabiana, Gabriela, Roberto\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch(vendedor)
        {
        case 'F':
            printf("Vendas: R$%i\n",5245);
            break;
        case 'G':
            printf("Vendas: R$%i\n",1500);
            break;
        case 'R':
            printf("Vendas: R$%i\n",1000);
            break;

        }// end switch alinhado
    break;

    } // end switch

    system("PAUSE");
    return 0;
}
