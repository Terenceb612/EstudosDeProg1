#include <stdio.h>

int main()
{
    int a [3][3];
    double soma = 0;
    double elementos = 0;
    double media = 0;
    int maior = 0;
    int somadadiagonal = 0;
    int delta;
    //preenche a matriz
    for ( int i = 0; i<3; i++)
    {
        for(int j = 0; j<3 ; j ++)
        {
            scanf("%d",&a[i][j]);

            soma += a[i][j];
            elementos ++;

                if (a[i][j] > maior || (i == 0 && j == 0))
                {
                    maior = a[i][j];
                }
                if (i == j)
                {
                    somadadiagonal += a[i][j];
                }
                
        }
    }
    if (maior < 0)
    {
        delta = -1;
    }
    else if (maior > 0)
    {
        delta = 1;
    }
    else
    {
        delta = 0;
    }
    
    media = soma/elementos;

    printf("%.2lf %d %d %d",media,maior,delta,somadadiagonal);

    return 0;
    
}