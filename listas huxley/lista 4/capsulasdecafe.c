#include<stdio.h>


void capsulasdecafe(int quantidade, char tipo,int capsulas, int contador)
{
    int type;
    scanf(" %d %c",&quantidade,&tipo);

    if (contador == 0)
    {
        int chicarasporprof = (capsulas * 2)/7;
        
        printf("%d\n%d",capsulas,chicarasporprof);
        return;
    }
    else 
   // capsulas = tipo * quantidade;
    {
        if (tipo == 'p' || tipo == 'P')
        {
            type = 10;
        }
        else
        {
            type = 16;
        }
        int acrecimo = type * quantidade;
        capsulas += acrecimo;
        return capsulasdecafe(quantidade,tipo,capsulas ,contador - 1);
    }
}

int main()
{
    capsulasdecafe(0,0,0,7);

    return 0;
}
