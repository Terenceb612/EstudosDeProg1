#include <stdio.h>

void maiorpraponta(int array[],int i, int tamanho)
{
    if (i >= tamanho-1)
    {
        return;
    }
    else
    {
        if (array[i] > array[i+1])
        {
        int aux = array[i];
        array[i] = array[i + 1];
        array[i + 1] = aux;
        }
        maiorpraponta(array, ++i,tamanho);
    }
}

void bubblesortrecursivo(int array[], int tamanho)
{
    if (tamanho <=1 )
    {
        return;
    }
    else
    {
        maiorpraponta(array,0,tamanho);
        bubblesortrecursivo(array,--tamanho);
    }
}

void preencher(int a[],int i, int n)
{
    if (i == n)
    {
        return;
    }
    else
    {
        scanf("%d",&a[i]);

        preencher(a,++i,n);
    }
}
int main ()
{
    int array [6];

    preencher(array,0,6);

    bubblesortrecursivo(array,6);

    printf("%d\n%d",array[0],array[5]);

    return 0;
}