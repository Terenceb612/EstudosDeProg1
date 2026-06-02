#include <stdio.h>  

void preencher(int a[],int i, int n)
{
    if (i >= n)
    {
        return;
    }
    else
    {
        scanf("%d",&a[i]);

        preencher(a,++i,n);
    }
}

int frequencia(int a[],int contador,int i,int n,int referencia)
{
    if (i == n)
    {
        return contador;
    }
    else
    {
        if (a[i] == referencia)
        {
            contador ++;
        }
        return frequencia(a,contador,++i,n,referencia);
    }
    
}

int main()
{
    int a[10];
    int referencia;

    
    preencher(a,0,10);

    scanf("%d",&referencia);

    int resultado = frequencia(a,0,0,10,referencia);

    printf("%d",resultado);

    return 0;

}   