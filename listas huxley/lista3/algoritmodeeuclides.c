#include <stdio.h>

int algeuclides(int A,int D)
{
    
    if (A % D ==0)
    {
        return D;
    }
    else 
    {
        return algeuclides(D,A%D);
    }
}
void contador(int n)
{

        if (n==0)
        {
            return;
        }
        else 
        {
            int x,y;
            scanf("%d%d",&x,&y);
            
            printf("MDC(%d,%d) = %d\n",x,y,algeuclides(x,y));
            return contador(n-1);
        }
}
int main ()
{
    int n;
    scanf("%d",&n);
    
    contador(n);

    return 0;
}