#include <stdio.h>

int checarmultiplos (int a,int b, int multiplo, int contador)
{
    if (multiplo == 50)
    {
        return contador;
    }
    else
    {
        if (multiplo%a == 0 && multiplo%b == 0 )
        {
            contador ++;
        }
        return checarmultiplos(a,b,multiplo+1,contador);
    }   
}

int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);

    printf("%d",checarmultiplos(a,b,1,0));

    return 0;
}