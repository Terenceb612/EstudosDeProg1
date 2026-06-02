#include <stdio.h>
#include <math.h>


double seriesalternadas(int imparposicao, int parposicao,int n,int i , double resultado)
{
    if (i > n)
    {
        return resultado;
    }
    else
    {
        if (i %2 == 0)
        {
            parposicao++;
            resultado += (pow(2,(2 * parposicao)-1))/(3 * parposicao);
        }
        else
        {
            imparposicao ++;
            resultado += ((2 * imparposicao)-1)/pow(4,imparposicao-1);
        }
        
        return seriesalternadas(imparposicao,parposicao,n, ++i, resultado);
    }
}

int main ()
{
    int num;
    scanf("%d",&num);

    double result = seriesalternadas(0,0,num,1,0);

    printf("S: %.2lf\n",result);

    return 0;
}