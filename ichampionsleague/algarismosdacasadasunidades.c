#include<stdio.h>
#define lli long long int

int main ()
{
    lli n;
    scanf("%lld",&n);

    lli resultado = n%10;

    printf("%lld",resultado);
    return 0;
}