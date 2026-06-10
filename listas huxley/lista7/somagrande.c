#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
    char m[10001] = {0}, n[10001] = {0},sum[10002] = {0};
    scanf("%s%s",m,n);
    
    int cabeça;

    if (strlen(m) >= strlen(n))
    {
        cabeça = strlen(m);
    }
    else 
     {
        cabeça = strlen(n);
     }
     
    
    for (int i = strlen(m)-1,j = strlen(n)-1, topo = cabeça; i >= 0 || j >= 0; i--, j--,topo--)
    {
        //variavel = (condição) ? valor_se_verdadeiro : valor_se_falso;

        int digito_m = (i >= 0) ? m[i] - '0' : 0;
        int digito_n = (j >= 0) ? n[j] - '0' : 0;

        sum[topo] += digito_m + digito_n;

        if (sum[topo] >= 10)
        {
            sum[topo-1] += 1;
            sum[topo] = (sum[topo]) %10;
        }
    }
    
    int comecoprint;
    if (sum[0] == 0)
    {
        comecoprint = 1;
    }
    else
    {
        comecoprint = 0;
    }
    
    for (int i = comecoprint; i <= cabeça; i++)
    {

        printf("%c", sum[i] + '0');
    }
    return 0;
}