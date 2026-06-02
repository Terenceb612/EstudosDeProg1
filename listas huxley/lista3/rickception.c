#include <stdio.h>

int somasequencias(int inicial,int ndeseries,int flag)
{
    if (ndeseries == 0)
    {
        return inicial;
    }
    if(flag == 0)
    {
        return somasequencias(inicial + 3,--ndeseries,1);
    }
    else
    {
        return somasequencias(inicial + (inicial%5),--ndeseries,0);
    }
    
    
}
int main ()
{
    int i,ns,resultado;
    
    scanf("%d%d",&i,&ns);

    resultado = somasequencias(i,ns,0);
    printf("%d",resultado);

    return 0;
}