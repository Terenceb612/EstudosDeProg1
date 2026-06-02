#include <stdio.h>

int divisoresnointervalo(int n, int a, int b,int flag)
{
    if(a > b)
    {
        return 0;
    }
    else
    {
        if (a%n == 0)
        {
            flag = 1;
            printf("%d\n",a);
            return flag + divisoresnointervalo(n,a+1,b,flag);
        }
        else
        {
            return flag + divisoresnointervalo(n,a+1,b,flag);
        }
    }
}

int main()
{
    int x,a,b,resultado;
    scanf("%d%d%d",&x,&a,&b);

    resultado = divisoresnointervalo(x,a,b,0);

    if (resultado == 0)
    {
        printf("INEXISTENTE");
        return 0;
    }
    

    return 0;
}