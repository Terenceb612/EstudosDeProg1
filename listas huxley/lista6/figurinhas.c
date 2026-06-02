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

void repetidas(int a[], int b[], int i, int n, int j)
{
    if (i >= n)
    {
        return;
    }
    else
    {

    }
}

void figurinhas(int a, int repetidas, int )
{

}
int main ()
{
    int n;
    int arr_figs[n];

    preencher(arr_figs,0,n);
    

    scanf("%d",&n);


}