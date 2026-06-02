#include <stdio.h>
#include <math.h>

int traduzir_binario(int letras_contador1,double potencia_contador2)
{
    
    if (letras_contador1 == 0)
    {
        return 0;
    }
    else 
    {
        int n;
        scanf("%d",&n);
        {
            return n * (int) pow(2.0 , potencia_contador2) + traduzir_binario(letras_contador1 - 1, potencia_contador2 -1);
        }
    }
}

void decodificar_mensagem(int qtd_letras)
{
    if (qtd_letras == 0)
    {
    return;
    }
    else
    {
    
    decodificar_mensagem(qtd_letras - 1);         
    int numero = traduzir_binario(7, 6);
    printf("Letra decodificada: %c\n", numero);
    }
}

int main ()
{
    char equipe;
    int qtletras;
    scanf("%c",&equipe);
    scanf("%d",&qtletras);

    decodificar_mensagem(qtletras);
 

    switch (equipe)
    {
    case 'A':
        printf("Equipe Alpha recebeu a mensagem!\n");
        break;
    case 'B':
         printf("Equipe Bravo recebeu a mensagem!\n");
         break;
    case 'C':
         printf("Equipe Charlie recebeu a mensagem!\n");
         break;
    default:
        printf("Equipe Delta recebeu a mensagem!\n");
        break;
    }

    return 0;
}