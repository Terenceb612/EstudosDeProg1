#include <stdio.h>

int main ()
{
    int numeros, sorteado;
    int arr[numeros];
    scanf("%d%d",&numeros,sorteado);

    for (int i = 0; i < numeros; i++)
    {
        scanf("%d",&arr[i]);
    }
        for (int i = 0; i < numeros - 1; i++)
    {
        for (int j = 0; j < numeros - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}