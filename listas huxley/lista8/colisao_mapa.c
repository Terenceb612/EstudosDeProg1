#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int mapa[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mapa[i][j]);
        }
    }

    int c;
    scanf("%d", &c);

    char comandos[1000];

    for (int k = 0; k < c; k++)
    {
        scanf(" %c", &comandos[k]);
    }

    int x, y;
    scanf("%d%d", &x, &y);

    //executa os comandos de movimento
    for (int k = 0; k < c; k++)
    {
        int novox = x, novoy = y;

        if (comandos[k] == 'D')
        {
            novoy = y + 1;
        }
        else if (comandos[k] == 'E')
        {
            novoy = y - 1;
        }
        else if (comandos[k]=='C')
        {
            novox = x - 1;
        }
        else if (comandos[k] == 'B')
        {
            novox = x + 1;
        }

        if (novox >= 0 && novox < n && novoy >= 0 && novoy < m && mapa[novox][novoy] == 1)
        {
            x = novox;
            y = novoy;
        }
    }

    printf("(%d,%d)", x, y);

    return 0;
}
