#include <stdio.h> 

int main ()
{
    double h = 3.00, c = 2.5, f = 2.5 ,r = 1,m = 3.00;
    int qh,qc,qf,qr,qm;

    scanf("%d%d%d%d%d",&qh,&qc,&qf,&qr,&qm);

    double conta = h * qh + c * qc + f * qf + r * qr + m *qm;

    printf("conta final: %.1lf",conta);

    return 0;
}