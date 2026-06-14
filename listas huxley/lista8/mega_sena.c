#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int apostas[100][10];
    int quantidade[100];

    //le as apostas, separadas por virgula
    for (int i = 0; i < n; i++)
    {
        int valor, total = 0;
        char c;

        do
        {
            scanf("%d", &valor);
            apostas[i][total] = valor;
            total++;
            c = getchar();
        } while(c == ',');

        quantidade[i] = total;
    }

    int resultado[6];

    for (int k = 0; k < 6; k++)
    {
        scanf("%d", &resultado[k]);
    }

    int ganhadores = 0;

    //confere as apostas com o resultado
    for (int i = 0; i < n; i++)
    {
        int acertos = 0;

        for (int k = 0; k < 6; k++)
        {
            for (int j = 0; j < quantidade[i]; j++)
            {
                if (apostas[i][j] == resultado[k])
                {
                    acertos++;
                }
            }
        }

        if (acertos == 6)
        {
            ganhadores++;
        }
    }

    printf("Total de ganhadores: %d", ganhadores);

    return 0;
}
