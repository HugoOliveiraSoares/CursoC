#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void codifica(); // prototipo da funcao

int main()
{
    printf("Entre com as letras para codificar\n");
    printf("Digite $ para sair\n");
    codifica();
    return 0;
}

void codifica()
{
    char ok = 0, ch;

    while(!ok)
    {
        scanf("%c",&ch);
        if(ch=='$')
        {
            ok = 1;
            continue; // pula para a fun��o printf
        }
        printf("%c",ch + 2);

    } // end while

} // end codifica
