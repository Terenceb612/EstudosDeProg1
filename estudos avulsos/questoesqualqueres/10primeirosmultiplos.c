#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 1; i < 11; i++)
    {
        int atual = n * i;

        printf("%d\n",atual);
    }
    
    return 0;
}