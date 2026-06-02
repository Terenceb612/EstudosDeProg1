#include <stdio.h>

int nprimo(int entrada,int divisor)
{
    if (entrada == 0 || entrada == 1)
    {
        return 0;
    }
    if (divisor == 1 || entrada == 1)
    {
        return 1;
    }
    else
    {
        if ((entrada%divisor == 0))
        {
        return 0;
        }
        else
        {
            return nprimo(entrada,--divisor);
        }
        
    }
}
void verificador()
{
    int n;
    scanf("%d",&n);

    if (n == -1)
    {
        return;
    }
    else
    {
        int resultado = nprimo(n,n/2);

        printf("%d\n",resultado);

        return verificador();
    }
}

/////////////////////////////////////////////////
/////////////////////////////////////////////////
int main ()
{
    verificador();
    return 0;
}