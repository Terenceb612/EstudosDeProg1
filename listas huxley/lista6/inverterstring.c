#include <stdio.h>
#include <string.h>


void inverterarray(char arr[], int i, int j)
{
    if (i >= j)
    {
        return;
    }
    else
    {
        char aux;

        aux = arr[j];
        arr[j] = arr[i];
        arr[i] = aux;
        
        inverterarray(arr,++i,--j);
    }
}

int main ()
{
    int n = 256;

    char a[n];

    fgets(a,n,stdin);

    a[strcspn(a, "\n")] = '\0';

    int k = strlen(a);

    inverterarray(a,0,k-1);

    printf("%s",a);
}