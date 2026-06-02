#include <stdio.h>

void poluicao(double multa,int casasmultadas)
{
    int carros;
    scanf("%d",&carros);

    if (carros == 999)
    {
        printf("%.2lf\n%d",multa,casasmultadas);
        return;
    }
    else
    {
        if (carros > 2)
        {
            multa +=((carros-2) * 12.89);
            ++casasmultadas;
        }
        return poluicao(multa,casasmultadas);
    }   
}

int main ()
{
    poluicao(0.0,0);

    return 0;
}