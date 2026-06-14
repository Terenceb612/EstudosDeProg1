#include <stdio.h>

int main()
{
    int operacoes[100][2];
    double valores[100];
    int total = 0;
    int tipo;
    double valor;

    //le as operacoes ate aparecer o -1
    while (1)
    {
        scanf("%d", &tipo);

        if (tipo == -1)
        {
            break;
        }

        scanf("%lf", &valor);

        operacoes[total][0] = tipo;
        valores[total] = valor;
        total++;
    }

    double creditos = 0;
    double debitos = 0;
    double saldo = 0;

    //executa as operacoes
    for (int i = 0; i < total; i++)
    {
        if (operacoes[i][0] == 1)
        {
            saldo += valores[i];
            creditos += valores[i];
        }
        else
        {
            saldo -= valores[i];
            debitos += valores[i];
        }
    }

    //imprime o resumo
    printf("Creditos: R$ %.2lf\n", creditos);
    printf("Debitos: R$ %.2lf\n", debitos);
    printf("Saldo: R$ %.2lf\n", saldo);

    return 0;
}
