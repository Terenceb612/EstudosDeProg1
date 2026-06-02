#include <stdio.h>

int main ()
{
    int n;
    double a,b;

    scanf("%d",&n);
    
    a = n % 10;
    b = n/10;
    if (a == 0)
    {
        printf("%.0lf",b);
    }
    else
    {

    printf("%.0lf%.0lf",a,b);
    }
    return 0;
}