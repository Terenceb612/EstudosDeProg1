#include <stdio.h>

int primo(int n)
{
    if (n < 2) return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return 0;
    }

    return 1;
}
int main ()
{
    int n;
    while (scanf("%d",&n) && n !=  -1)
    {
        int bilunga = primo(n);

        if (bilunga == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
    
}