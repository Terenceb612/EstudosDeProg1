#include <stdio.h>

int divisores(int n, int j)
{
    if (j == 1)
    {
        return 0;
    }
    else 
    {
        if (n%j == 0 && j%3 == 0)
        {
            return 1 + divisores(n , j - 1);
        }
        else 
        {
            return divisores(n , j - 1);
        }
    }
}

int main ()
{
    int n,resultado;
    scanf("%d",&n);

    if (n%3 == 0)
    {
        resultado +=1 ;
    }

    resultado += divisores(n, n/2);

    if (resultado == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else
    {
         printf ("%d",resultado);
    }
    
    return 0;
}
