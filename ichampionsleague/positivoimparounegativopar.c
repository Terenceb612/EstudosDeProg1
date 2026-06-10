#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    if (n == 0)
    {
        printf("NULO");
    }
    else
    {
        if (n > 0)
            printf("POSITIVO ");
        else
            printf("NEGATIVO ");

        if (n % 2 == 0)
            printf("PAR");
        else
            printf("IMPAR");
    }

    return 0;
}