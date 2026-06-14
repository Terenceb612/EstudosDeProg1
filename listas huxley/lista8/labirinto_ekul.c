#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int labirinto[100][100];
    int dragaoi = -1, dragaoj = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &labirinto[i][j]);

            if (labirinto[i][j] == 2)
            {
                dragaoi = i;
                dragaoj = j;
            }
        }
    }

    int bloqueado[100][100];

    //marca as paredes e a area que a dragoa sente
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (labirinto[i][j] == 0)
                bloqueado[i][j] = 1;
            else
                bloqueado[i][j] = 0;

            if (i >= dragaoi - 1 && i <= dragaoi + 1 && j >= dragaoj - 1 && j <= dragaoj + 1)
            {
                bloqueado[i][j] = 1;
            }
        }
    }

    int alcancavel[100][100];

    //so pode se mover para baixo ou para a direita
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (bloqueado[i][j] == 1)
            {
                alcancavel[i][j] = 0;
                continue;
            }

            if (i == 0 && j == 0)
            {
                alcancavel[i][j] = 1;
                continue;
            }

            int cima = 0;
            int esquerda = 0;

            if (i > 0)
            {
                cima = alcancavel[i - 1][j];
            }

            if (j > 0)
            {
                esquerda = alcancavel[i][j - 1];
            }

            if (cima == 1 || esquerda == 1)
            {
                alcancavel[i][j] = 1;
            }
            else
            {
                alcancavel[i][j] = 0;
            }
        }
    }

    if (alcancavel[n - 1][n - 1] == 1)
    {
        printf("Ekul conseguiu ludibriar a dragoa!");
    }
    else
    {
        printf("Ekul tomou o nhac da dragoa :(");
    }

    return 0;
}
