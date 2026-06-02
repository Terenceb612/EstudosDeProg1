#include <stdio.h>

int main ()
{
    int casa,clima,publico,lesionados,pdentrosamento;
    double chance = 1 ;
    scanf("%d%d%d%d%d",&casa,&clima,&publico,&lesionados,&pdentrosamento);


    if (casa == 1)
    {
        if (clima == 3)//1 é sol, 2 é neve, 3 é chuva
            {
                chance*=0.83;
            }
            else if (clima == 1)
            {
                chance*=1.3321;
            }
            else
            {
                chance*=1.1051;
            }
        if (publico >4000)
            {
                chance*=(publico * 1.0008);
            }
            else
            {
                chance *= (publico *0.9992);
            }
        if (pdentrosamento > 0)
            {
                chance*=(pdentrosamento*1.027);
            }
            else 
            {
                chance *=(pdentrosamento*0.982);
            }
    }
    else
    {
        if(clima == 2||clima == 3)
          {
                printf("A chance de vitoria do flamengo e de 0.00");
                return 0;
          }
            else if (clima == 1)
          {
                chance*=0.8913;
          }
        if (publico >4500)
            {
                chance*=(publico * 0.99997);
            }
            else
            {
                chance*=(publico * 0.99999);
            }
        if (pdentrosamento > 0)
            {
                chance*=(pdentrosamento*1.052);
            }
            else 
            {
                chance *=(pdentrosamento*0.985);
            }  
    }
    if (lesionados > 0)
    {
        chance*=(lesionados * 0.973);
    }
    printf("A chance de vitoria do flamengo e de %.2lf",chance);
    return 0;

}