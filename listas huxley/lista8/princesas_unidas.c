#include <stdio.h>

int main()
{
    int p, e;
    scanf("%d %d", &p, &e);

    int votos[1000][30];
    int totais[30];

    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &votos[i][j]);
        }
    }

    for (int j = 0; j < p; j++)
        totais[j] = 0;

    //conta os votos de cada princesa
    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (votos[i][j] == 1)
            {
                totais[j]++;
            }
        }
    }

    for (int j = 0; j < p; j++)
    {
        printf("Princesa %d: %d voto(s)\n", j + 1, totais[j]);
    }

    return 0;
}
