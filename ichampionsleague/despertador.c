#include <stdio.h> 
#include <stdlib.h>
int main()
{
    int h1,m1,h2,m2;

    while (scanf("%d%d%d%d",&h1,&m1,&h2,&m2) != EOF && (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0))
    {
        
        int tempoehoras = ((h2)-(h1))*60;   
        int tempominutos = (m2) - (m1);
        int horasdesono = tempoehoras + tempominutos;
        if (horasdesono < 0)
        {
            horasdesono += 1440;
        }
        printf("%d\n",horasdesono);
    }
    return 0;
}