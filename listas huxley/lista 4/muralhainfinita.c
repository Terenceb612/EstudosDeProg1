#include<stdio.h>

int navegacao(int moedas, int n,int x, int y,int lastmove)
{
    if (n == 0)
    {
        return moedas;
    }
    char M;
    scanf(" %c",&M);

    if (M == 'D')
    {
        x++;
    }
    else
    {
        y ++;
    }
    int cordenadas = y-x;

    if (cordenadas != 0)
    {
        int posicaoatual;
        if (cordenadas > 0)
        {
            posicaoatual = 1;
        }
        else
        {
            posicaoatual = -1;
        }
        if (lastmove !=0 && lastmove != posicaoatual)
        {
            moedas ++;
        }
        lastmove = posicaoatual;
        
    }
    
    return navegacao(moedas,n-1,x,y,lastmove);
        
    
}


int main()
{
    int n,resultado;
    
    scanf("%d",&n);
    getchar();
    resultado = navegacao(0, n,0,0,0);
    printf("%d\n",resultado);

    return 0;

    
}