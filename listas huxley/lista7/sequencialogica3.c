#include <stdio.h>

int main ()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    for (int i = 1,soma = i; soma <= y; i++, soma+=z)
    {
        if (i%x == 0)
        {
            printf("%d\n",soma);
        }
        else
        {
            printf("%d ",soma);
        }
    }
    return 0;
}