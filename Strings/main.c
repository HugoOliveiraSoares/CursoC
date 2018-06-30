#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRINGS

int main()
{
    char nome[51], sobrenome[51];
    int comp1 = 0, comp2 = 0;

    printf("Digite seu nome: ",nome);
    scanf("%s",&nome);
    comp1 = strlen(nome); // comprimento do nome

    printf("Digite seu sobernome: ",sobrenome);
    scanf("%s",&sobrenome);
    comp2 = strlen(sobrenome); // comprimento do sobrenome

    strcat(nome," ");
    strcat(nome,sobrenome); // concatena as strings strcat(destino,origen)

    printf("Ola %s!\n",nome);

    printf("Seu nome tem %i caracteres seu sobrenome tem %i caracteres\n", comp1,comp2);

    printf("\n");
    printf(strlwr(nome)); // strlwr(str); converte a string para minusculo
    printf("\n");

    strcpy(nome,"outro nome"); // Copia a string para destino strcpy(des,orig);
    printf(nome,"\n");

    return 0;
}
