#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     && (true) E (true)

     || (true) OU (true) ->  1
        (true) OU (false) -> 1
        (false) OU (true) -> 1
        (false) OU (false) -> 0
    */
    int i = 10;
    int cond = 0;

    cond = ((i == 10)||(i<1));
    printf("%i", cond);

    cond = ((i == 0)||(i<1000));
    printf("%i", cond);

    cond = ((i == 10)||(i<!0));
    printf("%i", cond);

    cond = ((i != 10)||(i==0));
    printf("%i", cond);

    return 0;
}
