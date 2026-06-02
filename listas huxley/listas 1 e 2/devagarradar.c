#include <stdio.h>

int main (){

    int vmax,vcarro, pontos;
    double multa;

    scanf("%d%d",&vmax,&vcarro);

    if (vcarro <= vmax)
    {
        printf("0.00\n0");
        
        return 0;
    }

    if (vcarro > vmax && vcarro <= (vmax *1.2))
    {
        multa = 85.13;
        pontos = 4;
        
        printf("%.2lf\n%d",multa,pontos);
    }
    else if (vcarro > (vmax * 1.2) && (vcarro <= vmax * 1.5))
    {
        multa = 127.69;
        pontos = 5;

        printf("%.2lf\n%d",multa,pontos);
    }
    else if (vcarro > (vmax * 1.5))
    {
        multa = 574.62;
        pontos = 7;

        printf("%.2lf\n%d",multa,pontos);
    }
    return 0;
    
}