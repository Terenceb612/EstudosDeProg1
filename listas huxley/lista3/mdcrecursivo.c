#include<stdio.h>

int mdc (int a,int b,int divisor, int mdctemp)
{
    if ((divisor >= a) || (divisor >= b))
    {
       return mdctemp;
    }
    else
    {
        divisor ++;
        if((a%divisor == 0)&& (b%divisor == 0))
        {
            mdctemp = divisor;
        }
        return mdc (a,b,divisor,mdctemp);
    }

}
int main ()
{
    int a,b, resultado;
    scanf("%d%d",&a,&b);
    
    resultado = mdc(a,b,2,1);
    printf("%d",resultado);

    return 0;   
}