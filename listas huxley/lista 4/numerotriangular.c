#include <stdio.h>
#include <math.h>

int numerotriangular(int n, int a)
{
    int b = a + 1;
    int c = b +1;

    if (a >= pow(n,1/3.0) || n < 0)
    {
        return 0;
    }
    else
    {
        if (n == a * b * c)
        {
            return a;
        }
        else
        {
            return numerotriangular(n,b);
        }
        
    }
}
////////////

int main ()
{
    int n;
    scanf("%d",&n);

    int resultado = numerotriangular(n,1);

    if (resultado == 0)
    {
        printf("Falso");
    }
    else 
    {
        printf("%d * %d * %d = %d\nVerdadeiro",resultado,resultado+1,resultado+2,n);
    }
    return 0;
}