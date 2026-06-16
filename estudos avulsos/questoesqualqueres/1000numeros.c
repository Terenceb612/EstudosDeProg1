#include <stdio.h>
#include <string.h>

int main ()
{
    char numeros [2002];
    char alvo;
    int contador = 0;

    scanf("%d",&alvo);

    scanf("%s",numeros);

    for (int  i = 0;numeros[i] != '\0'; i++)
    {
        if (numeros[i] == alvo)
        {
            contador ++;
        }   
    }
    printf("%c appeared %d times",alvo,contador);

    return 0;
}