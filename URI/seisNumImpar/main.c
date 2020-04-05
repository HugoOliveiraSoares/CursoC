#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x = 0;

    printf("Digite um numero: ");
    scanf("%i", &x);
    
    if ((x % 2) != 0)
    {
        printf("%i\n", x);
        
        for (int i = 0; i < 6; i++)
        {
            x = x + 2;
            printf("%i\n", x);
        }
        
    }else
    {
        x++;
        for (int i = 0; i < 6; i++)
        {
            printf("%i\n", x);
            x = x + 2;
        }
    }
    
    return 0; 
}