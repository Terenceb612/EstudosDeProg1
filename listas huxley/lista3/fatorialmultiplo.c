#include <stdio.h>

int fatorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else 
    {
        return a * fatorial(a-1);
    }
}

void maquinafatorial(int x)
{

    if (x == -1)
    {
        return;
    }
   else 
   {
    printf("%d\n",fatorial (x));

    int y;
    scanf("%d",&y);
    maquinafatorial(y);
   }
}

/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////

int main ()
{
    int b;
    scanf("%d",&b);

    maquinafatorial(b);

    return 0;
}