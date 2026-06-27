#include <stdio.h>

void inverter(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main ()
{
    int a,b;
    

    scanf("%d%d",&a,&b);

    if (b > a)
    {
        inverter(&a,&b);
    }

printf("%d %d",a,b);
    
return 0;
}