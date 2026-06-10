#include <stdio.h>

int main()
{
    int vidaluke, vadervida;
    scanf("%d%d", &vidaluke, &vadervida);

    int luke[3][3] = {0};
    int vader[3][3] = {0};

    while (scanf("%d", &luke[0][0]) != EOF)
    {
        if (vidaluke <= 0 || vadervida <= 0)
            break;

        int diagprincipal_luke = 0;
        int diagsecundaria_luke = 0;
        int lsoma = luke[0][0];
        int acaoLuke = 0;

        if (luke[0][0] == 1)
            diagprincipal_luke++;

        for (int j = 1; j < 3; j++)
        {
            scanf("%d", &luke[0][j]);
            lsoma += luke[0][j];
            if (0 + j == 2 && luke[0][j] == 1)
                diagsecundaria_luke++;
        }

        for (int i = 1; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &luke[i][j]);
                lsoma += luke[i][j];
                if (i == j && luke[i][j] == 1)
                    diagprincipal_luke++;
                if (i + j == 2 && luke[i][j] == 1)
                    diagsecundaria_luke++;
            }
        }

        if (lsoma != 3)
            acaoLuke = 0;
        else if (diagprincipal_luke == 3)
            acaoLuke = 1;
        else if (diagsecundaria_luke == 3)
            acaoLuke = 2;

        int diagprincipal_vader = 0;
        int diagsecundaria_vader = 0;
        int vsoma = 0;
        int acaovader = 0;

        for (int k = 0; k < 3; k++)
        {
            for (int l = 0; l < 3; l++)
            {
                scanf("%d", &vader[k][l]);
                vsoma += vader[k][l];
                if (k == l && vader[k][l] == 1)
                    diagprincipal_vader++;
                if (k + l == 2 && vader[k][l] == 1)
                    diagsecundaria_vader++;
            }
        }

        if (vsoma != 3)
            acaovader = 0;
        else if (diagprincipal_vader == 3)
            acaovader = 1;
        else if (diagsecundaria_vader == 3)
            acaovader = 2;

        if (acaoLuke == 0 && acaovader != 0)
            vidaluke -= 15;
        if (acaovader == 0 && acaoLuke != 0)
            vadervida -= 15;
        if (acaoLuke != 0 && acaovader != 0 && acaoLuke == acaovader)
        {
            vidaluke -= 15;
            vadervida -= 15;
        }
    }

    if (vidaluke == vadervida)
        printf("Houve empate.");
    else if (vidaluke <= 0)
        printf("Darth Vader venceu.");
    else if (vadervida <= 0)
        printf("Luke Skywalker venceu.");

    return 0;
}