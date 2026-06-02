#include <stdio.h>
#include <math.h>

double calcularPreco(double preco, double taxa, int anos)
{
    if (preco <= 45 || anos == 0)
    {
        return preco;
    }
    else
    {
        double taxadoano = taxa;
        if (preco <= 100)
        {
            taxadoano = 1 - (1- taxa)/2.0;
        }
        preco *= taxadoano;
        
        if (preco <= 45)
        {
           preco = 45;
        }
    }
    
    return calcularPreco(preco, taxa, anos - 1);
}

void desvalorizacao(int contador, int n, double jogo[])
{
    if (contador == n)
    {
        return;
    }
    else
    {
        int dificuldade;
        double preco;

        scanf("%d%lf",&dificuldade,&preco);
        
        double desconto[] = {0.75,0.80,0.82,0.85,0.87,0.90};
        double taxa = desconto[dificuldade];


       preco = calcularPreco(preco,taxa,3);
        
        jogo[contador] = preco;
        
        printf("Jogo[%d] = R$%.2lf\n",contador,preco);

        return desvalorizacao(++contador,n,jogo);
    }
}

/////////////////////////////////

int main ()
{
    int n;
    
    scanf("%d",&n);
    
    double jogos[n];

    desvalorizacao(0,n,jogos);

    return 0;
}