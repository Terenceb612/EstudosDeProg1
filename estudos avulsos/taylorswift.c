#include <stdio.h>

int figurinhas(int figinicial, int semanas, int incremento)
{
    if (semanas == 1)
    {
        
        return figinicial + figinicial + incremento;
    }
    else
    {
        return figinicial = figurinhas(figinicial,semanas - 1, incremento) + figinicial + (semanas * incremento);
    }
}

void contador(int n)
{
    int a,b,c,d;
    if (n == 0)
    {
        return;
    }
    else 
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("%d\n",figurinhas(a,b - 1,c));
        return contador(n-1);
    }
}

int main ()
{
    int n;
    scanf ("%d",&n);
    contador(n);

    return 0;
}