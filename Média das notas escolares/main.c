#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;
    printf("\t\tMedia escolar 1.0\n\n");

    printf("Digite a sua 1 nota bimestral:");
    scanf("%f",&nota1);

     printf("Digite a sua 2 nota bimestral:");
     scanf("%f",&nota2);

     printf("Digite a sua 3 nota bimestral:");
     scanf("%f",&nota3);

     printf("Digite a sua 4 nota bimestral:");
     scanf("%f",&nota4);

     media = (nota1 + nota2 + nota3 + nota4) /4;
     printf("A sua media escolar foi de :%f\n",media);

     if(media >= 7)
     {
         printf("Voce foi aprovado.\n");
     } else{
         printf("Voce foi reprovado.\n");
     }
    return 0;
}
