#include <stdio.h>
#include <string.h>

int lercomparaconta(char a[], char b[], int i, int n, int contador)
{
    if (i >= n)
    {
        return contador;
    }   
    if (a[i] == b[i])
    {
        return lercomparaconta(a, b, i+1, n, contador+1);
    }
    else
    {
        return lercomparaconta(a, b, i+1, n, contador);
    }
}


void comparadordegabarito(char gabarito[],int contadordeaprovacao,int totaldealunos,double maiornota)
{
    int alunmni;
    scanf("%d",&alunmni);
    getchar();
    if (alunmni== 9999)
    {
        double coeficientedeaprovacao = ((double)contadordeaprovacao/(double)totaldealunos)*100;
        printf("%.1lf%%\n",coeficientedeaprovacao);
        printf("%.1lf",maiornota);

        return;
    }
    else
    {
        totaldealunos++;

        char alunogab[12];
        fgets(alunogab,12,stdin);
        alunogab[strcspn(alunogab, "\n")] = '\0';

        double acertosaluno = lercomparaconta(alunogab,gabarito,0,strlen(gabarito),0);

        if (acertosaluno >= 6)
        {
            contadordeaprovacao++;
        }
        if (acertosaluno > maiornota)
        {
            maiornota = acertosaluno;
        }
        printf("%d %.1lf\n",alunmni, acertosaluno);

        comparadordegabarito( gabarito, contadordeaprovacao,totaldealunos,maiornota);
    }
    
}

int main()
{
    char gabarito[12];

    fgets(gabarito,12,stdin);
    gabarito[strcspn(gabarito, "\n")] = '\0';
    comparadordegabarito(gabarito,0,0,0);
    
    return 0;
}