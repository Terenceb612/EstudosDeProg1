#include <stdio.h>

int main()
{
    int a[3][3];
    double soma = 0;
    double positivos = 0;
    double media = 0;
    int menor = 0;
    int somaforadiagonal = 0;
    int delta;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);

            if (a[i][j] > 0)
            {
                soma += a[i][j];
                positivos++;
            }

            if (a[i][j] < menor || (i==0 && j==0))
            {
                menor = a[i][j];
            }

            if (i != j)
                somaforadiagonal += a[i][j];
        }
    }

    if (menor % 2 == 0)
    {
        delta = 1;
    }
    else
    {
        delta = 0;
    }

    if (positivos > 0)
    {
        media = soma / positivos;
    }

    printf("%.2lf %d %d %d", media, menor, delta, somaforadiagonal);

    return 0;
}
