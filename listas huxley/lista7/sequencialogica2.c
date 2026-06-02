#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d",&x,&y);

    
    for (int k = 0, i = 1 ; i < y +1 ; i++, k++)
    {
        if (k == x - 1)
        {
            printf("%d\n",i);
            k = -1;
        }
        else
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}