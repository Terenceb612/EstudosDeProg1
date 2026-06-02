 #include <stdio.h>

 int greaterthan(int maiornumero)
 {
    int n;   
    scanf("%d",&n);

    if (n == 0)
    {
        return maiornumero;
    }
    else
    {
        if (n > maiornumero)
        {
            maiornumero = n;
        }
        return greaterthan(maiornumero);
    }
 }
 ////////////////////
int main ()
{
    printf("%d",greaterthan(0));

    return 0;
}