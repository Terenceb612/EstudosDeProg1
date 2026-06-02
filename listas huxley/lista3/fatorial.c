#include <stdio.h>

int fatorial (int x)
{
    if (x <=1)
    {
        return 1;
    }
    else
    {
        return x * fatorial (x - 1);
    }
    
}
int main ()
{
    int a;

    scanf("%d",&a);
    printf("%d",fatorial(a));

    return 0;
    
}
