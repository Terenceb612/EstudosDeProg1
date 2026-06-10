#include <stdio.h>

int main ()
{
    int proximo,ano;
    scanf("%d",&ano);
    proximo = 1986 + ((ano - 1986) / 76 + 1) * 76;

    printf("%d",proximo);

    return 0;
}