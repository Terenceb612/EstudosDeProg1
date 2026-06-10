#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int diaxfrutas[n];
    double totalfrutas = 0;
    double valortotal = 0;
    for (int i = 0; i < n; i++)
    {
        double valor;
        char linhas[200];
        int frutas = 1;
        scanf("%lf",&valor);
        valortotal += valor;
        fgetc(stdin); //limpa o \n do buffer 
        fgets(linhas,sizeof(linhas),stdin);
        
        linhas[strcspn(linhas,"\n")] = '\0';

        for (int j = 3; linhas[j] != '\0'; j++)
        {
            if (linhas[j] == ' ')
            {
                frutas++;
            }
        }

        totalfrutas += frutas;
        diaxfrutas[i] = frutas;
    }

    for (int i = 0; i < n; i++)
    {
        printf("dia %d: %d kg\n",i+1,diaxfrutas[i]);
    }
    double media = totalfrutas/(double)n;

    printf("%.2lf kg por dia\n",media);

    double valormedio = (double)valortotal/(double)n;

    printf("R$ %.2lf por dia\n",valormedio);

    return 0;
}
