#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int caso = 1; caso <= n; caso++)
    {
        int matriz[9][9];

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        int valido = 1;

        //verifica as linhas
        for (int i = 0; i < 9; i++)
        {
            int presente[10];

            for (int v = 0; v <= 9; v++)
            {
                presente[v] = 0;
            }

            for (int j = 0; j < 9; j++)
            {
                presente[matriz[i][j]]++;
            }

            for (int v = 1; v <= 9; v++)
            {
                if (presente[v] != 1)
                {
                    valido = 0;
                }
            }
        }

        //confere as colunas
        for (int j = 0; j < 9; j++)
        {
            int presente[10];

            for (int v = 0; v <= 9; v++)
                presente[v] = 0;

            for (int i = 0; i < 9; i++)
            {
                presente[matriz[i][j]]++;
            }

            for (int v = 1; v <= 9; v++)
            {
                if (presente[v] != 1)
                {
                    valido = 0;
                }
            }
        }

        //verifica as regioes 3x3
        for (int bi = 0; bi < 3; bi++)
        {
            for (int bj = 0; bj < 3; bj++)
            {
                int presente[10];

                for (int v = 0; v <= 9; v++)
                {
                    presente[v] = 0;
                }

                for (int i = bi * 3; i < bi * 3 + 3; i++)
                {
                    for (int j = bj * 3; j < bj * 3 + 3; j++)
                    {
                        presente[matriz[i][j]]++;
                    }
                }

                for (int v = 1; v <= 9; v++)
                {
                    if (presente[v] != 1)
                    {
                        valido = 0;
                    }
                }
            }
        }

        printf("Instancia %d\n", caso);

        if (valido == 1)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }

        printf("\n");
    }

    return 0;
}
