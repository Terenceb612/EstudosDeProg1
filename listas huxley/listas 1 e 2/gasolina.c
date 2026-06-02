#include <stdio.h>

int main()
{
    double litros,desconto,valor;
    char tipo;

    scanf("%lf %c",&litros,&tipo);

    if (tipo == 'A')
    {
        if (litros <= 20)
        {
            valor = 1.9 * litros * 0.97;
        }
        else
        {
            valor = 1.9 * litros * 0.95;
        }
    }
    else if (tipo == 'G')
    {
        if (litros <= 20)
        {
            valor = 2.5 * litros * 0.96;
        }
        else
        {
            valor = 2.5 * litros * 0.94;
        }
    }
    else if (tipo == 'D')
    {
        if (litros <= 25)
        {
            valor = 1.66 * litros;
        }
        else
        {
            valor = 1.66 * litros * 0.96;
        }
    }
    printf("R$ %.2lf",valor);
    return 0;
    
    
}