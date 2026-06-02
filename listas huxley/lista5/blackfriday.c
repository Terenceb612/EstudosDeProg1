#include <stdio.h>

int discountverifier(int i)
{
    double p,p0;

    if (scanf("%lf%lf",&p0,&p) == EOF)
    {
        return i;
    }
    else
    {
        if (p <= (p0 * 0.8))
        {
            i++;
        }
        return discountverifier(i);
    }
}

int main ()
{
    int resultado = discountverifier(0);

    printf("%d\n",resultado);

    return 0;
}