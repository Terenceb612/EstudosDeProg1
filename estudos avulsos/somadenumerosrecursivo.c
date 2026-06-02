#include <stdio.h>

int somadenumeros(int a)
{
    if(a == 0)
    {
        return 0;
    }
    else 
    {
        return a + somadenumeros(a - 1);
    }
}


int main ()
{
    int numero;
    scanf("%d",&numero);

    pritnf ("%d",somadenumeros(numero));


    return 0;
}