#include <stdio.h>

int main ()
{
    int idade;

    scanf("%d",&idade);

    if (idade < 16  )
    {
        printf("nao eleitor");
    }
    else if (idade > 65 || idade >=16 && idade <18)
    {
        printf("eleitor facultativo");
    }
    else 
    {
        printf("eleitor obrigatorio");
    }
    return 0;
}