#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    int i = 0, j = 1, resposta;
    int erros = 0, acertos = 0;
    char opcao;

    inico:
        for(j=1;j<10;j++)
        {
            printf("Qual a reposta %i+%i?",i,j);
            scanf("%i",&resposta);
            getchar();
            if(resposta != (i+j))
            {
                erros++;
                printf("Resposta errada!\n");

            } else
             {
                acertos++;
                printf("Resposta correta!\n");
             } // end if

        } // end for
        printf("Acertos = %i\n",acertos);
        printf("Erros = %i\n",erros);

            // end inicio

        meio:
            printf("Continuar respondendo? s - sim ou n - nao:");
            opcao = toupper(getche());
            getchar();

            printf("\n");

            switch(opcao)
            {
                case 'S':
                    i++;
                    goto inico;
                    break;
                case 'N':
                    goto fim;
                default:
                    printf("Opcao invalida\n");
                    goto meio;

            } // end switch meio

            // end meio
        fim:

    return 0;
}
