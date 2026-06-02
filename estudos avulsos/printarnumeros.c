#include <stdio.h>

void printarnumeros(long long int n)
{
    if (n==0)
    {
        return;
    }
    else
    {
        printf("%lld\n",n);
        return printarnumeros(n - 1);
    }
}
int main()
{
    long long int num;
    scanf("%lld",&num);

    printarnumeros(num);
    
    return 0;
}