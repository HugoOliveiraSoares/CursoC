#include <stdio.h>
#include <stdlib.h>

// & acessa o endereço de memoria
// * acessa o valor da variavel
// tipo *nome;

int main()
{
    int x = 10;
    int *ponteiro;

    ponteiro = &x;

    int y = 20;
    *ponteiro = y; // aponta para o valor da variavel

    printf("%i %i\n", x, y);

    return 0;
}
