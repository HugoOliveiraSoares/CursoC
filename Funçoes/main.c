#include <stdio.h>
#include <stdlib.h>

/**
char - 1byte
int - 2bytes -32768 + 32767
float - 4bytes
double - 8bytes
void - vazio
*/
int main()
{
    int senha = 1234;
    int insert;

    printf("Insira a senha\n");
    scanf("%i", &insert);
    if(insert == senha ){
        printf("acesso permitido\n");
    }
    return 0;
}
