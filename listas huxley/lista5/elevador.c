#include <stdio.h>
#include <stdlib.h>
void elevatorovercapacity(int leituras, int capacidade, int contador, int pessoas)
{
    if (leituras == 0)
    {
        if (contador > 0)
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
        return;
    }
    else
    {
        int out,in;
        scanf("%d%d",&out,&in);
        pessoas = pessoas - out + in;

        if (pessoas > capacidade)
        {
            contador++;
        }
        return elevatorovercapacity(--leituras,capacidade,contador,pessoas);
    }
}
/////////////////////////
int main()
{
    int leituras,capacidade;
    scanf("%d%d",&leituras,&capacidade);

    elevatorovercapacity(leituras,capacidade,0,0);

    return 0;
}