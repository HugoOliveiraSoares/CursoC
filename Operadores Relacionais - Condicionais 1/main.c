#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iJ,iI;
    iJ = 17;
    iI = 60;
    int idade = 0;

    printf("Digite a idade de uma pessoa\n");
    scanf("%i", &idade);

     if(idade <= iJ)
     {
         printf("A idade e de um jovem\n");
     }else{
        if(idade >= iI)
        {
            printf("A idade e de um idoso\n");
        }else{
              if((idade > iJ)&&(idade < iI))
               {
                  printf("A idade informada e de uma pessoa de meia idade\n");
               }
             }
          }
    return 0;
}
