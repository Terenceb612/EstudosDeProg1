#include <stdio.h>

double enfeites(double valordoenfeite)
{
    int price;
    double quantidade;
    if (scanf("%d%lf",&price,&quantidade) != EOF)
    {
       valordoenfeite += (price *quantidade);
       return enfeites(valordoenfeite);
    }
    return valordoenfeite;
}

int main ()
{
    int arvore;
    scanf("%d",&arvore);

    double valor = arvore + enfeites(0);
    double valorpessoa = (valor/21.0);

    printf("%.2lf\n%.2lf",valor,valorpessoa);

    return 0;
    
}