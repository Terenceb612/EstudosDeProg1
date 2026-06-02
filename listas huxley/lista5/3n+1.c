#include <stdio.h>

/*funcoes que vou usar

void series, que vai matner o programa rodando ate que o arquivo chegue ate o final
retornando a funcao algoritmo ate que isso seja verdade

void algoritimo, que vai executar os pedidos aritimeticos da questao, bem como printar na tela os resultados

int parimpar, autoexplicativa, se for par vai retornar 1, se for 0 vai retornar impar, ou visse e versa, e fodsse

*/
int parimpar(int n)
{
    int check = n%2;
    
    if (check == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int checartamanho (int n, int tamanho)
{
    if (n == 1)
    {
        return tamanho;
    }
    else
    {
        if (parimpar(n) == 1)
            {
                n = n/2;
            }
        else if (parimpar(n) == 0)

            {
                n = (3*n)+1;
            }
            return checartamanho(n,tamanho+ 1);
        }        
}

void contagem(int i, int j, int tmax,int iorig, int jorig)
{
    int resultado;
    if (i == j)
    { 
        resultado = tmax;
        printf("%d %d %d\n",iorig,jorig,resultado);

        return;
    }
    else
    {
        if (i > j)
        {
            resultado = checartamanho(j,1);

            if (resultado > tmax)
            {
                tmax = resultado;
                
            }
            
            return contagem(i, j+1,tmax, i, j);
        }
        else
        {
            resultado = checartamanho(i,1);

            if (resultado > tmax)
            {
                tmax = resultado;
            }
            
            return contagem(i+1,j,tmax, i , j);
        }
        
    }
}
void series ()
{
   // scanf("%d%d",&i,&j);
    int i,j;

    if (scanf("%d%d",&i,&j) == EOF)
    {
        return;
    }
    else
    {
        contagem(i,j,0, i, j);
        return series ();
    }
}

int main()
{
    series();

    return 0;
}