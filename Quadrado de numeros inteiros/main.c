#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void display();
int leitura();
void square();

int main()
{
    int valor = 0;
    for(display();valor = leitura();display())
    {
        square(valor);
    }
} // end main

void display()
{
    printf("Digite zero para sair do programa\n");
    printf("Digite um numero inteiro para calcular seu quadrado:");
} // end display

int leitura()
{
    int t;
    scanf("%i",&t);
    return t; // retorna o valor de t para a função principal

} // end leitura

void square(int numero)
{
    printf("%i\n",numero* numero); // imprime o quadrado do numero
} // end square
