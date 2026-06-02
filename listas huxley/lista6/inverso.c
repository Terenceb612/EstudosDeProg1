#include <stdio.h>

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

void printarr(int y[],int i,int n)
{
    if (i >= n)
    {
        return;
    }
     else
    {
        if (i == n - 1)
            printf("%d\n", y[i]);
        else
            printf("%d ", y[i]);

        return printarr(y,++i,n);
    }
}


void inverterarray(int a[],int i,int j,int n)
{
    int aux;
    if (i >= j)
    {
        printarr(a,0,n);
        return;

    }
    else
    {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;

        inverterarray(a,++i,--j,n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    preencher(arr,0,n);

    inverterarray(arr,0,n-1,n);

    return 0;
}