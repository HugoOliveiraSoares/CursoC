#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
  += SOMA
  -= SUBTRAÇAO
  *= MULTIPLICAÇÃO
  /= DIVISAO
  %= RESTO
*/
    int i = 1;
    printf("%i\n",i);
    printf("%i\n",++i);
    printf("%i\n",++i);

system("cls");

    int i2 = 5;

    printf("%i\n",i2);
    printf("%i\n",--i2);
    i2--;
    printf("%i\n",i2);

    /*
    1 -> INCREMENTO\
   -------------------->PRE E POS
   2 -> DECREMENTO/

    PRE -> O VALOR SERA INCREMENTADO/DECREMENTADO NA INSTRUNÇÃO QUE A VARIAVEL ESTIVER CONTIDA

    PROS -> O VALOR SERA INCREMENTADO/DECREMENTADO NA PROXIMA INSTRUNÇÃO

    */

   system("cls");

    int x =0;
    x = x + 1;// INCREMENTAR QUANTAS UNIDADES DESEJARMOS
    x += 2;//  INCREMENTAR QUANTAS UNIDADES DESEJARMOS
    ++x;// OP. INCREMENTA SOMENTE UMA UNIDADE

    printf("%x",x);
    return 0;
}
