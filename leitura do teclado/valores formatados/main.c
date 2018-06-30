#include <stdio.h>
#include <stdlib.h>

// printf("%tipo_de_saida",valor_a_ser_impresso);
// printf("%tipo1 %tipo2", va1,var2);

int main()
{
   /*
    int %i ou %d
    float / double %f
    char %c
    string &s

    %u modulo de um numero
    %p endereço de memória
    %e OU %E número notação cientifica
    %% porcentagem
    */
    int i = 18;

    float ff = 4.12;

    printf("%f\n",ff);

    printf("%i\n", i);

    printf("%i - %f\n" ,i,ff);

    return 0;
}
