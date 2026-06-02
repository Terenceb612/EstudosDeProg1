#include <stdio.h>

int contadigitospares(int a, int count)
{
   
    if (a == 0)//considerando 123
    {
        return count;
    }
    else
    {
        int x = a/10;//12 ,depois 1
        int y = a %10;//3, depois 2

        if (y%2 == 0)
        {
            count ++;
        }
        return contadigitospares(x,count);
    }

}
///////////
int main ()
{
    int x;

    scanf("%d",&x);
    
    printf("%d",contadigitospares(x , 0));

    return 0;
}