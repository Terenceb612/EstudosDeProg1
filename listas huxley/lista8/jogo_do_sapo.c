#include <stdio.h>

int main()
{
    int n, m, o;
    scanf("%d%d%d", &n, &m, &o);

    int casas[10000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &casas[i]);
    }

    int posicao[1000];

    for (int j = 0; j < m; j++)
    {
        posicao[j] = 0;
    }

    //simula as rodadas do jogo
    for (int r = 0; r < o; r++)
    {
        for (int j = 0; j < m; j++)
        {
            int v;
            scanf("%d", &v);

            posicao[j] = (posicao[j] + v) % n;

            if (posicao[j] < 0)
                posicao[j] += n;

            int valorcasa = casas[posicao[j]];

            posicao[j] = (posicao[j] + valorcasa) % n;

            if (posicao[j] < 0)
            {
                posicao[j] += n;
            }
        }
    }

    for (int j = 0; j < m; j++)
    {
        printf("%d\n", posicao[j]);
    }

    return 0;
}
