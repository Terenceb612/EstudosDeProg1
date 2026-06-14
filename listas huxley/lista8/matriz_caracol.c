#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matriz[50][50];

    int topo = 0, base = n - 1, esquerda = 0, direita = n - 1;

    //le os valores seguindo o caminho de caracol
    while (topo <= base && esquerda <= direita)
    {
        for (int i = topo; i <= base; i++)
        {
            scanf("%d", &matriz[i][esquerda]);
        }
        esquerda++;

        for (int j = esquerda; j <= direita; j++)
        {
            scanf("%d", &matriz[base][j]);
        }
        base--;

        if (topo <= base)
        {
            for (int i = base; i >= topo; i--)
            {
                scanf("%d", &matriz[i][direita]);
            }
            direita--;
        }

        if (esquerda <= direita)
        {
            for (int j = direita; j >= esquerda; j--)
            {
                scanf("%d", &matriz[topo][j]);
            }
            topo++;
        }
    }

    //imprime a matriz, um numero por linha
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\n", matriz[i][j]);
        }
    }

    return 0;
}
