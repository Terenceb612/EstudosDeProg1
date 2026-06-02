#include <stdio.h> 

int main ()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if ((a + b - c ==0) || (a + c - b)==0 || (b + c - a)==0 || (a - b) == 0 || (a - c) == 0 || (b - c) == 0)printf("S");

    else printf("N");

    return 0;
    


}