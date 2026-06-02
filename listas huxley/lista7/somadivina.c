#include <stdio.h>

int main (void)
{
    int n;
    scanf("%d",&n);
    int m1[n][n];
    int m2[n][n];
    int sum[n][n];
    int flag = 0;
    for (int i = 0; i<n; i++)
    {
        for(int j = 0; j<n ; j ++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

    for (int i = 0; i<n; i++)
    {
        for(int j = 0; j<n ; j ++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    
    for (int i = 0; i<n; i++)
    {
        for(int j = 0; j<n ; j ++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            flag += sum[i][j];
        }
    }
    if (flag == 0)
    {
        printf("Vazia");
    }
    else
    {
    for (int i = 0; i<n; i++)
    {
        for(int j = 0; j<n ; j ++)
        {
            printf("%d\n",sum[i][j]);
        }
    }        
    }
   return 0;
}